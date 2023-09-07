#include<iostream>
using namespace std;

class Circle
{
	private:
		int centerX;
		int centerY;
		float rad;
		float cmf;
		float area;
	public:
		Circle()
		{
			centerX = 0;
			centerY = 0;
			rad     = 0;
		}
		Circle(int cx, int cy)
		{
			centerX = cx;
			centerY = cy;
			rad     = 0;
		}
		Circle(int cx, int cy, int r)
		{	
			centerX = cx;
			centerY = cy;
			rad     = r;
		}
		void calcArea();
		float getArea();
		void calcCmf();
		float getCmf();
};

void Circle :: calcArea()
{
	area = 3.14 * rad * rad;
}

float Circle :: getArea()
{
	return area;
}

void Circle :: calcCmf()
{
	cmf = 2 * 3.14 * rad;
}

float Circle :: getCmf()
{
	return cmf;
}

int main()
{     
      
	float area, cmf;
	int cr,cx,cy;
	cout<<"\nEnter the radius : ";
     cin>>cr;
     cout<<"\nEnter the x co-ordinate : ";
     cin>>cx;
     cout<<"\nEnter the y co-ordinate : ";
     cin>>cy;
     Circle c1(cx,cy,cr);
      
	
	c1.calcArea();
	area = c1.getArea();
	cout<<"\nArea of Circle is: "<<area<<endl;
	c1.calcCmf();
	cmf = c1.getCmf();
	cout<<"\nCircumference is: "<<cmf<<endl;
	return 0;
	
}




