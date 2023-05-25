//#include <iostream>
#include<stdio.h>

//using namespace std;

int main() {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	   int w,x,y,z;
	   //cin>>w>>x>>y>>z;
	   scanf("%d %d %d %d",&w,&x,&y,&z);
	   if(w==x||w==y||w==z||w==x+y||w==x+z||w==z+y||w==x+y+z)
	   printf("yes\n");
	   else
	   printf("no\n");
	    
	}
	return 0;
}