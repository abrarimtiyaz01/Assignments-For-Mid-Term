//Name : Abrar Imtiyaz 
//Roll-no : ECE-22-09
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int i, q, row;
	printf("Enter number of rows: \n");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
	    for(q=1;q<=i;q++)
	    {
			printf("%d",q);
		}
		printf("\n");
	}
}