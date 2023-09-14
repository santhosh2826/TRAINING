#include <stdio.h>  
#include <math.h>  
    
int pow (int x, int y)  
{  
    int p= 1, i; 
    for (i = 1; i <= y; i++)  
    {  
        p = p * x;  
          
    }  
    return p;  
}  
int main ()  
{  
    int b, e;   
    printf (" Enter the base value: ");  
    scanf (" %d", &b);
    printf (" Enter the power value: ");  
    scanf (" %d", &e); 
    int s=pow(b,e);
    printf (" %d ",s);  
}  
