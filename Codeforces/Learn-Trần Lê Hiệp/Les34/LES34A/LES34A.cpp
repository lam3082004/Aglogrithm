#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES34A.inp", "r", stdin);
    freopen("LES34A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    string t = s;
    reverse(s.begin(), s.end());
    fo(i, 0, s.size()) if (s[i] != t[i])
        dem++;
    // cout << s << " " << t;
    cout << dem / 2;
}