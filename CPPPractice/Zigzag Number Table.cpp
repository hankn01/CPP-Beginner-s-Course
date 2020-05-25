#include <iostream>
using namespace std;

int main(void)
{
	
	int n, m;
	int ary[5000];
	int i, j, k;
	cin>>n;
	cin>>m;
	for(k=0;k<n*m;k++)
	{
		ary[k] = k+1;
	}
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		for(j=0;j<m;j++)
		{			
				cout<<ary[i*m+j]<<" ";
		}
	}
	else
	{
		for(j=m;j>0;j--)
		{			
				cout<<ary[i*m+j-1]<<" ";
		}
	}
	cout<<endl;
	}
	
	
}
