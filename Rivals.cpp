#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll p = 1000000007;
ll ar[2000010];

ll mode(ll n,ll k,ll p)
{
  if(k==0) return 1;
  if(n == 0) return 0;
  ll ans = 0;

  if(k%2 == 0)
  {
    ans = mode(n,k/2,p);
    ans = (ans*ans)%p;
  }
  else{
    ans = (mode(n,k-1,p)*(n%p))%p;
  }
  return ans;
}


void fact()
{
  ar[0] = 1;
  ar[1] = 1;
  for(ll i=2;i<2000010;i++)
  ar[i] = (ar[i-1]*i)%p;
}

ll fer(ll a,ll p)
{
  return mode(a,p-2,p);
}

int main()
{
  ll t;
  fact();
  cin>>t;
  for(ll i=0;i<t;i++)
  {
    ll x,y;
    cin>>x>>y;
    ll ans1 = (fer(ar[x],p)*fer(ar[y],p))%p;
    ll ans = ((ar[x+y]%p)*ans1)%p;
    cout<<ans<<endl;
  }
}
