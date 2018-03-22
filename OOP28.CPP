#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 char ch;
 ofstream o("file.txt");
 cout<<"Enter the text: ";
 cin.get(ch);
 while(ch!='\n')
 {
  o<<ch;
  cin.get(ch);
 }
 o.close();
 cout<<"Text written in file as: "<<endl;
 ifstream i("file.txt");
 i.get(ch);
 while(i.eof()==0)
 {
  cout<<ch;
  i.get(ch);
 }
 getch();
}
