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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES24B.inp", "r", stdin);
    freopen("LES24B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    fo(i, 0, s.size() - 2)
    {
        if (s[i] == s[i + 1])
        {
            cout << "Bad";
            return 0;
        }
    }
    cout << "Good";
}