#include<stdio.h>

void swapBit(short int*,int,int); 

void main()
{
	short int i=14;
	printf("Before Swapping : %hd\n",i);
	swapBit(&i,1,3);
	printf("After Swapping : %hd\n",i);
}

void swapBit(short int *num ,int pos2 ,int pos1)
{
    unsigned char bit_1 = (*num >> 2) & 1;
    unsigned char bit_2 = (*num >> 0) & 1;
    unsigned char xor_of_bit = bit_1 ^ bit_2;
    *num ^= (xor_of_bit << 0 | xor_of_bit << 2);
} 
