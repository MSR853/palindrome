#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char string[50];
	int len,i,x,flag=0;
	cout<<"enter the string";
	cin>>string;
	len=strlen(string);
	for(i=0,x=len-1;i<=len/2;i++,x--)
	{
		if(string[i]!=string[x])
		flag=1;
		break;
	}	
	if(flag==0)
	cout<<"string is a palindrome";
	else
	cout<<"not a palindrome";
return 0;
}
