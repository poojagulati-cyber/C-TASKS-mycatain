#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{

int x,y;
cout<<"Enter first number:- ";
cin>>x;
cout<<"Enter second number:- ";
cin>>y;

cout<<"\n..........Before swaping..........."<<endl;
cout<<"First number:- "<<x<<endl;
cout<<"Second nunber:- "<<y;
swap(&x,&y);

cout<<"\n..........After swaping............."<<endl;
cout<<"First number:-  "<<x<<endl;
cout<<"Second number:- "<<y;


}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
