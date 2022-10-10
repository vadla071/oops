#include<iostream>
using namespace std;
class a
{
	public:
		void b()
		{
			cout<<'b';
		}
};
class c
{
	public:
		void d()
		{
			cout<<'1';
		}
};
int main()
{
	a o;
	o.b();
	c o1;
	o1.d();
}
