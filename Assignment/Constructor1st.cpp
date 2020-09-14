#include<iostream>
using namespace std;

class Circle
{
 float radius;
//Constructors always be mentioned within public access specifier
        public:
	Circle(double rad)
	 {
	  radius=rad;
	 }
      float CircleArea()
	{
	return(3.14*radius*radius);
	}

};


class Rectangle
{
float l,b;
//Constructors always be mentioned within public access specifier
       public:
	Rectangle(double len,double br)
	 {
	 l=len;
	 b=br;
	 }
      double Cal_Rect()
	{
	return(l*b);
	}
};

int main()
{
Circle c(2);
cout<<"Area of Circle is"<<c.CircleArea()<<endl;


Rectangle r(10,10);
cout<<"Area of rectangle is"<<r.Cal_Rect();

return 0;
}
