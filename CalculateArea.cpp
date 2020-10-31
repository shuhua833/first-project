#include<iostream>
using namespace std;
class shape{
		public:
			int r=2;
			int l=9,b=2;
			
};
class circle : public shape{
	public:
		void CalculateArea()
		{
			cout<<"area of circle is "<<2*r*3.14<<endl;
		}
};
class square :public shape{
	public:
		void CalculateArea()
		{
			cout<<"area of reactangle is "<<l*b;
		}
};
int main()
{
	circle c;
	square s;
	c.CalculateArea();
	s.CalculateArea();
	return 0;
	
}
