#include<iostream.h>
#include<conio.h>
#include<math.h>
class shape
{
 public:
 virtual float area()=0;
 virtual float perimeter()=0;
 virtual void getside()=0;
};
class square:public shape
{
 float s;
 public:
 void getside()
 {
  cout<<"Enter the side of square: ";
  cin>>s;
 }
 float perimeter()
 {
  return 4*s;
 }
 float area()
 {
  return s*s;
 }
};
class rectangle:public shape
{
 float l,b;
 public:
 void getside()
 {
  cout<<"Enter the length and breadth of the rectangle: ";
  cin>>l>>b;
 }
 float perimeter()
 {
  return 2*(l+b);
 }
 float area()
 {
  return l*b;
 }
};
class circle:public shape
{
 float r;
 public:
 void getside()
 {
  cout<<"Enter the radius of the circle: ";
  cin>>r;
 }
 float perimeter()
 {
  return 6.28*r;
 }
 float area()
 {
  return 3.14*r*r;
 }
};
class triangle:public shape
{
 float a,b,c;
 public:
 void getside()
 {
  cout<<"Enter the sides of the triangle: ";
  cin>>a>>b>>c;
 }
 float perimeter()
 {
  return (a+b+c);
 }
 float area()
 {
  float s;
  s=perimeter()/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
 }
};
void main()
{
 clrscr();
 shape *ptr;
 int ch;
 char c1;
 square s;
 rectangle r;
 circle c;
 triangle t;
 do
 {
  clrscr();
  cout<<"Choose the shape: \n";
  cout<<"1.Square \t\t\t\t 2.Rectangle\n";
  cout<<"3.Circle \t\t\t\t 4.Triangle\n";
  cin>>ch;
  if(ch==1)
  {
   ptr=&s;
   ptr->getside();
   cout<<"Perimeter of square: "<<ptr->perimeter()<<" units\n";
   cout<<"Area of square: "<<ptr->area()<<" sq. units\n";
  }
  else if(ch==2)
  {
   ptr=&r;
   ptr->getside();
   cout<<"Perimeter of rectangle: "<<ptr->perimeter()<<" units\n";
   cout<<"Area of rectangle: "<<ptr->area()<<" sq. units\n";
  }
  else if(ch==3)
  {
   ptr=&c;
   ptr->getside();
   cout<<"Perimeter of circle: "<<ptr->perimeter()<<" units\n";
   cout<<"Area of circle: "<<ptr->area()<<" sq. units\n";
  }
  else if(ch==4)
  {
   ptr=&t;
   ptr->getside();
   cout<<"Perimeter of triangle: "<<ptr->perimeter()<<" units\n";
   cout<<"Area of triangle: "<<ptr->area()<<" sq. units\n";
  }
  else
  cout<<"Wrong choice!!!\n";
  cout<<"Do you want to perform more?? y or n-\n";
  cin>>c1;
 }while(c1=='y'||c1=='Y');
 getch();
}