#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[1001],b[1001],sum[100001],x=-99999999999;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int j=0; j<n; j++)
        cin>>b[j];

    for(int k=0; k<n-1; k++)
        for(int l=k+1; l<n; l++)
        {
            long long int ans=(a[k]|a[l])+(b[k]|b[l]);
            //cout<<sum[x]<<endl;
            if(ans>x)
				x=ans;

        }

    cout<<x<<endl;
    return 0;

}
