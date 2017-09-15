#include <iostream>
using namespace std;

int main() {
	int i,last,x;
	cin>>i;
	x=i;
	while(i>10)
	{
	 i=i/10;
	}
	cout<<"first digit is "<<i<<endl;
	cout<<"last digit is "<<(x%10)<<endl;
	return 0;
}
