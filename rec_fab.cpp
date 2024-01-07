#include<stdio.h>
int fab(int s)
{
	if(s<=1)
	 return s;
	else
	 return(fab(s-1)+fab(s-2));
	 
}

int main()
{
	int n,i;
	printf("enter number::");
	scanf("%d",&n);
	printf("\nTHE FABONACCI SERIES IS::\n");
	for(i=0;i<n;i++)
	 printf("%d\n",fab(i));
}
