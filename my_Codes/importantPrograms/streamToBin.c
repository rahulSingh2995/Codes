#include<stdio.h>

int streamToBin(char[], char[]);

int main()
{
	char ch[30];
	char main[1000];
	
	printf("Input an String: ");
	scanf("%[^\n]s",ch);

	int read=streamToBin(ch,main);

	printf("Read String in Bin: \n");
	for(int l=0;l<read;l++)
		printf("%d",main[l]);

	printf("\n");
	printf("Copy this binary and paste it after redirecting on the given link below :\n");
	printf("https://codebeautify.org/binary-string-converter\n");

return 0;
}


int streamToBin(char ch[], char main[])
{
	char str[10];
	int i=0;
	int j=0;
	int m=0;
	int count=0;

	for(i=0; ch[i]!='\0';i++)
	{	count=0;
		j=0;
		while(ch[i])
		{
			str[j]=ch[i]%2;
			j++;
			ch[i]=ch[i]/2;
			count++;
		}
		if(count!=8)
		{
			while(8-count)
			{	
				str[j]=0;
				j++;
				count++;
			}
		}
		
		while(count)
		{
			main[m]=str[count-1];
			m++;
			count--;
		}
	}
	
	return m;

}
