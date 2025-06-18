/** Perfect Numbers Identifier **/

#include<stdlib.h>

main()
{
	int i, n, s=0;
	system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	system("cls");
	
	if(n==s)
	{
		printf("%d is a Perfect Number.", n);
	}
	
	else
	{
		printf("%d is not a Perfect Number.", n);
	}
}
