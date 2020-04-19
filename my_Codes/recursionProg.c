#include<stdio.h>

    // Function returns count of ways to cover 'dist' 
   int printCountRec(int dist) 
    { 
        if (dist<0)     
            return 0; 
        if (dist==0)     
            return 1; 
   
        // Recur for all previous 3 and add the results 
        return printCountRec(dist-1) +  
               printCountRec(dist-2) + 
               printCountRec(dist-3); 
    } 
    

    void main ()  
    { 
        int dist = 4; 
       int result=printCountRec(dist);
	printf("Result: %d",result); 
    } 
 
