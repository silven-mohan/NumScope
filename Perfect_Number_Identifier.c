/** Perfect Numbers Identifier **/

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
	int i, n, s=0;
	/* clear_screen(); */
	printf("Enter any number:");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	/* clear_screen(); */
	
	if(n==s)
	{
		printf("%d is a Perfect Number.", n);
	}
	
	else
	{
		printf("%d is not a Perfect Number.", n);
	}

	return 0;
}
