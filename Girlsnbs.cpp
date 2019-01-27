#include<bits/stdc++.h>
using namespace std;

int main()
{
  double b,g;
  while(1){
  cin>>b>>g;
  if(b==-1&&g==-1) break;
  if(b == 0)
  {cout<<g<<endl; continue;}
  if(g==0)
  {cout<<b<<endl; continue;}
  if(b==0&&g==0)
  {
    cout<<"0"<<endl; continue;
  }
  if(b>=g)
  cout<<ceil(b/(g+1))<<endl;
  else
  cout<<ceil(g/(b+1))<<endl;
}

}
