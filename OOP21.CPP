#include<iostream.h>
#include<conio.h>
class base
{
 public:
 void show()
 {
  cout<<"Show base\n";
 }
 virtual void display()
 {
  cout<<"Display base\n";
 }
};
class derived:public base
{
 public:
 void show()
 {
  cout<<"Show derived\n";
 }
 void display()
 {
  cout<<"Display derived\n";
 }
};
void main()
{
 clrscr();
 base *ptr,b;
 derived d;
 ptr=&b;
 ptr->show();
 ptr->display();
 ptr=&d;
 ptr->show();
 ptr->display();
 getch();
}