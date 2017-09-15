#include <iostream>
using namespace std;

int main() {
	int a,b,max,x;
	cin>>a>>b;
	cout<<"enter two numbers whose lcm is requirer "<<a<<" "<<b<<endl;
            if(a>b)
            {
            	max=a;
            }
            else
            {
            	max=b;
            }
            while(max>0)
            {
            	if(max%a==0 && max%b==0)
            	{
            	cout<<"lcm is "<<max<<endl;
            	}
            	else
            	{
            	max=max+1;	
            	}
            }
	return 0;
}
