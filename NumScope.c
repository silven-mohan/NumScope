/**** Numscope: The Number Explorer ****/

#include<stdlib.h>
#include<stdio.h>

/***Number Classifications**/
/** Emirp Number **/

#ifdef CI_MODE
    #define clear_screen() ((void)0)
#else
    void clear_screen()
    {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear >/dev/null 2>&1");
        #endif
    }
#endif


void emirp_numbers()
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

/** Spy Number **/

void spy_number()
{
	int n, no, k, s=0, t=1;
	clear_screen();
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
}

/** Twisted Primes **/

void twisted_prime()
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
			count=count+1;
		}
	}
	if(count==0)
	{
		printf("%d and %d are Twisted Primes.", n, s);
	}
	else
	{
		printf("%d and %d are not Twisted Primes.", n, s);
	}
}

/** Perfect Numbers **/

void perfect_number()
{
	int i, n, s=0;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	clear_screen();
	
	if(n==s)
	{
		printf("%d is a Perfect Number.", n);
	}
	
	else
	{
		printf("%d is not a Perfect Number.", n);
	}
}

/** Niven Numbers **/

void niven_number()
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

/** Disarium Number **/

void disarium_number()
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

/** Strong Number **/

void strong_number()
{
	int n, no, k, s=0, i;
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
			int kf=1;
			for(i=k;i>=1;i--)
			{
				kf=kf*i;
			}
			s=s+kf;
			no=no/10;
		}
	
		if(n==s)
		{
			printf("%d is a Strong Number.", n);
		}
	
		else
		{
			printf("%d is not a Strong Number.", n);
		}
	}
	
	else
	{
		printf("Please enter a positive number.");
	}
}

/** Palindromes **/

void palindrome()
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

/** Armstrong Number **/

void armstrong_number()
{
	int n, no, k, s=0;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	clear_screen();
	
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
}

/** Prime Number Identifier **/

void prime_number()
{
	int n, i, count=0;
	clear_screen();
	printf("Enter any number:");
	scanf("%d", &n);
	if (n==1)
	{
		printf("%d is neither a prime nor a composite number.", n);
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if (n%i==0)
			{	
				count=1;
				break;
			}
		}
		if (count==0)
		{
			printf("%d is a prime number", n);
		}
		else
		{	
			printf("%d is not a prime number", n);
		}
	}
}

/***Number Series**/
int st, ed, j, f, no, s, kf, l, r=0, k, f0=0, f1=1, i, count=0;
char chose, chce;

/**Even Number**/
void even_numbers()
{
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
			printf("%d ");
			count++;
		}
	}
	printf("}");
	printf("\n\n\tFrom %d to %d there are %d Perfect Numbers.", st, ed, count);
}

/**Strong Numbers**/
void strong_numbers()
{
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

/*** Number Checker ***/
void NumCheck()
{
	int n, no, s=0, f=0, i, j, k;
	printf("Enter any number:");
	scanf("%d", &n);
	clear_screen();
	/** Emirp Numbers **/
	no=n;
	while(no!=0)
	{
		k=no%10;
		s=(s*10)+k;
		no=no/10;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f++;
			break;
		}
	}
	for(j=2;j<=s/2;j++)
	{
		if(s%j==0)
		{
			f++;
			break;
		}
	}
	if((f==0)&&(n!=s))
	{
		printf("\n%d is an Emirp Number.", n);
	}
	
	/** Spy Numbers **/
	no=n;
	s=0;
	f=1;
	while(no!=0)
	{
		k=no%10;
		s=(s*10)+k;
		f=f*k;
		no=no/10;
	}
	if(s==f)
	{
		printf("\n%d is a Spy Number.", n);
	}
	
	/** Even Numbers **/
	if(n%2==0)
	{
		printf("\n%d is an Even Number.", n);
	}
	
	/** Odd Numbers **/
	if(n%2!=0)
	{
		printf("\n%d is a Odd Number.", n);
	}
	
	/** Prime Numbers **/
	if(n<2)
	{
		printf("\n%d is neither a Prime nor Composite Number.", n);
	}
	else if(n>=2)
	{
		f=0;
		for(i=2;i<=n/2;i++)
		{	
			if(n%i==0)
			{	
				f++;
				break;
			}
		}
		if(f==0)
		{
			printf("\n%d is a Prime Number.", n);
		}
		/* Composite Number */
		else
		{
			printf("\n%d is a Composite Number.", n);
		}
	}
	
	/** Twisted Primes **/
	no=n;
	while(no!=0)
	{
		k=no%10;
		s=(s*10)+10;
		no=no/10;
	}
	f=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			f++;
			break;
		}
	}
	
	for(j=2;j<s/2;j++)
	{
		if(s%j==0)
		{
			f++;
			break;
		}
	}
	
	if(f==0)
	{
		printf("\n%d is a Twisted Prime Number.", n);
	}
	
	/** Perfect Numbers **/
	s=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(n==s)
	{
		printf("\n%d is a Perfect Number.", n);
	}
	
	/** Niven Numbers**/
	no=n;
	s=0;
	while(no!=0)
	{
		k=no%10;
		s=s+k;
		no=no/10;
	}
	if(n%s==0)
	{
		printf("\n%d is an Niven Number.", n);
	}
	
	/** Strong Number **/
	no=n;
	s=0;
	while(no!=0)
	{
		k=no%10;
		f=1;
		for(i=k;i>=1;i--)
		{
			f=f*i;
		}
		s=s+f;
		no=no/10;
	}
	if(n==s)
	{
		printf("\n%d is a Strong Number.", n);
	}
	
	/** Palindromes **/
	no=n;
	s=0;
	while(no!=0)
	{
		k=no%10;
		s=(s*10)+k;
		no=no/10;
	}
	if(n==s)
	{
		printf("%d is a Palindrome.", n);
	}	
}

