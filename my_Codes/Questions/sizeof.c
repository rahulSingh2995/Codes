#include<stdio.h>

int main()
{
char ch[]="Cdac-Acts";
char *chptr="Cdac-Acts";

printf("%ld	%ld	\n",sizeof(ch),sizeof(chptr));
printf("%ld	%ld	\n",sizeof(*ch),sizeof(*chptr));

return 0;
}
