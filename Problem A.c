#include <stdio.h>

int main()
{

int m[3][3];    //Creating matrix
int trans[3][3];
int i,j;        //Create counter variables
m[0][0]=1;      //Fill in the values
m[0][1]=2;
m[0][2]=3;
m[1][0]=4;
m[1][1]=5;
m[1][2]=6;
m[2][0]=7;
m[2][1]=8;
m[2][2]=9;
for(i=0;i!=3;++i)   //Transpose the elements
{
    for(j=0;j!=3;++j)
    {
        trans[i][j]=m[j][i];
    }
}
printf("Original Matrix:\n ");  //Print original matrix
for(i=0;i!=3;++i)
{
    for(j=0;j!=3;++j)
    {
        printf("%d ",m[i][j]);
    }
    printf("\n");
}
printf("Transposed Matrix:\n"); //Print transposed matrix
for(i=0;i!=3;++i)
{
    for(j=0;j!=3;++j)
    {
        printf("%d ",trans[i][j]);
    }

    printf("\n");
}
return 0;
}
