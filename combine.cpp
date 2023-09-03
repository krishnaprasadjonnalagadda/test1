#include<stdio.h>
int main()
{
	int a;
	int b; 
	int *pt1=&a,*pt2=&b;

    

	printf("enter the first value ");
	scanf("%d%d", a,b);
	if(*pt1>*pt2)
	{
		printf("%d the maximum number is", *pt1);
	}
	else
	{
		printf("%d the maximum number is", *pt2);
}



}