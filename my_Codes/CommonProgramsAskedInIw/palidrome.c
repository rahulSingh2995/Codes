#include<stdio.h>

int checkPalindrome(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	
	for(int j=0,k=--i;j<i/2;j++,k--)
	{
		if(str[j]!=str[k])
			return 1;
		
	}
	
	return 0;

}
int main(void)
{
	char str[]="ABCDCBA";

	int ret=checkPalindrome(str);
	if(ret==0)
		printf("It's a Palindrome !\n");
	else
		printf("Not a Palindrome !\n");



return 0;
}
