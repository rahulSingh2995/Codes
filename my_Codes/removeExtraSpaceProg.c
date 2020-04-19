#include<stdio.h>

int main()
{
	char ch[]="Rahul   Singh   Loves    Nivedita";
	printf("%s\n",ch);
	char ch2[40];
	int i=0;
	int j=0;
	while(ch[i]!='\0')
	{
		if(ch[i]==' ')
		{
			i++;
			j++;
			while(ch[i]==' ')
				i++;
				
		}
		ch2[j]=ch[i];
		i++;
		j++;
	}
	
	ch2[j]='\0';
	printf("%s\n",ch2);

return 0;
}
