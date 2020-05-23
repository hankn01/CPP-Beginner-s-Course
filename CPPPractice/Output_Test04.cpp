#include <iostream>
using namespace std;
int main(void)
{
	int kor, mat, eng, sum, avg;
	cin>>kor;
	cin>>mat;
	cin>>eng;
	sum = kor + mat + eng;
	avg = (kor+mat+eng)/3;
	
	cout<<"ÇÕ°è : "<<sum<<endl;
	cout<<"Æò±Õ : "<<avg<<endl;
	
	
	return 0;
}
