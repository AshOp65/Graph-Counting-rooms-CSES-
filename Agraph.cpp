#include"bits/stdc++.h"
using namespace std;
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define sd(val) scanf("%d",&val)
#define su(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define ll long long
#define ld long double
#define mod 1000000007
#define nl  "\n"
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define tx  int n; cin>>n;
#define w(x)  int t; cin>>t; while(t--)
#define cheetah ios_base::sync_with_stdio(false); cin.tie(0);
#define mod   1000000007

  //जय श्री राम

//<------------------------------------------------------------------------------->

char a[1005][1005];
bool vis[1005][1005];
 string s="DLRU";
void dfs(int i,int j,int n,int m){
  if(i<0 || j<0 || i>=n || j>=m) return;
  if(a[i][j]=='#' || vis[i][j]) return;
  vis[i][j]=true;

  dfs(i+1,j,n,m);
  dfs(i-1,j,n,m);
  dfs(i,j+1,n,m);
  dfs(i,j-1,n,m);

  return;
  
}

 void solve() {

 int n,m;
 cin>>n>>m;
 for(int i=0; i<n; i++){
  for(int j=0; j<m;j++){
    cin>>a[i][j];
    vis[i][j]=false;
  }
 }
 int cnt=0;
 for(int i=0; i<n; i++){
  for(int j=0; j<m; j++){
    if(a[i][j]!='#' && !(vis[i][j])){
      dfs(i,j,n,m);
      cnt++;
    }
  }
 }
 cout<<cnt<<nl;
}


int main() 
{
 cheetah;

 int t=1;
 //cin>>t; 
 while(t--){
  solve();
 }


return 0;
   
}
