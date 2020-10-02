#include<iostream>
using namespace std;
class demo{
	private:
		int a;
		public:
			void set(int x)
			{
				a=x;
			}
			void sum(demo *ob1,demo *ob2)
			{
				ob1->a=ob1->a-1;
				a=ob1->a+ob2->a;
			}
			void print()
			{
				cout<<"value of a is "<<a<<endl;
			}
			
};
int main(){
	demo d,d1,d2;
	d.set(10);
	d1.set(20);
	d2.sum(&d,&d1);
	d.print();
	d1.print();
	d2.print();
	return 0;
	
}
