#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES37A.inp", "r", stdin);
    freopen("LES37A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> x;
    int t = x / 500;
    int p = (x - t * 500) / 5;
    cout << t * 1000 + p * 5;
}