#include<stdio.h>
int main()
{
	int i,j,k;
	float a,b,sum=0;
	float result;
	for(i=1;i<=10;i++ )
		{scanf("%f %f",&a,&b);
	sum+=a*b;}
	result=sum/21;
	printf("%f\n",result);
	return 0;

}
