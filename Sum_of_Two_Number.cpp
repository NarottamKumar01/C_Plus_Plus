// write a program to add the sum of two numbers
#include <conio.h>
#include <iostream>
using namespace std;
int sum(int,int);
int main (){
//	clrscr();
	int a,b;
	cout<<"Enter the two numbers";
	cin>>a>>b;
	cout<<"sum is"<<sum(a,b);
	getch();
}
int sum(int x, int y){
	return(x+y);
}
