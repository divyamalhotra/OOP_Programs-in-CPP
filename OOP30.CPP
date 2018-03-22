#include<fstream>
#include<iostream>
#include<conio.h>

using namespace std;

int main(int argc,char* arg[])
{
 
 int A[]={11,22,33,44,55,66,77,88,99};
 char ch;
 ifstream in;
 ofstream out;
 if(argc!=3)
 {
  cout<<"Error in arguments!!!"<<endl;
 }
 out.open(arg[1]);
 if(!out)
 cout<<"Error in opening "<<arg[1]<<"!!!"<<endl;
 for(int i=0;i<9;i++)
 {
  if(A[i]%2!=0)
  out<<A[i]<<" ";
 }
 out.close();
 out.open(arg[2]);
 if(!out)
 cout<<"Error in opening "<<arg[2]<<"!!!"<<endl;
 for(int i=0;i<9;i++)
 {
  if(A[i]%2==0)
  out<<A[i]<<" ";
 }
 out.close();
 for(int i=1;i<argc;i++)
 {
  in.open(arg[i]);
  cout<<"Contents of "<<arg[i]<<" file = "<<endl;
  in.get(ch);
  while(in.eof()==0)
  {
   cout<<ch;
   in.get(ch);
  }
  cout<<endl;
  in.close();
 }
 return 0;
}
