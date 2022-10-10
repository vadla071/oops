#include<iostream>
using namespace std;
int main()
{
	int n,i,a[100],c;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c>2)
	{
		cout<<"it is not prime number";
	}
	else
	{
		cout<<"it is prime number";
	}
}
