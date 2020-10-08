#include<iostream>
using namespace std;
class beta;
class alpha{
	int x;
	public:
		void setdata(int d)
		{
			x=d;
		}
		friend beta;
};
class beta{
	public:
		void func(alpha a)
		{
			cout<<a.x<<endl;
		}
};
int main()
{
	alpha a;
	a.setdata(99);
	beta b;
	b.func(a);
	
}
