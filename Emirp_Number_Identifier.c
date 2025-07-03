/** Emirp Number Identifier **/

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
	int n, k, no, s=0, count=0, i;
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	clear_screen();
	while(no!=0)
	{
		k=no%10;
		s=(s*10)+k;
		no=no/10;
	}
	for(i=2;i<n;i++)
	{
		if((n%i==0)&&(s%i==0))
		{
			count++;
		}
	}
	if((count==0)&&(n!=s))
	{
		printf("%d and %d are Emirp Numbers.", n, s);
	}
	else
	{
		printf("%d and %d are not Emirp Number.", n, s);
	}
}
