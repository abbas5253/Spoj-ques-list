#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a[1000001];long  long n,t;
  cin>>t;
  int it = 2,k = 1;
  a[0] = 1;
  a[1] = 2;
  long long i = 1;
  while(1)
  {
    for(int j = 0;j<a[k-1];j++)
    {
      a[i] = it; i++;
      if(i>1000000) break;
    }
    it++;
    k++;
    if(i>1000000) break;
  }
  for(int i=0;i<t;i++)
  {
    cin>>n;
    cout<<"Case #"<<n<<": "<<a[n-1]<<endl;
  }
  return 0;
}
