#include <iostream>
using namespace std;

int main() {
	int i,x;
	cin>>i;
	x=i;
	while(i>10)
	{
	 i=i/10;
	}
	cout<<"first digit is "<<i<<endl;
	cout<<"last digit is "<<x%10<<endl;
	cout<<"sum of first and last digit is "<<(x%10)+i<<endl;
	
	
	return 0;
}
