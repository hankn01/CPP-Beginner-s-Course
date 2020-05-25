#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int i, j, k = 1;
	for(i=0;i<n;i++)
	{
		k = i + 1;
		for(j=1;j<=n;j++)
		{
		cout<<k<<" ";
		k = k + n;
}
cout<<endl;

	}
	
	
	return 0;
}

