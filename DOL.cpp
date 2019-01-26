#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
  ll n,m,i,t;
  cin>>t;
  for(int j = 0;j<t;j++)
  {
    cin>>n;
    while(n%2 == 0)
    {
      n = n/2;
    }
    cout<<"Case "<<j+1<<": "<<n<<endl;
  }
  return 0;
}
