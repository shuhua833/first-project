#include<iostream>
using namespace std;
class Shape{
	protected:
	int width;
	int height;
	public:
		int setwidth(int w)
		{
			width=w;
		}
		int setheight(int h)
		{
			height=h;
		}
};
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};
int main() {
   Rectangle Rect;
   Rect.setwidth(5);
   Rect.setheight(7);
   cout << "Total area: " << Rect.getArea();
   return 0;
}
