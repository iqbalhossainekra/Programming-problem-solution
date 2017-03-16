#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k,x,y,m;
	long long int a[100],b[100];
	scanf("%lld %lld",&n,&x);
	for(i=0;i<n;i++)
	cin>>a[i];
	long long int sum=0,sum1=0;
	int	flag= 0;
	for(int l=n-1;l>=0;l--)
	{
		sum+=(pow(x,flag)*a[l]);
		//cout<<sum;
		flag++;
	}
	//cout<<sum<<endl;
	scanf("%lld %lld",&m,&y);
	for(j=0;j<m;j++)
	cin>>b[j];
//6cout<<sum;
	int	temp =0;
	for(int z=m-1;z>=0;z--)
	{
		sum1+=(pow(y,temp)*b[z]);
		//cout<<sum1 ;
		temp++;
	}
	//cout<<sum1<<endl;
		if(sum>sum1)
			printf(">\n");
		else if(sum<sum1)
			printf("<\n");
		else
			printf("=\n");

	return 0;
}
