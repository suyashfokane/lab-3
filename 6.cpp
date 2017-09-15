#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	cout<<"enter the year "<<a<<endl;
	if(a%4==0)
	{
		cout<<a<<" is leap year"<<endl;
	}
	else
	{
		cout<<a<<" is not leap year"<<endl;
	}
	return 0;
}
