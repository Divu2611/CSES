/***************Ferris Wheel***************/
//author: @Divyesh Chhabra

#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const unsigned long int m = 1e9 + 7;
#define loop(i, n, k) for (int i = k; i < n; i++)
#define revl(i, n, k) for (int i = n; i > k; i--)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0;
    ll x;
    cin >> n >> x;
    ll p[n];
    loop(i, n, 0) cin >> p[i];

    sort(p, p + n);

    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (p[i] + p[j] > x)
            j--;
        else
        {
            i++;
            j--;
        }
        ans++;
    }

    cout << ans;
    return 0;
}