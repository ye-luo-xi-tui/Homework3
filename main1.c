#include <stdio.h>
int main()
{
 int abc[10];
 int temp=0;
 for(;temp<=9;temp++)
	 scanf("%d",&abc[temp]);
 temp--;
 for(;temp>=0;temp--)
	{ 
	 printf("%d",abc[temp]);
         printf("\n"); 
        } 
 return 0;
}
