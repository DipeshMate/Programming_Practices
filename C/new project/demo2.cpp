#include <iostream>

using namespace std;

int main()
{
    int num, a, sum = 0;

    cin >> num;

    a = num % 10;
    num /= 10;
    sum += a;
    cout << a;

    a = num % 10;
    num /= 10;
    sum += a;
    cout << a;

    a = num % 10;
    num /= 10;
    sum += a;
    cout << a;

    a = num % 10;
    num /= 10;
    sum += a;
    cout << a;

    a = num % 10;
    num /= 10;
    sum += a;
    cout << a << endl;

    cout << sum;

    return 0;
}