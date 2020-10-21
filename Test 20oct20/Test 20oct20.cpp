#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 5, c = 7;
    a = b; cout << a << endl;
    b = a; cout << b << endl;;
    c = a + 1;
    cout << c << endl;
    c = a + (b = 5);
    cout << c;
    return 0;
}
