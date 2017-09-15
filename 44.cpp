#include <iostream>
using namespace std;

int main() {
	int a,b=1;
	cin>>a;
	cout<<"enter the number whose factorial is required: "<<a<<endl;
	while(a>1)
	{
	b=b*a;
	a=a-1;
	}
	cout<<"the factorial is "<<b<<endl;
	return 0;
}
