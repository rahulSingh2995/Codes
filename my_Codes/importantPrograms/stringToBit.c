#include<stdio.h>

void strReverse(char ch[], int size)
{
	char k,j,ch2;
	
	for(j=0,k=size;j<size/2;j++,k--)
	{
		ch2=ch[j];
		ch[j]=ch[k];
		ch[k]=ch2;
	}
}

int main()
{
	char ch[]="Rahul";
	char str[10];
	char main[100];

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
	//		printf("In While: str[%d]=%d\n",j, str[j]);
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
	//	printf("In For i=%d\n",i);
	}

	//strReverse(main,39);
	
	for(int l=0;l<m;l++)
	{	
		printf("%d",main[l]);
	//	printf("main[%d]=%d\n",l,main[l]);
	}
return 0;
}
