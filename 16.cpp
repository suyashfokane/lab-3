#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cin>>a>>b>>c;
	cout<<"enter sides of tringle "<<a<<"&"<<b<<"&"<<c;
	if(a==b==c)
	{
		cout<<" tringle is equilateral"<<endl;
	}
	else if(a==b || b==c || c==a)
	{
		cout<<" tringle is isosceles"<<endl;
	}
	else 
	{
		cout<<" tringle is scalene"<<endl;	
	}
	return 0;
	}
