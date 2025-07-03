/** Disarium Numbers Identifier **/

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
			system("clear";)
		}
		#endif
	#endif
}

main()
{
	int n, no, s=0, k, l, m;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	clear_screen();
	if(n<0)
	{
		printf("Please enter a positive number.");
	}
	
	else if((n>=0)&&(n<=9))
	{
		printf("%d is a Disarium Number.", n);
	}
	
	else if((n>9)&&(n<99))
	{
		k=no%10;
		s=s+(k*k);
		no=no/10;
		s=s+no;
		if(n==s)
		{
			printf("%d is a Disarium Number.", n);
		}
		else
		{
			printf("%d is not a Disarium Number.", n);
		}
	}
	
	else if((n>99)&&(n<999))
	{
		k=no%10;
		s=s+(k*k*k);
		no=no/10;
		l=no%10;
		s=s+(l*l);
		no=no/10;
		s=s+no;
		if(n==s)
		{
			printf("%d is a Disarium Number.", n);
		}
		else
		{
			printf("%d is not a Disarium Number.", n);
		}
	}
	
	else if((n>999)&&(n<9999))
	{
		k=no%10;
		s=s+(k*k*k*k);
		no=no/10;
		l=no%10;
		s=s+(l*l*l);
		no=no/10;
		m=no%10;
		s=s+(m*m);
		no=no/10;
		s=s+no;
		if(n==s)
		{
			printf("%d is a Disarium Number.", n);
		}
		else
		{
			printf("%d is not a Disarium Number.", n);
		}
	}
	
	else
	{
		printf("Sorry, I can't check that.");
	}
}
