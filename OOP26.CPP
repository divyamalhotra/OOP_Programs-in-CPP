#include<iostream.h>
#include<conio.h>
class exc
{
 int a,b;
 public:
 void get()
 {
  cin>>a>>b;
 }
 void divide()
 {
  if(b!=0)
  cout<<"Answer: "<<a/b;
  else
  throw b;
 }
};
void main()
{
 clrscr();
 exc e;
 cout<<"Enter 2 nos. to divide: ";
 e.get();
 try
 {
  e.divide();
 }
 catch(int)
 {
  cout<<"Division by zero not possible!!!";
 }
 getch();
}