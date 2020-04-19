#include<stdio.h>

void toLower(char ch[])
{
	int i=0;
	while(ch[i]!='\0')
	{
		ch[i]+=32;
		i++;
	}

}

void toUpper(char ch[])
{
	int i=0;
	while(ch[i]!='\0')
	{
		ch[i]-=32;
		i++;
	}

}

void toMerge(char ch[],char ch2[])
{
	int i=0;
	while(ch[i]!='\0')
		i++;

	int j=0;
	while(ch2[j]!='\0')
	{
		ch[i]=ch2[j];
		i++;
		j++;
	}
	
	ch[i]='\0';
}

void toCopy(char ch[], char ch2[])
{
	int i=0;
	while(ch2[i]!='\0')
	{
		ch[i]=ch2[i];
		i++;
	}
	ch[i]='\0';
}

int strLength(char ch[])
{
	int i=0;
	while(ch[i]!='\0')
		i++;

	return i;
}

char strCompare(char ch[], char ch2[])
{
	int i=0;
	while(ch[i]-ch2[i]==0)
	{
		if(ch[i]=='\0')
			break;
	
		i++;
	}
	
	return ch[i]-ch2[i];
}

void strReverse(char ch[])
{
	char i=0,k,j,ch2;
	for(;ch[i]!='\0';i++);
	for(j=0,k=--i;j<i/2;j++,k--)
	{
		ch2=ch[j];
		ch[j]=ch[k];
		ch[k]=ch2;
	}
}

int main(void)
{
	char ch[15];
	char ch2[]="Nivedita";
	printf("Input a String: ");
	scanf("%s",ch);
	
	printf("\nString: %s",ch);

	toLower(ch);
	printf("\nString: %s",ch);

	toUpper(ch);
	printf("\nString: %s",ch);

	toMerge(ch,ch2);
	printf("\nString: %s",ch);
	
	toCopy(ch,ch2);
	printf("\nString: %s",ch);

	int len=strLength(ch);
	printf("\nString Length: %d",len);
	
	toCopy(ch2,"Singh");
	char comp=strCompare(ch,ch2);
	printf("\nString Comp: %d",comp);
		
	strReverse(ch2);
	printf("\nString Reversed: %s",ch2);
return 0;
}

