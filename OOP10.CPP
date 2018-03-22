#include<iostream.h>
#include<conio.h>
class A
{
 int *p;
 public:
 A();
 ~A();
};
A:: A()
{
  *p=0;
  cout<<"Object initialised!!!"<<endl;
}
A::~A()
{
  delete p;
  cout<<"Memory deallocated!!!"<<endl;
  getch();
}
void main()
{
 clrscr();
 A a1;
 getch();
}
