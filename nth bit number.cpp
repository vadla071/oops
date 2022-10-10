#include<iostream>
using namespace std;
int main()
{
	int num,n,nb;
	cout<<"enter the number";
	cin>>num;
	cout<<"enter the nth bit to set (0-31): ";
	cin>>n;
	nb=((1<<(n-1))|num);
	cout<<nb;
}
