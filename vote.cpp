#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter age";
	cin>>n;
	if(n>=18)
	{
		cout<<"eligable for vote";
	}
	else
	{
		cout<<"eligable to vote after "<<18-n<<" years";
	}
}
