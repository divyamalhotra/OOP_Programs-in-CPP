#include<iostream.h>
#include<conio.h>
class fact
{
 int num;
 public:
 void getnum()
 {
  cin>>num;
 }
 void showfact()
 {
  cout<<"Factorial of "<<num<<" = "<<cal_fact(num)<<endl;
 }
 int cal_fact(int);
};
int fact::cal_fact(int n)
{
 int f=1;
 for(int i=2;i<=n;i++)
 f=f*i;
 return f;
}
void main()
{
 clrscr();
 fact f;
 cout<<"Enter the value of number whose factorial you want to calculate: ";
 f.getnum();
 f.showfact();
 getch();
}

