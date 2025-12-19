#include <iostream>
using namespace std;
int fact(int n)
{
    int c = 1;
    if (n == 0 || n == 1)
        return 1;
    for (int i = 1; i <= n; i++)
    {
        c = c * i;
    }
    return c;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << fact(i) / (fact(i - k) * fact(k)) << " ";
        }

        cout << endl;
    }
    return 0;
}