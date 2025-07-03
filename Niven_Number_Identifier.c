/** Niven Number Identifier **/

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
	int i, n, k, no, s=0;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	while(no!=0)
	{
		k=no%10;
		s=s+k;
		no=no/10;
	}
	if(n%s==0)
	{
		printf("%d is an Niven Number.", n);
	}
	else
	{
		printf("%d is not an Niven Number.", n);
	}
}
