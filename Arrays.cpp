#include <iostream>
using namespace std;

int arrayglobal[5];

void print(int arr[])
{
    for (int i = 0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main()
{
    int arraylocal[5] = {1, 2, 3, 4};
    int arr1[]{1, 2, 3, 4, 5};

    print(arrayglobal);
    print(arraylocal);
    print(arr1);

    cout << arr1[arraylocal[0]];

    char str[20] = "Kunal";

    cout << endl
         << str << endl;

    for (char c : str)
    {
        cout << c << ' ';
    }

    int s = sizeof(str) / sizeof(str[0]);

    cout << endl
         << s << endl;

    for (int i = 0; i < s; i++)
    {
        if (str[i] == '\0')
            break;
        cout << i << str[i] << endl;
    }
}