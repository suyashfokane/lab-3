#include <iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	cout<<"enter the charcter: ";
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<ch<<" is vowel"<<endl;
	}
	else
	{
		cout<<ch<<" is consonant"<<endl;
	}
	return 0;
}
