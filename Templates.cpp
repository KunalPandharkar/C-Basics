#include <iostream>
using namespace std;

template <class Type, class Type2>
Type sum(Type a, Type b)
{
    return a + b;
}

int main()
{
    cout << sum<int,float>(10,20) << endl;
}