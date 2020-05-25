#include <iostream>
using namespace std;
int main(void)
{
int s, e;

int i, j;
cin>>s;
cin>>e;

if(s>9||s<2||e>9||e<2)
{
	cout<<"INPUT ERROR!";
}
else
{
if(s<=e)
{
for(i=s;i<e+1;i++)
{
	for(j=1;j<=9;j++)
	{
		cout<<i<<" * "<<j<<" = "<<" "<<i*j<<" ";
		if(j%3==0)
		cout<<endl;
	}
	cout<<endl;
}
}
else
{
	for(i=s;i>e-1;i--)
{
	for(j=1;j<=9;j++)
	{
		cout<<i<<" * "<<j<<" = "<<" "<<i*j<<" ";
		if(j%3==0)
		cout<<endl;
	}
	cout<<endl;
}
}
}
return 0;
}
