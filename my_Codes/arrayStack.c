#include<stdlib.h>
#include<stdio.h>


	void push(int *a,int *s)
	{
		if(*s==15)
		{
			printf("Stack Full !");
			exit(1);
		}	
		
		printf("Input the number you want to push on stack: ");
		scanf("%d",&a[*s]);
		++*s;
	}

	void display(int *a, int *s)
	{
		printf("\nThe Numbers are:\n");
		for(int i=*s;i>0;i--)
			printf("%d\n\t",a[i]);
	}

int main()
{

 short int i=10;
	int arr[15];
	int size=0; 	// to keep track of size of stack
	char choice;

	while(1)
	{
		printf("\nSelect an Option: \n");
		printf("1. push\n2.pop\n3. Display\n4.exit\n");
		scanf("%hhd",&choice);
		
		switch(choice)
		{
			case 1:
				push(arr,&size);
				break;
			case 2:
				
			case 3:
				display(arr,&size);
				break;

			case 4: exit(0);
			
			default: printf("Choose a valid option");
		}
	}


}
