#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void reverse(char string[100],int s,int e);

int main()
{
	char str[50];
	int s=0, a=0, startIndex,endIndex ,space[20],found=0;
	cout<<"Enter your Name: ";
	gets(str);
	
	space[0]=0;
	while(str[a] != '\0')
	{
		if( str[a] == ' ' )
		{
			s++;
			space[s]=a;
			found=1;
		}
		
		a++;
	}
	s++;	
	space[s]=a-1;
	if( found==0)
	{
		startIndex=0;
		endIndex= (a-1);
		reverse(str , startIndex, endIndex );
		
	}
	if( found == 1)
	{
		for(a=0 ; a<s ; a++)
		{
			if(a==0 )
			{
				startIndex=space[a];
				endIndex=space[a+1]-1;	
				reverse(str , startIndex, endIndex );
			}
			if(a==(s-1) )
			{
				startIndex=space[a]+1;
				endIndex=space[a+1];	
				
				reverse(str , startIndex, endIndex );
		
			}
			if( a!=0 && a!=(s-1) )
			{
				startIndex=space[a]+1;
				endIndex=space[a+1]-1;	
				reverse(str , startIndex, endIndex );
			}
		}
	}	

	cout<<"\nReverse order is :"<<str;	

	return 0;
}

void reverse(char string[100],int s,int e)
{
	char r[50];
	int b,c,x;
	b=s;
	c=0;
	while( b<= e)
	{
		r[c]=string[b];
		b++;
		c++;
	}
		
	for(x=e, c=0 ; x>= s ; x-- , c++  )
	{
		string[x]= r[c];
	
	}
	
	
}


