#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long int a,x,n,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>a;
		cout<<(a-x)*(a+3+x)/2<<endl;
	}

	return 0;
}
