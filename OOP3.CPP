#include<iostream.h>
#include<conio.h>
class fibo
{
 int n;
 public:
 void getdata()
 {
  cin>>n;
 }
 int fib(int);
 void show();
};
int fibo::fib(int n)
{
 if(n==0)
 return 0;
 else if(n==1)
 return 1;
 else
 return (fib(n-1)+fib(n-2));
}
void fibo::show()
{
 for(int i=0;i<n;i++)
 cout<<fib(i)<<" ";
}
void main()
{
 clrscr();
 fibo f;
 cout<<"Enter the no. of terms for fibonacci series: ";
 f.getdata();
 f.show();
 getch();
}