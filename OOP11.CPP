#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class players
{
 char* fieldname;
 char* type_of_sport;
 float experience;
 public:
 void getdata()
 {
  cout<<"Enter field name: ";
  gets(fieldname);
  cout<<"Enter type of sport: ";
  gets(type_of_sport);
  cout<<"Enter experience: ";
  cin>>experience;
 }
 void show()
 {
  cout<<"Field Name: "<<fieldname<<endl;
  cout<<"Type of sport: "<<type_of_sport<<endl;
  cout<<"Experience: "<<experience<<endl;
 }
};
class zone:virtual public players
{
 protected:
 int zrank;
 void getrank()
 {
  cout<<"Enter zonal rank: ";
  cin>>zrank;
 }
};
class national:virtual public players
{
 protected:
 int nrank;
 void getrank()
 {
  cout<<"Enter national rank: ";
  cin>>nrank;
 }
};
class international:public zone,public national
{
 int rank;
 void cal_rank()
 {
  rank=zrank+nrank;
 }
 public:
 void getrank()
 {
  zone::getrank();
  national::getrank();
 }
 void showrank()
 {
  cal_rank();
  show();
  cout<<"Zonal Rank: "<<zrank<<endl;
  cout<<"National Rank: "<<nrank<<endl;
  cout<<"Final Rank: "<<rank<<endl;
 }
};
void main()
{
 clrscr();
 international obj;
 obj.getdata();
 clrscr();
 obj.getrank();
 clrscr();
 obj.showrank();
 getch();
}