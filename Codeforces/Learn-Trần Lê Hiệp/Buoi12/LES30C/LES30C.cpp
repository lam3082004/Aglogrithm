
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll l, r, minn = 1e9;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES30C.inp", "r", stdin);
    freopen("LES30C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> l >> r;
    if (r - l >= 2018)
        cout << 0;
    else
    {
        fo(i, l, r)
        {
            fo(j, i + 1, r)
            {
                minn = min(minn, i * j % 2019);
            }
        }
        cout << minn;
    }
}