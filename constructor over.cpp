#include<iostream>
class a
{
	public:
		a(int a2)
		{
			std::cout<<"a";
		}

a (int a1,int b)
{
	std::cout<<"2nd fn";
}
};
int main()
{
	a obj(1);
	a obj1(3,4);
	return 0;
}
