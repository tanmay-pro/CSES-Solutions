#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define tr(container, it) \
    for (auto it = container.begin(); it != container.end(); it++)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
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
ll MOD = 1e9 + 7;
int p = 31;

int main()
{
    amazing;
//    ll t = 1;
//    cin >> t;
//    while (t--)
//    {
//    }
	ll n;
	cin >> n;
	vl p(n);
	fo(i, n)
	{
		cin >> p[i];
	}
	
	ll min_diff = MOD;
	for (int b = 0; b < (1<<n); b++)
	{
		ll sum1 = 0, sum2 = 0;
		for (int i = 0; i < n; i++)
		{
			if ((b&(1<<i)))
			{
				sum1+=p[i];
			}
			else
			{
				sum2+=p[i];
			}
		}
		min_diff = min(min_diff, abs(sum1 - sum2));
	//		cout << sum1 << " " << sum2;
	//		br;
	}
//	cout << min_diff;
//	br;
	return 0;
}