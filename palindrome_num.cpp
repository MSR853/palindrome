#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,x,y;
	cout<<"enter integer n";
	cin>>n;
	x=n;
	while(n>0)
	{
		y=n%10;
		sum=(sum*10)+y;
		n=n/10;
	}
	if(x==sum){cout<<"Number is a palindrome";}
	else{cout<<"Number is not a palindrome";}
	return 0;
}
