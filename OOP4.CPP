#include<iostream.h>
#include<conio.h>
class calc
{
 int ans;
 float ans1;
 public:
 int add(int a,int b)
 {
  return (a+b);
 }
 float add(float x,float y)
 {
  return (x+y);
 }
 int sub(int a,int b)
 {
  if(a>b)
  return (a-b);
  else
  return (b-a);
 }
 float sub(float x,float y)
 {
  if(x>y)
  return (x-y);
  else
  return (y-x);
 }
 float mul(float x,float y)
 {
  return (x*y);
 }
 float div(float x,float y)
 {
  return (x/y);
 }
};
void main()
{
 clrscr();
 int a,b;
 float x,y;
 char op;
 calc c;
 cout<<"Enter two operands: ";
 cin>>x>>y;
 a=x;
 b=y;
 cout<<"Enter the operator: ";
 cin>>op;
 if(op=='+')
 {
  cout<<"Sum of the 2 nos.: ";
  if((x-a)==0)
  cout<<c.add(a,b);
  else
  cout<<c.add(x,y);
 }
 else if(op=='-')
 {
  cout<<"Difference of the 2 nos.: ";
  if((x-a)==0)
  cout<<c.sub(a,b);
  else
  cout<<c.sub(x,y);
 }
 else if(op=='*')
 {
  cout<<"Product of the 2 nos.: ";
  cout<<c.mul(x,y);
 }
 else if(op=='/')
 {
  cout<<"Division of the 2 nos.: ";
  cout<<c.div(x,y);
 }
 else
 cout<<"Wrong choice\n";
 getch();
}




