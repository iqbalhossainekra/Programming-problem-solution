#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x1,x2,x3,x4,y1,y2,y3,y4;
cin>>n;
if(n==1)
{
	cin>>x1>>y1;
	cout<<-1<<endl;
}
else if(n==2)
{
	cin>>x1>>y1;
	cin>>x2>>y2;
	if(x1==x2 || y1==y2)
		cout<<-1<<endl;
	else
	cout<<abs(x1-x2)*abs(y1-y2)<<endl;
}
else if(n==3)
{
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	if(x1!=x2 && y1!=y2)
	cout<<abs(x1-x2)*abs(y1-y2)<<endl;
	else if(x1!=x3 && y1!=y3)
		cout<<abs(x1-x3)*abs(y1-y3)<<endl;
		else
			cout<<abs(x2-x3)*abs(y2-y3)<<endl;
}
else if(n==4)
{
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cin>>x4>>y4;
if(x1!=x2 && y1!=y2)
	cout<<abs(x1-x2)*abs(y1-y2)<<endl;
	else if(x1!=x3 && y1!=y3)
	cout<<abs(x1-x3)*abs(y1-y3)<<endl;
	else if(x1!=x4 && y1!=y4)
		cout<<abs(x1-x4)*abs(y1-y4)<<endl;
		else if(x2!=x3 && y2!=y3)
		cout<<abs(x2-x3)*abs(y2-y3)<<endl;
		else if(x2!=x4 && y2!=y4)
		cout<<abs(x2-x4)*abs(y2-y4)<<endl;
		else
			cout<<abs(x3-x4)*abs(y3-y4)<<endl;
}
return 0;
}
