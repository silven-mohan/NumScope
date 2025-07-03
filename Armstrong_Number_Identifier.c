/** Armstrong Number Identifier **/

#include<stdlib.h>
#include<stdio.h>

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

int main()
{
	int n, no, k, s=0;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	/* clear_screen(); */
	
	if(no<=999)
	{
		while(no!=0)
		{
			k=no%10;
			s=s+k*k*k;
			no=no/10;
		}
	}
	
	else if(no<0)
	{
		printf("Please enter a positive number.");
	}
	
	else if((no<9999)&&(no>999))
	{
		while(no!=0)
		{
			k=no%10;
			s=s+k*k*k*k;
			no=no/10;
		}
	}
	
	else if((no<99999)&&(no>9999))
	{
		while(no!=0)
		{
			k=no%10;
			s=s+k*k*k*k*k;
			no=no/10;
		}
	}
	
	else
	{
		printf("Sorry, I can't check it.");
	}
	
	if(n==s)
	{
		printf("%d is an armstrong number.", n);
	}
	
	if((n!=s)&&(n<99999))
	{
		printf("%d is not an armstrong number.", n);
	}

	return 0;
}
