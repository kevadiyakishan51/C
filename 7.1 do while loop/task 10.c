#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	i = 1;
	
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
}
