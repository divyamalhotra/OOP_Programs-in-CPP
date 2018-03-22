#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
class vehicle
{
 public:
 char registration_id[10];
 char owner_name[30];
 void get()
 {
  cout<<"\nEnter registration id: ";
  gets(registration_id);
  cout<<"\nEnter owner name: ";
  gets(owner_name);
 }
 void show()
 {
  cout<<"\nRegistration ID"<<setw(20)<<"Owner Name"<<setw(15)<<"Vehicle"<<setw(23)<<"Description";
 }
};
class car:public vehicle
{
 int modelno;
 char color[10];
 float price;
 public:
 void getcar()
 {
  cout<<"\nEnter your car modelno.: ";
  cin>>modelno;
  cout<<"\nEnter color of the car: ";
  cin>>color;
  cout<<"\nEnter price: ";
  cin>>price;
 }
 void showcar()
 {
  cout<<endl<<registration_id<<setw(30)<<owner_name<<setw(15)<<"Car"<<setw(25)<<"Model NO.: "<<modelno;
  cout<<setw(75)<<"Color: "<<color<<endl;
  cout<<setw(70)<<"Price: "<<price;
 }
};
class motorcycle:public vehicle
{
 int modelno;
 char color[10];
 float price;
 public:
 void getmot()
 {
  cout<<"\nEnter your motorcycle modelno.: ";
  cin>>modelno;
  cout<<"\nEnter color of the motorcycle: ";
  cin>>color;
  cout<<"\nEnter price: ";
  cin>>price;
 }
 void showmot()
 {
  cout<<endl<<registration_id<<setw(30)<<owner_name<<setw(20)<<"Motorcycle"<<setw(20)<<"Model NO.: "<<modelno;
  cout<<setw(75)<<"Color: "<<color<<endl;
  cout<<setw(70)<<"Price: "<<price;
 }
};
void main()
{
 char c1;
 int ch,i=0,j=0;
 car c[10];
 motorcycle m[10];
 do
 {
  clrscr();
  cout<<"Choose the vehicle type you want to register for: \n";
  cout<<"1.Car\t\t\t\t2.Motorcycle\n";
  cin>>ch;
  if(ch==1)
  {
   c[i].get();
   c[i].getcar();
   i++;
  }
  else if(ch==2)
  {
   m[j].get();
   m[j].getmot();
   j++;
  }
  else
  cout<<"\nWrong choice!!!";
  cout<<"Do you want to add more? y or n- ";
  cin>>c1;
 }while(c1=='y'||c1=='Y');
 clrscr();
 int k=0;
 c[0].show();
 while(k<i)
 {
  c[k].showcar();
  k++;
 }
 k=0;
 while(k<j)
 {
  m[k].showmot();
  k++;
 }
 getch();
}

