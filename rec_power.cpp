#include<stdio.h>
 int pow(int x,int y)
 {
 	if(y==0)
 	 return 1;
 	else
 	 return x*pow(x,y-1);
 }
int main()
{  int x,y;
   printf("enter value of x and y");
   scanf("%d%d",&x,&y);
	printf("base to power=%d",pow(x,y));
}
