/**** Number Checker ****/

#include<stdlib.h>
#include<stdio.h>

void NumCheck()
{
	int n, no, s=0, f=0, i, j, k;
	printf("Enter any number:");
	scanf("%d", &n);
	system("cls");
	/** Emirp Numbers **/
	no=n;
	while(no!=0)
	{
		k=no%10;
		s=s+k;
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

void main()
{
	NumCheck();
}
