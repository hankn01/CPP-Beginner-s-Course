#include <iostream>
using namespace std;
int main(void)
{
	
	int n1, n2, n3;
	int product;
	int count[10] = {0};
	int i;
	int k;//���� ���� 
	
	cin>>n1;//�� �Է� 
	cin>>n2;
	cin>>n3;
	product = n1 * n2 * n3;//�� ���ϱ�    
	while(1)
	{
		 if(product/10 == 0)//������ ���� ���� 
		 {
			count[product] = count[product] + 1;
			break; 
		 }
		k = product % 10;// �������� ī��Ʈ �ø���      
		count[k] = count[k] + 1;
		product = product / 10; //�ڸ����� �̵��ϸ鼭 ��� ����  
	
	}
	
	for(i=0;i<=9;i++)// ����� ���    
	{
		cout<<count[i]<<endl;
	}
	
	return 0;
}
