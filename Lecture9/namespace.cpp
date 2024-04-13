 #include <iostream>
using std::cout;
using std::endl;

namespace first
{
    int var = 5;
}
namespace second
{
    double var = 3.1416;
}

int main ()
{
        int a;
        a = first::var + second::var;
        cout << a << endl;
        return 0;
}