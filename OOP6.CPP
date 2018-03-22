#include<iostream.h>
#include<conio.h>
int var=5;
class sro
{
 int var;
 public:
 sro()
 {
  var=0;
 }
 void getdata()
 {
  cin>>var;
 }
 void show_local()
 {
  cout<<"Value of local variable: "<<var<<endl;
 }
 void show_global()
 {
  cout<<"Value of global variable: "<<::var<<endl;
 }
};
void main()
{
 clrscr();
 sro s;
 cout<<"Enter the value of local variable: ";
 s.getdata();
 cout<<"Enter the value of global variable: ";
 cin>>::var;
 s.show_local();
 s.show_global();
 getch();
}