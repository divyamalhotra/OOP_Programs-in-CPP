#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class count
{
 char a[100];
 int c,w,l;
 public:
 void get()
 {
  gets(a);
 }
 void cal();
 void show()
 {
  cal();
  cout<<"No. of lines\t\tNo. of words\t\tNo. of characters\n";
  cout<<l<<"\t\t\t"<<w+1<<"\t\t\t"<<c;
 }
};
void count::cal()
 {
  c=w=l=0;
  for(int i=0;a[i]!='\0';i++)
  {
   c++;
   if(a[i]==' ')
   w++;
   if(a[i]=='.')
   l++;
  }
 }
void main()
{
 clrscr();
 count obj;
 cout<<"Enter the text: \n";
 obj.get();
 obj.show();
 getch();
}
