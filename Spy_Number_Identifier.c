/** Spy Number  identifier **/

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
	int n, no, k, s=0, t=1;
	system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	clear_screen();
	while(no!=0)
	{
		k=no%10;
		s=s+k;
		t=t*k;
		no=no/10;
	}
	if(s==t)
	{
		printf("%d is a Spy Number.", n);
	}
	else
	{
		printf("%d is not a Spy Number.", n);
	}

	return 0;
}
