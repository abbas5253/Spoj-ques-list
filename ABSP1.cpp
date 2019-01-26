#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
  ll t;
  cin>>t;
  for(ll i=0;i<t;i++)
  {
    ll n;
    cin>>n;
    ll ar[n];
    ll ans =0;
    for(ll j = 0;j<n;j++)
    {
      cin>>ar[j];
    }
    ll k= 0;
    for(ll j = n-1;j>=0;j--)
  {
    ans = ans+(n-1-k*2)*ar[j];
    k++;
  }
  cout<<ans<<endl;
  }
  return 0;
}
