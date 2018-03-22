#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class op
{
 char *str;
 int len,var;
 public:
 void getvar()
 {
  cin>>var;
 }
 void getstr(char *s)
 {
  len=strlen(s);
  str=new char[len+1];
  strcpy(str,s);
 }
 void operator-()
 {
  cout<<"Result: "<<-var;
 }
 void operator+(op o)
 {
  len=len+o.len;
  char *str1;
  strcpy(str1,str);
  str=new char[len+1];
  strcpy(str,str1);
  strcat(str,o.str);
  cout<<"Result: "<<str;
 }
};
void main()
{
 clrscr();
 op o,o1,o2;
 int ch;
 char *str1,*str2;
 cout<<"Choose :\n";
 cout<<"1. + operator overloading\n";
 cout<<"2. - operator overloading\n";
 cin>>ch;
 if(ch==1)
 {
  cout<<"Enter the 2 strings: \n";
  gets(str1);
  gets(str2);
  o1.getstr(str1);
  o2.getstr(str2);
  o1+o2;
 }
 else if(ch==2)
 {
  cout<<"Enter a number: \n";
  o.getvar();
  -o;
 }
 else cout<<"Wrong choice\n";
 getch();
}




