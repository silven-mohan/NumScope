/** Palindrome Identifier **/

#include<stdlib.h>

main()
{
	int i, n, no, s=0, k;
	system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	system("cls");
	if(n>0)
	{
		while(no!=0)
		{
			k=no%10;
			s=(s*10)+k;
			no=no/10;
		}
	
	
		if(n==s)
		{
			printf("%d is a Palindrome", n);
		}
	
		else
		{
			printf("%d is not a Palindrome", n);
		}
	}
	
	else
	{
		printf("Please enter a positive integer");
	}

}
