#include<stdio.h>
int sum(int n)
{
	if(n==0)
	 return 0;
	else
	 return n+sum(n-1);
}

 int main()
 {
 	int n;
 	printf("enter num::");
 	scanf("%d",&n);
 	
 	printf("sum of natural numbers=%d",sum(n));
 }
