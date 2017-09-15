#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a;
	cout<<"enter the number "<<a<<endl;
	if(a%5==0 && a%11==0)
	{
		cout<<a<<" is divisible by 5 and 11"<<endl;
	}
	else
	{
		cout<<a<<" is not divisible by 5 and 11"<<endl;
	}
	return 0;
}
