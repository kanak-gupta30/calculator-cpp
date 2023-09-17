#include<iostream.h>
#include<conio.h>
class calculator{
public:
void sum(float,float);
void sub(float,float);
void multiply(float,float);
void divide(float,float);
};
void calculator::sum(float a,float b)
{
cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b;
}
void calculator::sub(float a,float b)
{
cout<<"substraction of "<<a<<" and "<<b<<" is "<<a-b;
}
void calculator::multiply(float a,float b)
{
cout<<"Product of "<<a<<" and "<<b<<" is "<<a*b;
}
void calculator::divide(float a,float b)
{
cout<<"division of "<<a<<" and "<<b<<" is "<<a/b;
}
void main()
{
float a,b;
class calculator ob;
int choice;
clrscr();
cout<<"-----------------------[ Calculator ]---------------------"<<endl;
cout<<"enter two numbers :";
cin>>a;
cin>>b;
cout<<"1.Addition"<<endl<<"2.Substraction"<<endl<<"3.Multiplication"<<endl<<"4.division"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>choice;
switch(choice)
{
case 1:
ob.sum(a,b);
break;
case 2:
ob.sub(a,b);
break;
case 3:
ob.multiply(a,b);
break;
case 4:
ob.divide(a,b);
break;
default:
cout<<"Invalid choice";
}
getch();
}

