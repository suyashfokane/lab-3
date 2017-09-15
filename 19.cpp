#include <iostream>
using namespace std;

int main() {
	float p,c,m,b,cm,x;
	cin>>p>>c>>m>>b>>cm;
	cout<<"marks physics="<<p<<" chemistry="<<c<<" maths="<<m<<" biology="<<b<<" computer="<<cm;
	x=(p+c+m+b+cm)*100/500;
	cout<<"percentage marks="<<x<<endl;
	if(x>=90)
	{
		cout<<"gradeA"<<endl;
	}
	else if(x>=80)
	{
		cout<<"gradeB"<<endl;
	}
	else if(x>=70)
	{
		cout<<"gradeC"<<endl;
	}
	else if(x>=60)
	{
		cout<<"gradeD"<<endl;
	}
	else if(x>=40)
	{
		cout<<"gradeE"<<endl;
	}
	else
	{
		cout<<"gradeF"<<endl;
	}
	return 0;
}
