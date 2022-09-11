#include <iostream>
using namespace std;

int main()
{
    cout << "one\ntwo\nthree" << endl;
    cout << "left\tright" << endl;
    cout << "vertical tab \v vertical tab" << endl;
    cout << "\" , \' , \\";

    // raw string avoid escape characters
    string str = R"(string with \backslash)";
    string str1 = "&%$(string with \\backslash)&%$";

    cout << endl
         << str << " " << str1;

    int a = 10, b;

    int c = (b=10,b+10);

    cout << endl << c ;
}