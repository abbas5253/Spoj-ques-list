#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t; double a,b,c,d;
  cin>>t;
  for(ll i=0;i<t;i++)
  {
    cin>>a>>b>>c>>d;
    double s1 = a+b+c-d;
    double s2 = a+b+d-c;
    double s3 = a+d+c - b;
    double  s4 = b+d+c-a;
    double ans = 0;
    ans = sqrt(s1*s2*s3*s4);
    ans= ans/4.00;
    printf("%.2lf\n",ans);
  }

}
