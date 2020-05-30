#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
	system("color 9F");
	
	int i = 854;
	int *pi = &i;
	cout<<"My name is Blue!!!!";
	cout<<"The Value of i is "<<i<<endl;
	cout<<"The Pointer of i is "<<pi<<endl;
	cout<<"The Value of i is (By indirect access) "<<*pi<<flush;
	
	
	
	
	
	
	
	return 0;
}
