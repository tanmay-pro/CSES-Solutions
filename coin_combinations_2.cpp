#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define PI 3.14159265
#define br cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
const ll m = 1e9 + 7;
int p = 31;

int main()
{
    ll n, x;
    cin >> n >> x;
    vl coins(n);
    fo(i, n)
    {
        cin >> coins[i];
    }
    vl dp(x + 1, 0);
    dp[0] = 1;
    fo(i, n)
    {
        Fo(j, 1, x + 1)
        {
            if (j >= coins[i])
            {
                dp[j] += dp[j - coins[i]];
                dp[j] %= m;
            }
        }
    }
    cout << dp[x];
    br;
    return 0;
}