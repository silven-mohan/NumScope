/** Numscope: The Number Explorer **/

#include<stdlib.h>
#include<stdio.h>


void main()
{
	/** Emirp Number **/
	
	void emirp_numbers()
	{
		int n, k, no, s=0, count=0, i;
		printf("Enter any number:");
		scanf("%d", &n);
		no=n;
		system("cls");
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
	
	void spy_numbers()
	{
		int n, no, k, s=0, t=1;
		system("cls");
		printf("Enter any number:");
		scanf("%d", &n);
		no=n;
		system("cls");
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
	
	void twisted_primes()
	{
		int n, k, no, s=0, count=0, i;
		printf("Enter any number:");
		scanf("%d", &n);
		no=n;
		system("cls");
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
		system("cls");
		printf("Enter any number:");
		scanf("%d", &n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				s=s+i;
			}
		}
		system("cls");
		
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
		system("cls");
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
		system("cls");
		printf("Enter any number:");
		scanf("%d", &n);
		no=n;
		system("cls");
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
	
	/** Armstrong Number **/
	
	void armstrong_number()
	{
		int n, no, k, s=0;
		system("cls");
		printf("Enter any number:");
		scanf("%d", &n);
		no=n;
		system("cls");
		
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
	
	void prime_numbers()
	{
		int n, i, count=0;
		system("cls");
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
	char choice;
	char ch;
	
	do
	{
		system("cls");
		printf("Choose one of the option below:");
		printf("\n_________________________________________________________________");
		printf("\n| A. Armstrong Number Identifier| F. Perfect Number Identifier\t|");
		printf("\n| B. Palindrome Identifier\t| G. Twisted Primes Identifier\t|");
		printf("\n| C. Strong Number Identifier\t| H. Spy Number Identifier\t|");
		printf("\n| D. Disarium Number Identifier\t| I. Emirp Number Identifier\t|");
		printf("\n| E. Niven Number Identifier\t| J. Prime Number Identifier\t|");
		printf("\n-----------------------------------------------------------------");
		scanf(" %c", &ch);
		system("cls");
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
					twisted_primes();
						break;
				}
			case 'H':
				{
					spy_numbers();
						break;
				}
			case 'I':
				{
					emirp_numbers();
						break;
				}
			case 'J':
				{
					prime_numbers();
						break;
				}
			default:
				{
					printf("Invalid Input!.");
						break;
				}
		}
		printf("\n\n\tDo you want to continue?(Y/N)");
		scanf(" %c", &choice);
	}while(choice=='Y'||choice=='y');

}
