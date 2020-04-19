#include<stdio.h>

int main()
{
	int i=0;	
	int placeValue[5],j=1;
	    placeValue[0]=0;
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

	char size=sizeof(arr);	

	for(int k=0;k<3;k++)
	{
		printf("Place Values [%d]: %d\n",k,placeValue[k]);
	}
	
	char k=0;
	char l=0;
	j=2;
	char p=placeValue[j];
	while(k<3)
	{
		while(arr[p]!='\0'&& arr[p]!=' ')
		{
			ch[l]=arr[p];
			p++;
			l++;
		}
		
		if(k==0)
		{
			ch[l]='\0';
		}
		k++;
	}
	
	printf("String: %s\n",ch);

return 0;
}
