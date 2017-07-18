#include<stdio.h>
#include<math.h>
void main()
{
//initialize variable x to 'A'
char x='A';
int y;
int i,j;
int r;
printf("Enter a number of rows:");
scanf("%d",&r);
//first for loop controls the row and amount of characters that appear on the row
for(y=1;y!=(r+1);++y)
{
	for(i=0;i!=y;++i)
	{
    	printf("%c",x);
    	x++;
	}
	x='A';
	printf("\n");
}
}

