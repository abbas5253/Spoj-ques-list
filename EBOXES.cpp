#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t,n,k,t1,f;
  cin>>t;
  for(ll i=0;i<t;i++)
  {
    cin>>n>>k>>t1>>f;
    ll m = 0;
    m = (f-n)/(k-1);
    cout<<(n+k*m)<<endl;
  }
  return 0;
}
