#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
    
ll gcd(ll a,ll b){
 if(b==0)return a;
return gcd(b,a%b);}
    
void digits(int n){
 cout<<floor(log10(n)) + 1;}
    
 bool sortingdescending(pair<int,int> a,pair<int,int> b){
if( a.second<b.second) return false;
return true;
}
    
bool poweroftwo(ll x) {
return x && (!(x & (x-1)));
}
    
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n],b[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
// if(n==1 && a[0]!=b[0]) cout<<"NO\n";
// else if(n==1 && b[0]==a[0]) cout<<"YES\n";
// else{
    int l=n+1,r=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]){
            l=min(l,i);
            r=i;
        //   break;
          }  
        }
    // } for (int i = n-1; i >= 0; i--)
    // {
    //     if(a[i]!=b[i]){
    //         r=i;
    //     }
    //     break;
    // }
    // cout<<l<<" "<<r<<nl;
    bool flag=(l>r )|| (b[l]>a[l]);
    // cout<<flag<<nl;
    for (int i = l; i < r; i++)
    {
        // if(b[i]-a[i]==0)continue;
       if(b[i]-a[i]!=b[i+1]-a[i+1]){
            flag=false;
            break;
        }
    }
    
  if(flag) cout<<"YES\n";
else cout<<"NO\n";
  
}


return 0;
}