#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cin>>a>>b>>c;
	cout<<"enter sides of tringle "<<a<<"&"<<b<<"&"<<c;
	if(a+b>c && b+c>a && a+b>c)
	{
		cout<<" tringle is valid"<<endl;
	}
	else
	{
		cout<<" tringle is not valid"<<endl;
	}			
	return 0;
	}
