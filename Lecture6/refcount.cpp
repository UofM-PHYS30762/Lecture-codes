// L6/refcount.cpp
// An example of using a reference counter
// I know I have copied large parts of this, but don't remember the source
// Source: Prof. Niels Walet's code repository
#include<iostream>
class array_2d {
public:
  array_2d();                           
  array_2d(int, int);                   
  array_2d(array_2d const&);             
  array_2d& operator= (array_2d const& );
  ~array_2d();
  double&& element(int, int) const;   
  double& operator()(int, int);  
private:
  class data {
  public:
    data();
    data(int i, int j);
    data(data const& d);
    ~data();
    double& element(int i, int j); //reference to given entry
    // use_count is the number of array_2d objects that point at this
    // use_count must be initialized to 1 by all constructors
    size_t use_count{1};
    double * array{nullptr}; // pointer to hold data
    int dim1{};
    int dim2{}; //dimensions
  };
  data* data_storage {nullptr};
};
array_2d::data::data() = default;
array_2d::data::data(int i, int j) : 
  array{new double[i*j]},dim1{i},dim2{j}  {}
array_2d::data::data(data const& d)//deep copy
{
  std::cout <<" deep copy\n";
  array=new double[(d.dim1)*(d.dim2)];
  for(int i{}; i<d.dim1*d.dim2;i++)
    array[i]=d.array[i];
}
array_2d::data::~data(){
  std::cout <<" deleting data\n";
  use_count=0; 
  dim1=0; 
  dim2=0;
  delete[] array;
}
double& array_2d::data::element(int i, int j){
  // could do bounds checking
  return array[dim1*i+j];
}
array_2d::array_2d()             : data_storage{new data()} { }
array_2d::array_2d(int i, int j) : data_storage{new data{i, j}} { }
array_2d::array_2d(array_2d const& array_cp)//copy constructor
  : data_storage{array_cp.data_storage} //make sure our data points to f's data
{
  ++data_storage->use_count; //increment the counter
}
array_2d& array_2d::operator= (array_2d const& array_rhs)
{// This order properly handles self-assignment and  recursion
  data* const old = data_storage;
  data_storage = array_rhs.data_storage;
  ++data_storage->use_count;
  if (--old->use_count == 0) delete old;
  return *this;
}
array_2d::~array_2d()
{ //decrement counter, delete if no-one is using it
  if (--data_storage->use_count == 0) delete data_storage;
}
double&& array_2d::element(int i, int j) const
{
  return  std::move(data_storage->element(i,j));
}
double& array_2d::operator()(int i, int j) 
{// Copy on demand; first check if this is the only pointer to *data_storage
  if (data_storage->use_count > 1) {
    data* d = new data(*data_storage);    // Invoke array_2d::data's copy c'tor
    --data_storage->use_count;
    data_storage = d;
  }
  // Now the method proceeds to access "data_storage->..." as normal
  return data_storage->element(i,j);
}
int main()
{
  array_2d a1;
  array_2d a2{10,2};
  std::cout <<" before first assignment  : "<<a2.element(1,2)<<std::endl;
  a1=a2;
  std::cout <<" before element assignment: "<<a1.element(1,2)<<std::endl;
  a1(1,2)=1;
  std::cout <<" at end                   : "<<a1.element(1,2)<<std::endl;
  return 0;
}
