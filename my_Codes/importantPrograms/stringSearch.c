#include<stdio.h>

char searchStr(char str[], char src[])
{
	char i=0;
	char j=0,k=0;
	for(j=0;src[j]!='\0';j++);

	while(str[i]!='\0')
	{
		k=0;
		while(str[i]==src[k] && src[k]!='\0')
		{
			i++;
			k++;
			
		}
	i++;
	if(src[k]=='\0')
		return 0;
	}
	
	return 1;

}

int main(void)
{
char str[30];
char ch[30];
	
	printf("Enter a String: ");
	scanf("%30[^\n]s",str);
	
	__fpurge((stdin));	

	printf("\nNow, Enter a String to Sreach: ");
	scanf("%30[^\n]s",ch);

	char cha=searchStr(str,ch);
	
	if(cha==0)
		printf("String Found\n");
	else 	
		printf("String Not Found\n");

return 0;
}
