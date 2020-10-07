#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		void setvalue(int x)
		{
			a=x;
		}
		void putvalue(){
			cout<<"value of a is "<<a<<endl;
		}
				friend void display(A,B);
};
class B{
	int b;
	public:
		void setvalue(int y){
			b=y;
		}
		void putvalue()
		{
			cout<<"value of b is "<<b<<endl;
		}
		friend void display(A,B);
};
void display(A ob1,B ob2){

cout<<"sum of a and b is "<<(ob1.a+ob2.b);
}
int main()
{
	A A1;
	B B1;
	A1.setvalue(10);
	B1.setvalue(20);
	A1.putvalue();
	B1.putvalue();
	display(A1,B1);
	return 0;
}
