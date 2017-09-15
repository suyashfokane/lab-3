#include <iostream>
using namespace std;

int main() {
	float a,b,bigger;
	cout<<"enter two numbes"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		bigger=a;
	}
	else
	{
		bigger=b;
	}
	cout<<a<<"and"<<b<<" bigger among two numbers is "<<bigger<<endl;	
	return 0;
}
