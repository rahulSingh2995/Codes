#include <stdio.h>
int main(){
    int x=3,y=4,z;
	
//	z=x>y?x=y:x=y;		// this would generate lvalue required error
	z=x>y?x=y:(x=y);
        	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	
    return 0;
}
