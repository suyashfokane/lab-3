#include <iostream>
using namespace std;

int main() {
	int a,b,rev=0,x;
	cin>>a;
	x=a;
	cout<<"the entered number is "<<a<<endl; 
	while(a>0)
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}
	if(rev==x)
	{
	cout<<"the entered number is a paliondrom"<<endl;	
	}
	else
	{
	cout<<"the entered number is not a paliondrom"<<endl;	
	}
	return 0;
}
