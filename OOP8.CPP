#include<iostream.h>
#include<conio.h>
class largest
{
 int a,b,c;
 public:
 void getdata(int,int,int);
 void showdata();
 int lar();
};
inline int largest::lar()
{
  if(a>=b&&a>=c)
  return a;
  else if(b>=a&&b>=c)
  return b;
  else
  return c;
}
void largest::getdata(int x, int y, int z)
{
 a=x;
 b=y;
 c=z;
}
void largest::showdata()
{
 cout<<"Largest of "<<a<<", "<<b<<" and "<<c<<" is = "<<lar();
 cout<<endl;
}
void main()
{
 clrscr();
 largest l;
 int x,y,z;
 cout<<"Enter 3 nos: ";
 cin>>x>>y>>z;
 l.getdata(x,y,z);
 l.showdata();
 getch();
}
