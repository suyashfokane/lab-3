#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	cout<<"enter piice to buy is "<<a<<" enter price to cell="<<b;
	if(a>b)
	{
		cout<<" loss="<<a-b<<endl;
	}
	else
	{
		cout<<" profit="<<b-a<<endl;
	}
	return 0;
}
