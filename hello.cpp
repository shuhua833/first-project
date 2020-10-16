#include<iostream>
using namespace std;
class A{
	public :
		void print1()
		{
			cout<<"Hello everyone"<<endl;
		}
};
class B:public A
{
	public:
	void print2()
	{
		cout<<"Minasan konichhiwa"<<endl;
	}
};
class C: public B
{
	public:
	void print3()
	{
		cout<<"the end";
	}
};
int main()
{
	class C c;
	c.print1();
	c.print2();
	c.print3();
	return 0;
}
