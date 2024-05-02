#include<stdio.h>
#include<stdlib.h>
// I will make the password 2002
int main()
{
	printf("\n---------------------------Welcome to Abhishek Lock System--------------------------");
	int password;
	int fakeinput;
	printf("\n\nPlease type your password...");
	
	scanf("%d",&password);
	if(password<=2002 )
	{
		printf("\n                         Password is Correct ");
		printf("\n                     Hello Brother Welcome in Your Account ");
	}
	else
	{
		printf("\n                     The Password is Wrong  ");
		printf("\n                     You Still Have Two Times");
		
		printf("\n     Try Again...");
		scanf("%d",&password);
	}
	if(password==2002 && password==2002)
	{
		printf("\n                         Password is Correct ");
		printf("\n                     Hello Brother Welcome in Your Account ");
	}
	else
	{
		printf("\n                     The Password is Wrong  ");
		printf("\n                     You Still Have One Times");
		
		printf("\n     Try Again...");
		scanf("%d",&password);
	}
	if(password<=2002 && password>=2002)
	{
		printf("\n                         Password is Correct ");
		printf("\n                     Hello Brother Welcome in Your Account ");
	}
	else
	{
		printf("\n                     Wrong... ");
		printf("\n                     Wrong... ");
	    printf("\n                     Wrong... ");
	    printf("\n                     Wrong... ");
	    printf("\n                     Wrong... ");
	    printf("\n                     Wrong... ");
	    printf("\n                     Wrong... ");
	    printf("\n                     Wrong... ");
	}
	scanf("%d",fakeinput);
	
	
	return 0;
}
