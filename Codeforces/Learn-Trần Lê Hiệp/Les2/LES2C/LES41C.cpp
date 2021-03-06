#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, q, x;
ii a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES41C.inp", "r", stdin);
    freopen("LES41C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i].fi;
        a[i].se = i;
    }
    sort(a + 1, a + n + 1);
    cin >> q;
    while (q--)
    {
        ll l = 1, r = n, pos = 0;
        cin >> x;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (a[mid].fi == x)
            {
                pos = a[mid].se;
                break;
            }
            else if (a[mid].fi < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << pos << '\n';
    }
}