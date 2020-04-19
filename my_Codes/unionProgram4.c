#include<stdio.h>

		struct A{
			int a;
			int c;
		};
		struct B{
			int b;
			int a;
		};
	union Test{
		
		struct A a1;
		struct B b1;
		
	};

	int main(void)
	{
		union Test t1;
		t1.a1.a=10;
		t1.a1.c=20;
		printf("Value: %d\n",t1.a1.a);
		printf("Value: %d\n",t1.b1.a);
		printf("Value: %d\n",t1.b1.b);

	return 0;
	}
