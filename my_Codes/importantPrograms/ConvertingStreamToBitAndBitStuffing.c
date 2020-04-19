#include<stdio.h>

int streamToBin(char[], char[]);

int applyBitStuffing(char[],int);

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
	
	read=applyBitStuffing(main,read);
	printf("After BitStuff Opeartion String in Bin: \n");
	for(int l=0;l<read;l++)
		printf("%d",main[l]);
	
	printf("Read:%d\n",read);

return 0;
}


int applyBitStuffing(char main[], int read)
{
	char temp[1000];
	int i=0;
	int k=0;
	int p=0;
	while(i<read)	
	{	
		int l=0;
		while(main[k]==1)
		{
			temp[p]=main[k];
			(p++,k++,l++,i++);
			if(l==5)
			{
				if(main[k]==1)
				{
					temp[p]=0;
					p++;
					l=0;
					read++;
				}
			}
		}
		
		temp[p]=main[k];
		k++;
		p++;	
		i++;
	}
	
	for(int i=0;i<read;i++)
		main[i]=temp[i];

	return read;
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
