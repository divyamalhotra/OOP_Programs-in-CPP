#include<iostream.h>
#include<conio.h>
class A
{
 int a,b;
 public:
 A()
 {
  a=0;
  b=0;
 }
 A(int x, int y)
 {
  a=x;
  b=y;
 }
 A(A&x)
 {
  a=x.a;
  b=x.b;
 }
 void show()
 {
  cout<<"a = "<<a<<endl;
  cout<<"b = "<<b<<endl;
 }
};
void main()
{
 clrscr();
 A a1;
 cout<<"Value through default constructor: \n";
 a1.show();
 cout<<endl;
 A a2(3,5);
 cout<<"Value through parameterised constructor: \n";
 a2.show();
 cout<<endl;
 A a3(a2);
 cout<<"Value through copy constructor: \n";
 a3.show();
 cout<<endl;
 getch();
}
