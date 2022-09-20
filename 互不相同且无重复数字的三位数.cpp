#include<stdio.h>
int main()
{
	int i,j,s,count;
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			for(s=1;s<5;s++)
			{
				if(i!=j&&i!=s&&j!=s)
				{
					printf("%d%d%d ",i,j,s);
					count++; 
				}
			}
		}
	}
	printf("\ncount = %d\n",count);
 } 
