#include <bits/stdc++.h>
using namespace std;
#define read cin >>
#define readd(x) \
    int x;       \
    cin >> x

int main()
{
    int n, y, m, d;
    read n >> y;
    if (n > 365)
    {
        y = n / 365;
        n = n - 365;
        m = n / 30;
        n = n - (m * 30);
        d = n;
    }
    else if (n < 365)
    {
        y = 0;
        m = n / 30;
        n = n - (m * 30);
        d = n;
    }
    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);

    return 0;
}