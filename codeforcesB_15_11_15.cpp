#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int c,b,a[200005],n;
	cin>>n;
	b=0;
	c=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		b+=abs(c-a[i]);
		c=a[i];
	}
	cout<<b<<endl;
	return 0;
}
