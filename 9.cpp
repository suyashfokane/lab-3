#include <iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	cout<<"enter the charcter: ";
	if(ch>='a' && ch<='z') 
	{
		cout<<ch<<" is lowercase alphabet"<<endl;
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<ch<<" is uppercase alphabet"<<endl;
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<ch<<" is digit"<<endl;	
	}
	else
	{
		cout<<ch<<" is special charcter"<<endl;	
	}
	return 0;
}
