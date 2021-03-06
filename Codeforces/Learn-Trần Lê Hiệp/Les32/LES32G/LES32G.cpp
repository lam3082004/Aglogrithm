#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fn(i, a, b) for (int i = a; i >= b; i ==)
#define maxn 1000005
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES32G.inp", "r", stdin);
    freopen("LES32G.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n >> mod;
    sieve();
    for (int i = 1; i <= k; ++i)
        a[i] = n - k + i;
    for (int i = 2; i <= k; ++i)
        if (pr[i] == 0)
            del(i);
    for (int i = 1; i <= k; ++i)
        a[i] %= mod;
    int ans = 1;
    for (int i = 1; i <= k; ++i)
        ans = 1ll * ans * a[i] % mod;
    cout << ans << '\n';
}