/**Range Input**/
void range_input()
{
	clear_screen();
	printf("Enter the Starting Value of the Series:");
	scanf("%d", &st);
	clear_screen();
	if(st<0)
	{
		printf("Please enter a Positive Number.");
	}
	printf("Enter the End Value of the Series:");
	scanf("%d", &ed);
	clear_screen();
	if(ed<0||ed<st)
	{
		printf("Please enter a Valid Number.");
	}
	clear_screen();
}

/**Number Series (MAIN)**/
void number_series()
{
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
		printf("\nChoose one of the option from above:\n");
		scanf(" %c", &chose);
		clear_screen();
		range_input();
		switch(chose)
		{
			case 'A':
				even_numbers();
				break;
			case 'B':
				odd_numbers();
				break;
			case 'C':
				prime_numbers();
				break;
			case 'D':
				composite_numbers();
				break;
			case 'E':
				perfect_numbers();
				break;
			case 'F':
				armstrong_numbers();
				break;
			case 'G':
				strong_numbers();
				break;
			case 'H':
				palindromes();
				break;
			case 'I':
				niven_numbers();
				break;
			case 'J':
				spy_numbers();
				break;
			case 'K':
				twisted_primes();
				break;
			case 'L':
				fibonacci_series();
				break;
			default:
				printf("Invalid Option!");
				
		}
		printf("\nDo you want to continue Number Series Printing?(Y/N)");
		scanf(" %c", &chce);
	}while(chce=='Y'||chce=='y');
}

char choice;
char ch;
	
int main()
{
	do
	{
		clear_screen();
		printf("Choose one of the option below:");
		printf("\n_________________________________________________________________");
		printf("\n| A. Armstrong Number Identifier| F. Perfect Number Identifier\t|");
		printf("\n| B. Palindrome Identifier\t| G. Twisted Primes Identifier\t|");
		printf("\n| C. Strong Number Identifier\t| H. Spy Number Identifier\t|");
		printf("\n| D. Disarium Number Identifier\t| I. Emirp Number Identifier\t|");
		printf("\n| E. Niven Number Identifier\t| J. Prime Number Identifier\t|");
		printf("\n-----------------------------------------------------------------");
		printf("\n_________________________________________________________________");
		printf("\n| S. Number Series\t\t| T. Number Property Checker\t|");
		printf("\n-----------------------------------------------------------------\n");
		scanf(" %c", &ch);
		clear_screen();
		switch(ch)
		{
			case 'A':
				{
					armstrong_number();
						break;
				}
			case 'B':
				{
					palindrome();
						break;
				}
			case 'C':
				{
					strong_number();
						break;
				}
			case 'D':
				{
					disarium_number();
						break;
				}
			case 'E':
				{
					niven_number();
						break;
				}
			case 'F':
				{
					perfect_number();
						break;
				}
			case 'G':
				{
					twisted_prime();
						break;
				}
			case 'H':
				{
					spy_number();
						break;
				}
			case 'I':
				{
					emirp_numbers();
						break;
				}
			case 'J':
				{
					prime_number();
						break;
				}
			case 'S':
				{
					number_series();
					break;
				}
			case 'T':
				{
					NumCheck();
					break;
				}
			default:
				{
					printf("Invalid Input!.");
						break;
				}
		}
		printf("\n\n\tDo you want to continue to the Number Identification?(Y/N)");
		scanf(" %c", &choice);
	}while(choice=='Y'||choice=='y');
	printf("Thanks for using!");

	return 0;
}
