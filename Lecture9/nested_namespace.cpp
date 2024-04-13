// L9/nested_namespace.cpp
// Nested namespaces
// Niels Walet, Last modified 03/12/2019
namespace my_company 
{
  namespace my_module 
  {
    namespace my_module_part 
    {
      namespace my_submodule_part 
      {
        namespace xxx 
        {
          class my_class;
        }
      }
    }
  }
}  
int main()
{
  return 0;
}
