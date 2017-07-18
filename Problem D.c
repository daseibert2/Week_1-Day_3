#include<stdio.h>
#include<math.h>
void main()
{
    /*
    * Reverse letter thing (D)
    */

    int n=15; //Controls how many lines
    char chars[26];

    for(int i=0;i<n;i++)
    {
        //Append character
        chars[i]=65+i; //ASCII
        //Print stuff
        for(int x=i;x!=-1;x--)
        {
            printf("%c ",chars[x]);
        }
        printf("\n");
    }
}
