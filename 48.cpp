#include <iostream>
using namespace std;

int main()
{
    int n, i, c = 0,x=2;
    cout << "Enter any number n: ";
    cin>>n;
    while( x<=n)
    {
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout<<x << " is a Prime number" << endl;
    }
    else
    {
     cout<<x << " is not a Prime number" << endl;	
    }
    x=x+1;
    c=0;
    }
    return 0;
