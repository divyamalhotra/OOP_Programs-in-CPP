#include<iostream.h>
#include<conio.h>
#include<math.h>
#define e 2.71828
class ans
{
 int y;
 public:
 void gety()
 {
  cin>>y;
 }
 float result()
 {
  return 2-y*pow(e,2*y)+pow(4,y);
 }
};
void main()
{
 clrscr();
 ans a;
 cout<<"Enter y: ";
 a.gety();
 cout<<"Answer: "<<a.result();
 getch();
}