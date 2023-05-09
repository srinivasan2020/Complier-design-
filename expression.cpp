#include<stdio.h>
#include<ctype.h>
int main()
{
	char input[100];
	printf("Enter the arithmetic expression:");
	fgets(input,100,stdin);
	int i = 0;
	printf("Tokens:");
	while(input[i]!='\0')
	{
		if (isspace(input[i]))
		{
			i++;
			continue;
		}
		else if(input[i]=='+')
		{
			printf("plus");
		}
		else if(input[i]=='-')
		{
			printf("minus");
		}
		else if(input[i]=='*')
		{
			printf("multiply");
		}
		else if(input[i]=='/')
		{
			printf("divide");
		}
		else
		{
			printf("invalid token: %c",input[i]);
			return 1;
		}
		i++;
	}
	printf("\n");
	return 0;
	
	
}

