#include<stdio.h>

int main(void)
{
	char arr[30]="Rahul Loves Nivedita";

	char ch[10];
	char ch2[10];
	char ch3[10];
	int i=0;
//	printf("%d",' ');

/*
	while(arr[i]!='\0')
	{
		printf("arr[%d]=%d\n",i,arr[i]);
		i++;
	}


*/

	char flag=0;
	while(arr[i]!='\0')
	{	
		
		if(arr[i]==' ')
		{
			printf("\rIn IF");
			if(flag==0)
			{
				ch[i]='\0';
			}
			if(flag==1)
			{
				ch2[i]='\0';
			}
			if(flag==2)
			{
				ch3[i]='\0';
			}
			flag++;
		//	break;
			i++;
		//	continue;
		}

		if(flag==0)
		{
		ch[i]=arr[i];
		i++;
		}
		if(flag==1)
		{
		ch2[i]=arr[i];
		i++;
		}

		if(flag==2)
		{
		ch3[i]=arr[i];
		i++;
		}
		
		printf("\rIn While");
	}	
	
	printf("%s\n",ch);
	printf("%s\n",ch2);
	printf("%s\n",ch3);

return 0;
}
