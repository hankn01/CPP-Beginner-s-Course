#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int x, y;
	int val;
	cin >> x;
	cin >> y;
	if (x >= pow(2, 31) || y >= pow(2, 31)||x<0||y<0)
	{
		cout << "�ùٸ��� ���� ���� �ԷµǾ����ϴ�.";
	}
	
	if (x == 0 && y == 0)
		val = 1;
	else {
		val = pow(x, y);
		
		}
	cout << val;


}