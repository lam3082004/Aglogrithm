#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a, b, s = 0;
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2);
    tam = (tam * tam) % mod;
    if (b % 2 == 1)
        tam = (tam * a) % mod;
    return tam;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        s = 0;
        cin >> a >> b;
        for (int i = 30; i >= 0; i--)
        {
            if (b >= mu(2, i))
                b -= mu(a, i);
        }
        cout << s % mod << '\n';
    }
}