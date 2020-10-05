#include<iostream>
using namespace std;
class demo{
	int a;
	public:
		void set(int x)
		{
			a=x;
		}
		demo &sum(demo ob2,demo &ob3)
		{
			ob3.a=a+ob2.a;
			return ob3;
		}
		void print()
		{
			cout<<"value of a is "<<a<<endl;
		}
};
int main()
{
	demo d1,d2,d3;
	d1.set(10);
	d2.set(20);
	d3=d1.sum(d2,d3);
	d1.print();
	d2.print();
	d3.print();
	return 0;
	}
