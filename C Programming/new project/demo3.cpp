#include <iostream>
using namespace std;
int main()
{

    int num, a, rev = 0;

    cout << "Enter no:- ";
    cin >> num;

    a = num % 10;
    num /= 10;
    rev += a * 100L;

    a = num % 10;
    num /= 10;
    rev = rev + a * 10;

    a = num % 10;
    num /= 10;
    rev = rev + a * 1;

    cout << rev;

    return 0;
}