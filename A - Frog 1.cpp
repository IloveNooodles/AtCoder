#include <bits/stdc++.h>
using namespace std;

#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sf(a)          scanf("%d", &a)
#define sz(x)          (int)((x).size())
#define fill(x, y)     memset(y, x, sizeof(y))
#define forn(i, n)     for(int i = 0; i < n; i++)
#define all(x)         (x).begin(), (x).end()
#define ci(x)          long long x; cin>>x;
#define cii(x, y)      int x, y;    cin>>x>>y;
#define ciii(x, y, z)  ll x, y, z; cin>>x>>y>>z;
#define TC(x)          ci(x); while(x --)
#define rep(i, x, y)   for ( int i = x; i <= y; i ++)
#define repi(i, x, y)  for ( int i = x; i >= y; i --)
#define forei(itr, x)  for (itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define endl "\n"
typedef unsigned long long      ull;
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<int, ii>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   long long      inf = 1e9+7;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;
const   int            mxn = 1e5;

int main () {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n+5];
    int dp[n+5];
    int ans = 0;
    forn(i, n){
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = abs(arr[1] - arr[0]);

    for(int i = 2; i < n; i++){
        int a = dp[i-1] + abs(arr[i-1] - arr[i]);
        int b = dp[i-2] + abs(arr[i-2] - arr[i]);
        dp[i] = min(a, b);
    }
    cout << dp[n-1];
}
