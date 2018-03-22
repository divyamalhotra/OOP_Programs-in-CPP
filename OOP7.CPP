#include<iostream.h>
#include<conio.h>
class shape
{
 float r,b,h;
 public:
 float area(float);
 float area(float,float);
};
float shape:: area(float r)
{
 return 3.14*r*r;
}
float shape:: area(float b,float h)
{
 return .5*b*h;
}
void main()
{
 clrscr();
 shape circle,triangle;
 int choice;
 float rad,b,h;
 cout<<"Choose :\n";
 cout<<"1. Area of a circle\n";
 cout<<"2. Area of a triangle\n";
 cin>>choice;
 if(choice==1)
 {
  cout<<"Enter the radius: ";
  cin>>rad;
  cout<<"Area of the circle with radius "<<rad<<" is = "<<circle.area(rad)<<"sq. units"<<endl;
 }
 else if(choice==2)
 {
  cout<<"Enter the base and height of the triangle: ";
  cin>>b>>h;
  cout<<"Area of the triangle is = "<<triangle.area(b,h)<<"sq. units"<<endl;
 }
 else
 cout<<"Wrong choice\n";
 getch();
}
