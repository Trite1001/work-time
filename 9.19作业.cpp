#include<stdio.h>
/*int main()
{
	printf("Hello world!\n");
	return 0;
 } */
 
 /*int main()
 {
 	printf("*****\n");
 	printf("  *****\n");
 	printf("    *****\n");
 	printf("      *****\n");
 	return 0;
 }*/
 
 int main()
 {
 	int a,b,c,Max;
 	scanf("%d%d%d",&a,&b,&c);
 	if(a>b)
 	{
 		Max = a;
	}
 	else
 	{
 		Max = b;
	}
	if(Max<c)
	{
		Max = c;
	}
	printf("Max = %d\n",Max);
 	return 0;
 }
