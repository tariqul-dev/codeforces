#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    int sum_x = 0, sum_y = 0, sum_z = 0;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sum_x += a;
        sum_y += b;
        sum_z += c;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}