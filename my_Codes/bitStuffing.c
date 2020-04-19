#include<stdio.h>

int main()
{
	char ch[20];
	char str[15];
	char size;
	char i=0;
	char p=0;
	char k=0;

	printf("Enter the Size of Frame: ");
	scanf("%d",&size);
	printf("\n");

	printf("Enter the Numbers in the form of 0's and 1's : ");
	for(char k=0;k<size;k++)
		scanf("%d",&ch[k]);
	

	while(i<size)	// 12 is size of data frame
	{	
		int l=0;
		while(ch[k]==1)
		{
			str[p]=ch[k];
			(p++,k++,l++,i++);
			if(l==5)
			{
				if(ch[k]==1)
				{
					str[p]=0;
					p++;
					l=0;
					size++;
				}
			}
		}

		
		str[p]=ch[k];
		k++;
		p++;	
		i++;
	}
	
	printf("Size=%d\n",size);

	for(int k=0;k<size;k++)
		printf("%d ",str[k]);
	
//	printf("\nString:%s ",str);


return 0;
}
