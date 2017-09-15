#include <iostream>
using namespace std;

int main() {
	int a,b=1;
	cin>>a;
	cout<<"enter the number whose factors are required: "<<a<<endl;
	while(a>=b)
	{
		if(a%b==0)
		{
		cout<<b<<" is a factor of "<<a<<endl;	
		}
		b=b+1;
	}
	
	return 0;
}
