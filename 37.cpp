#include <iostream>
using namespace std;

int main() {
	int a,b,rev=0;
	cin>>a;
	cout<<"the entered number is "<<a<<endl; 
	while(a>0)
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}
	cout<<"the reversed number is "<<rev<<endl;
	return 0;
}
