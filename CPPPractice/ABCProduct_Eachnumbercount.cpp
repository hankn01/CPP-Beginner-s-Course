#include <iostream>
using namespace std;
int main(void)
{
	
	int n1, n2, n3;
	int product;
	int count[10] = {0};
	int i;
	int k;//변수 선언 
	
	cin>>n1;//값 입력 
	cin>>n2;
	cin>>n3;
	product = n1 * n2 * n3;//값 곱하기    
	while(1)
	{
		 if(product/10 == 0)//나눗셈 종료 지점 
		 {
			count[product] = count[product] + 1;
			break; 
		 }
		k = product % 10;// 나머지로 카운트 올리기      
		count[k] = count[k] + 1;
		product = product / 10; //자릿수를 이동하면서 계속 진행  
	
	}
	
	for(i=0;i<=9;i++)// 결과값 출력    
	{
		cout<<count[i]<<endl;
	}
	return 0;
}
