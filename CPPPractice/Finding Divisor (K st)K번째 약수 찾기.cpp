#include <iostream>

int main(void)
{
	
	int p, q, k;
	int count = 0;
	int ary[100];
	std::cin>>p;
	std::cin>>k;
	for(q=1;q<=p;q++)
	
	{
		if(p%q==0)
		{
			ary[count] = q;
			count += 1;	
		}
		
	}
	
	std::cout<<ary[k-1];
	return 0;
}

