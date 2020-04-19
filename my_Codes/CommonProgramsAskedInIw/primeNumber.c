/*Program to check entered number is whether prime or not.*/
 
#include <stdio.h>
 
/*function to check number is Prime or Not*/
int isPrime(int num)
{
    unsigned char flag=0;
    int tally;
     
    for(tally=2; tally<=(num/2); tally++)
    {
        if(num%tally ==0)
        {
            flag=1;
            break;
        }
    }
     
    if(flag==0)
        return 1; /*prime number*/
    else
        return 0; /*not a prime number*/
}
 
int main()
{
    int number;
     
    printf("Enter an integer number : ");
    scanf("%d",&number);
  
 
    if(isPrime(number))
        printf("\n%d is a prime number.",number);
    else
        printf("\n%d is not a prime number.",number);
  
    return 0;
}
