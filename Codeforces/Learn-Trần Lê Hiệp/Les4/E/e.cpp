#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, kq = 0, s = 0;
ii a[nmax];
bool cmp(ii a, ii b)
{
    return a.fi * b.se > b.fi * a.se;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + n + 1, cmp);
    fo(i, 1, n)
    {
        kq += 2 * a[i].fi * s;
        s += a[i].se;
    }
    cout << kq;
}