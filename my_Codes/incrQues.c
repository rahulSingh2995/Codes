#include <stdio.h>
int main(){
    int x=0,y=0;
	
	if(++x&&++y)
        	printf("In If: when Cond-(++x&&++y)\n");
	else
        	printf("In Else: when Cond-(++x&&++y)\n");
	
	x=0;y=0;
	if(x++&&++y)
        	printf("In If: when Cond-(x++&&++y)\n");
	else
        	printf("In Else: when Cond-(x++&&++y)\n");

	x=0;y=1;
	if(x++&&y)
        	printf("In If: when Cond-(x++&&y)\n");
	else
        	printf("In Else: when Cond-(x++&&y)\n");
    return 0;
}
