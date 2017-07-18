int main()
{	int size =0;
    printf("enter number of rows in triangle:");
	scanf("%d",&size);//sets the size of array in a size X size area
	size++;
	int triangle[size][size];//initialization of array
	for(int layer=0;layer<size;layer++)
		{

			for(int column=0;column<size;column++){

				triangle[layer][column]= 0;
			}
		}
	triangle[0][0]=1;
	for(int layer=1;layer<size;layer++)//sets the numbers within the array to their respective number
	{
		triangle[layer][0]=1;
		for(int column=1;column<layer;column++){

			triangle[layer][column]= triangle[layer-1][column-1]+triangle[layer-1][column];
		}
	}
	int count,temp,maxd=0;
for(int column=0;column<size;column++)//counts the number of digits in the last row
			{
                temp=triangle[size][column];
					while(temp!=0) {
					        temp = temp/10;
					        ++maxd;
					    }
			}
	for(int layer=0;layer<size;layer++)//this is the beginning of my print loop
	{
		for(int column=0;column<layer;column++)//counts the number of digits in each row
		{
			temp=triangle[layer][column];
				while(temp!=0) {
				        temp = temp/10;
				        ++count;
				    }
		}
		if(count<8)//these two make the first few lines of output pretty
							count++;
		if(count==1)
									count++;
		for(int x=0;x<(((maxd)-layer)-(count-layer)/2);x++)//adds appropriate number of spaces before the printing of integers
					printf(" ");
		for(int column=0;column<layer;column++){

			printf("%d ",triangle[layer][column]);//prints number within [row][column] of the array
			}
		count =0;
		printf("\n");
	}
	return 0;
}
