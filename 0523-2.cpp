#include <iostream>

using namespace std;

int main(void)
{
	int i = 10;
	long l = 123456789L;
	float f = 3.141592F;
	double d = 1.0e-15;
	char c = 'C';
	char cpp[4] = "C++";

	cout << i << ' ' << l << ' ' << f << ' ' << d << ' ' << endl;
	cout << cpp << " is better than " << c << endl;
	cin >> i;
	cout << "입력한 값은 " << i << " 입니다.\n" << flush;




	return 0;
}