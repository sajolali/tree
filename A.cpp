#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define rrep(i,a,b) for(int i = (a); i >= (b); --i)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

#define sortv(v) sort(all(v))
#define rev(v) reverse(all(v))
#define uniq(v) v.erase(unique(all(v)), v.end())
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define mt make_tuple
#define in insert
#define er erase

#define gcd __gcd
#define lcm(a,b) ((a)*(b)/gcd(a,b))
#define mod 1000000007
#define inf 1e18
#define PI acos(-1)

#define dbg(x) cerr << #x << " = " << x << endl;
#define dbg2(x,y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl;
vector<int>adj[20005];
int n;
int dfs(int node){
   int defth=1;
   for(auto child:adj[node]){
    defth=max(defth,1+dfs(child));
   }
   return defth;
}
void solve() {
    cin>>n;
    vector<int>roots(n+1);
    for(int i=1;i<=n;i++){
        cin>>roots[i];
        if(roots[i]!=-1){
            adj[roots[i]].pb(i);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(roots[i]==-1){
            ans=max(ans,dfs(i));
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    fastio
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}