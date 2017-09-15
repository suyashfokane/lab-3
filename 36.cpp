#include <iostream>
using namespace std;

int main() {
int num, rem=0, prd=1;
	cout<<"Enter a Number :";
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		prd=prd*rem;
		num=num/10;
	}
	cout<<"product of the digits of "<<temp<<" is "<<prd;;
	
	
	return 0;
}
