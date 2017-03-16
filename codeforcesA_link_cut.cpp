#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,k,l=0,m;
    cin>>j>>n>>k;
    for(long long int i=0;; i++)
    {
    	m=pow(k,i);
        if(m>=j && m<=n)
        {
            printf("%lld ",m);
            l=1;
        }

    }
    if(l==1)
        printf("\n");
    else
        printf("-1\n");
    return 0;
}
