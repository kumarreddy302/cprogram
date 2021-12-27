#include<stdio.h>
int main()
{
	long int a[1000],b[1000],ticket,ticket1,ticket2,dig=0,j=0,i=0,j1,j2,k,l;
	printf("Enter ticketket Number:");
	scanf("%ld",&ticket);
	ticket1=ticket;
	ticket2=ticket;
	while(ticket!=0)
	{
		ticket=(ticket/10);
		dig=++dig;
	}
	printf("No.of digits=%ld\n",dig);
	if(dig%2==0)
	{
		while(ticket1!=0)
		{
			j=++j;
			printf("Your ticket no.may be lucky.\n");
			a["%ld",j]=(ticket1%10);
			ticket1=(ticket1/10);
			printf("%ld\n",a["%ld",j]);
		}

		j1=j/2;
		j1=k;
		while(j1!=0);
		{
			i=++i;
			b["%ld",i]=b["%ld",i]+ticket2%10;
			ticket2=ticket2/10;
			j1=--j1;
		}	
		printf("%ld",b["%ld",i]);
	}
	else
	{
		printf("Try your luck nect time.");
	}
}
