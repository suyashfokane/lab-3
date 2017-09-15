#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cin>>a>>b>>c;
	cout<<"enter three numbers"<<a<<"&"<<b<<"&"<<c<<endl;
	if(a>b && a>c)
	{
		cout<<"the laegest is "<<a<<endl;
	}
	if(b>c && b>a)
	{
		cout<<"the largest is "<<b<<endl;
	}
	if(c>a && c>b)
	{
		cout<<"the largest is "<<c<<endl;
	}
