#include<stdio.h>

int main()
{
	char i=0;	
	int placeValue[5]={0},j=1;
	char arr[]="Rahul Loves Nivedita";
	char ch[25];
	while(arr[i]!='\0')
	{
		if(arr[i]==' ')
		{
			i++;
			placeValue[j]=i;
			j++;
		}
		
		i++;
	}

	for(i=0;i<3;i++)
	{
		printf("Place Values [%d]: %d\n",i,placeValue[i]);
	}
	
	int size[3]={8,5,5};
	char p=0;
	char k=2;
	while(k>=0)
	{
		j=placeValue[k];
		for(i=0;i<size[p];i++)
		{
			ch[i]=arr[j];
			j++;
		}
		i++;
		
		if(k==0)
		{
			ch[i]='\0';
		}
		k--;
		p++;
	
		for(in)	
		printf("String in While: %s\n",ch);
	}
	
	printf("String: %s\n",ch);

return 0;
}
