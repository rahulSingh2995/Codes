#include<stdio.h>

struct test{
unsigned char x:2;
unsigned int y:2;
};

int main()
{
struct test t1;
t1.x=3;
t1.y=3;
t1.x=t1.x&t1.y;
printf("In Main: %d", t1.x);
return 0;
}


