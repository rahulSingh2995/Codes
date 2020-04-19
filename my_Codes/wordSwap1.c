#include<stdio.h>

int main(void)
{
	char arr[30]="Rahul Loves Nivedita";

	char ch[30];
	char ch2[10];
	char ch3[10];
	int i=0;

	char flag=0;
	while(arr[i]!='\0')	
	{
		printf("arr[%d]: %c\n",i,arr[i]);
		i++;
	}
	
	i=0;
	while(arr[i]!='\0')
	{	
		if(arr[i]!=' ')
		{
			ch[i]=arr[i];
			printf("In IF:ch[%d]: %c\n",i,ch[i]);
			i++;
			continue;
		}
		ch[i]='\0';
		i++;
		printf("In while:ch[%d]: %c\n",i,ch[i]);
		printf("At the End: ch=%s\n",ch);
		break;
	}

	while(arr[i]!='\0')
	{
		if(arr[i]!=' ')
		{
			ch2[i]=arr[i];
			printf("In IF:ch2[%d]: %c\n",i,ch2[i]);
			i++;
			continue;
		}
		ch2[i]='\0';
		i++;
		printf("In while:ch2[%d]: %c\n",i,ch2[i]);
		printf("At the End: ch2=%s\n",ch2);
		break;
	 }

	while(arr[i]!='\0')
	{
		if(arr[i]!=' ')
		{
			ch3[i]=arr[i];
			printf("In IF:ch3[%d]: %c\n",i,ch3[i]);
			i++;
			continue;
		}
		ch3[i]='\0';
		i++;
		printf("In while:ch3[%d]: %c\n",i,ch3[i]);
		printf("At the End: ch3=%s\n",ch3);
		break;
	}
	

	printf("%s\n",ch);
	printf("%s\n",ch2);
	printf("%s\n",ch3);

return 0;
}
