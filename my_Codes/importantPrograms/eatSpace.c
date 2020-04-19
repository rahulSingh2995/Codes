#include<stdio.h>

int main()
{
	char str[]="Rahul Love Nivedita";	
	int i=0,j=0;

	while(str[i]!='\0')
	{
		if(str[i]==' ')
			i++;
	
		str[j]=str[i];
		i++;
		j++;
	}	
	str[j]='\0';
	
	printf("The String: %s\n",str);

return 0;
}
