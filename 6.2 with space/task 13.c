#include<stdio.h>

main()

{
	int i, j, s;
	
	for (i=65; i<=69; i++)
	{
		for(s=68; s>=i; s--)
		{
			printf(" ");
		}
		for(j=i; j>=65; j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
}
