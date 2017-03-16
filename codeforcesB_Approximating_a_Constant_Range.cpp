#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100005],b[100005];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int l=0;
    for(int j=0; j<n-1; j++)
    {
        int sum=1;
        for(int k=j+1; k<=n; k++)
        {
            //cout<<sum<<endl;
            if(a[j]==a[k])
                sum++;

            else if((a[k]-a[j])==1)
                sum++;
            else if(k ==(n-1))
            {
                b[l]=sum;
                //cout<<"hd "<<b[l]<<endl;
                l++;
            }
            else
            {
                b[l]=sum;
                //cout<<"hd "<<b[l]<<endl;
                l++;
                break;
            }
        }

    }
    sort(b,b+l);

    cout<<b[l-1]<<endl;
    return 0;
}
