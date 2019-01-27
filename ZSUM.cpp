#include<bits/stdc++.h>
using namespace std;

#define ll long long

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

/*ll final(ll n,ll k,ll p)
{

  if(n == k)
  {
    return ((2*mode(n,n,p))%p);
  }
  if(n > k)
  {
    return (mode(n,k,p)*((1+mode(n,n-k,p))%p)%p);
  }
  if(k>n){
    return (mode(n,n,p)*((1+mode(n,k-n,p))%p)%p);
  }
}*/

int main()
{
  ll n,k,p;
  while(1){
  cin>>n>>k;
  if(n == 0 && k == 0) break;
  ll p = 10000007;
  ll ans1 = (2*mode(n-1,n-1,p))%p;
  ll ans2 = (2*mode(n-1,k,p))%p;
  ll ans3  = mode(n,n,p)%p;
  ll ans4 = mode(n,k,p)%p;
  ll ans = (ans1+ans2+ans3+ans4)%p;
  
  cout<<ans<<endl;
}
}
