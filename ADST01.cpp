#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p =1000000007;
ll k = 123456791%p;
ll mode(ll a,ll b,ll p)
{
	if(a == 0) return 0;
	if(b == 0) return 1;
	ll ans;
	if(b%2 == 0)
	{
		ans = mode(a,b/2,p);
		ans = (ans*ans)%p;
	}
	else
	{
		ans = (a%p)*mode(a,b-1,p);
		ans = ans%p;
	}
	return ans;
}

int main()
{
	ll n,t;
	cin>>t;
	for( ll i=0;i<t;i++)
	{
		cin>>n;
		ll ans = (((36*(n%p))%p+50*mode(10,n,p))%p - 50 +p)%p;
		ll ans1 = (ans*(k%p))%p;
		cout<<ans1<<endl;
	}

}
