#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"enter angles of tringle "<<a<<"&"<<b<<"&"<<c;
	if(a+b+c==180)
	{
		cout<<" tringle is valid"<<endl;
	}
	else
	{
		cout<<" tringle is not valid"<<endl;
	}
	return 0;
}
