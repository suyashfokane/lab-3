#include <iostream>
using namespace std;

int main() {
	int i,n,sum=0;
	cin>>n;
	cout<<"sum of all odd numbers from upto n "<<endl;
	for(i=1;i<=n;i=i+2)
	{
	sum=sum+i;	
	}
	cout<<sum<<endl;
	return 0;
}
