#include <iostream>
using namespace std;

int main() {
	int a,n2000,n500,n100,n50,n20,n10;
	cin>>a;
	cout<<"enter the amount :"<<a;
	n2000=a/2000;
	a=a%2000;
	n500=a/500;
	a=a%500;
	n100=a/100;
	a=a%100;
	n50=a/50;
	a=a%50;
	n20=a/20;
	a=a%20;
	n10=a/10;
	cout<<" 2000notes= "<<n2000<<" 500notes= "<<n500<<" 100notes= "<<n100<<" 50notes= "<<n50<<" 20notes= "<<n20<<" 10notes= "<<n10<<endl;
	return 0;
