#include <iostream>
using namespace std;

int main() {
	int i,n,sum=0;
	cin>>n;
	cout<<"sum of all numbers from 1 to n "<<endl;
	for(i=1;i<=n;i++)
	{
	sum=sum+i;	
	}
	cout<<sum<<endl;
	return 0;
}
