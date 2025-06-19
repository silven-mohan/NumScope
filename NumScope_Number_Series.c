/** Number Series **/

#include<stdlib.h>
#include<stdio.h>

int st, ed, i, j, count=0, f, no, s, kf, l, r=0, k;

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
	printf("\n\n\tFrom %d to %d there %d Twisted Prime Numbers.", st, ed, count);
}
void main()
{
	system("cls");
	printf("Enter the Starting Value of the Series:");
	scanf("%d", &st);
	system("cls");
	printf("Enter the End Value of the Series:");
	scanf("%d", &ed);
	system("cls");
	twisted_primes();
}
