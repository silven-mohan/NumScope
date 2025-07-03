/** Palindrome Identifier **/

#include<stdlib.h>

void clear_screen()
{
	#ifndef CI_MODE
		#ifdef _WIN32
		{
			system("cls");
		}
		#else
		{
			system("clear >/dev/null 2>&1");
		}
		#endif
	#endif
}

main()
{
	int i, n, no, s=0, k;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	clear_screen();
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
