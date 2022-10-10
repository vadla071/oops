#include<iostream>
class Degree
{
	public:
		Degree()
		{
			std::cout<<"i have a degree";
		}
};
class undergraduate: public Degree
{
	public:
		undergraduate()
		{
			std::cout<<"i am an undergraduate";
		}
};
class postgraduate:public Degree
{
	public:
		postgraduate()
		{
			std::cout<<"i am an postgraduate";
		}
};
int main()
{
	undergraduate u;
	postgraduate P;
}
