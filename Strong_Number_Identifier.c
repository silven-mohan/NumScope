/** Strong Numbers Identifer **/

#include<stdlib.h>

main()
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
