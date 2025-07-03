/** Number Series **/

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


int st, ed, i, j, count=0, f, no, s, kf, l, r=0, k, f0=0, f1=1;
char chose, chce;

/**Even Number**/
void even_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		if(i%2==0)
		{
			printf("%d  ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Even Numbers.", st, ed, count);
}

/**Odd Numbers**/
void odd_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		if(i%2!=0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Odd Numbers.", st, ed, count);
}

/**Prime Numbers**/
void prime_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		if(i<2)
			{
				continue;
			}
		
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f++;
				break;
			}
		}
		
		if(f==0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Prime Numbers.", st, ed, count);
}

/**Composite Numbers**/
void composite_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		f=0;
		if(i<2)
		{
			continue;
		}
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		
		if(f==1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Composite Numbers.", st, ed, count);
}

/**Perfect Numbers**/
void perfect_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		f=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=f+j;
			}
		}
		if(i==f)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Perfect Numbers.", st, ed, count);
}

/**Strong Numbers**/
void strong_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		no=i;
		s=0;
		while(no!=0)
		{
			k=no%10;
			kf=1;
			for(l=k;l>=1;l--)
			{
				kf=kf*l;
			}
			s=s+kf;
			no=no/10;
		}
		
		if(s==i)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there %d Strong Numbers.", st, ed, count);
}

/**Palindromes**/
void palindromes()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		no=i;
		s=0;
		while(no!=0)
		{
			k=no%10;
			s=(s*10)+k;
			no=no/10;
		}
		if(i==s)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Palindromes.", st, ed, count);
}

/**Niven Numbers**/
void niven_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		no=i;
		s=0;
		while(no!=0)
		{
			k=no%10;
			s=s+k;
			no=no/10;
		}
		
		if(i%s==0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Niven Numbers.", st, ed, count);
}

/**Spy Numbers**/
void spy_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		no=i;
		s=0;
		l=1;
		while(no!=0)
		{
			k=no%10;
			s=s+k;
			l=l*k;
			no=no/10;
		}
		
		if(s==l)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Spy Numbers.", st, ed, count);
}

/**Twisted Primes**/
void twisted_primes()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		if(i<2)
		{
			continue;
		}
		
		f=0;
		
		no=i;
		s=0;
		while(no!=0)
		{
			k=no%10;
			s=(s*10)+k;
			no=no/10;
		}
		
		for(l=2;l<=s/2;l++)
		{
			if(s%l==0)
			{
				f++;
				break;
			}
		}
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f++;
				break;
			}
		}
		if(f==0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Twisted Prime Numbers.", st, ed, count);
}

/**Armstrong Numbers**/
void armstrong_numbers()
{
	count=0;
	printf("{ ");
	for(i=st;i<=ed;i++)
	{
		no=i;
		s=0;
		while(no!=0)
		{
			k=no%10;
			s=s+(k*k*k);
			no=no/10;
		}
		if(i==s)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Armstrong Numbers.", st, ed, count);
}

/**Fibonacci Series**/
void fibonacci_series()
{
	count=0;
	f0=0;
	f1=1;
	printf("{ ");
	printf("%d %d ", f0, f1);
	i=2;
	while(i<ed)
	{
		f=f0+f1;
		f0=f1;
		f1=f;
		i++;
		printf("%d ", f);
	}
	printf("}");
}

/**Range Input**/
void range_input()
{
	clear_screen();
	printf("Enter the Starting Value of the Series:");
	scanf("%d", &st);
	fflush(stdout);
	clear_screen();
	if(st<0)
	{
		printf("Please enter a Positive Number.");
		return;
	}
	printf("Enter the End Value of the Series:");
	scanf("%d", &ed);
	fflush(stdout);
	clear_screen();
	if(ed<0||ed<st)
	{
		printf("Please enter a Valid Number.");
		return;
	}
	clear_screen();
}

/**Number Series (MAIN)**/
void main()
{
	fflush(stdout);
	do
	{
		clear_screen();
		printf("\n\t\t\tNumber Series Printer");
		printf("\n_________________________________________________________________________");
		printf("\n|A. Even Number Series \t\t|G. Strong Number Series \t\t|");
		printf("\n|B. Odd Number Series \t\t|H. Palindromes Series \t\t\t|");
		printf("\n|C. Prime Number Series \t|I. Niven Number Series \t\t|");
		printf("\n|D. Composite Number Series \t|J. Spy Number Series \t\t\t|");
		printf("\n|E. Perfect Number Series \t|K. Twisted Prime Number Series \t|");
		printf("\n|F. Armstrong Number Series \t|L. Fibonacci Series \t\t\t|");
		printf("\n-------------------------------------------------------------------------");
		printf("\nChoose one of the option below:\n");
		scanf(" %c", &chose);
		clear_screen();
		range_input();
		switch(chose)
		{
			case 'A':
				fflush(stdout);
				even_numbers();
				break;
			case 'B':
				fflush(stdout);
				odd_numbers();
				break;
			case 'C':
				fflush(stdout);
				prime_numbers();
				break;
			case 'D':
				fflush(stdout);
				composite_numbers();
				break;
			case 'E':
				fflush(stdout);
				perfect_numbers();
				break;
			case 'F':
				fflush(stdout);
				armstrong_numbers();
				break;
			case 'G':
				fflush(stdout);
				strong_numbers();
				break;
			case 'H':
				fflush(stdout);
				palindromes();
				break;
			case 'I':
				fflush(stdout);
				niven_numbers();
				break;
			case 'J':
				fflush(stdout);
				spy_numbers();
				break;
			case 'K':
				fflush(stdout);
				twisted_primes();
				break;
			case 'L':
				fflush(stdout);
				fibonacci_series();
				break;
			default:
				printf("Invalid Option!");
				
		}
		printf("\nDo you want to continue?(Y/N)");
		scanf(" %c", &chce);
		fflush(stdout);
	}while(chce=='Y'||chce=='y');
}
