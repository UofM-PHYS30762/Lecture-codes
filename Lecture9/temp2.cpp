// L9/temp2.cpp
// Implicit varaiable type in template
// Niels Walet, Last modified 03/12/2019
template<class T> class Array { /*...*/ }; 
template<class T> void sort(Array<T>& v); // primary template 
template<> void sort(Array<int>&); // specialization for T = int 
// no need to write 
// template<> void sort<int>(Array<int>&);
int main() {
  return 0;
}
