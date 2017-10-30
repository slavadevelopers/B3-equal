#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b) {
        a = a + 1;
        b = b + 2;
    }
    cout << a << " " << b << endl;
    return 0;
}
