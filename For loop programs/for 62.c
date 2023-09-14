#include <stdio.h>

int main()
{
    int num,i,j=0,a[20],temp,rem;
    printf("Enter numer ");
    scanf("%d", &num);
    for(temp=num;num!=0;num=num/10)
    {
         a[j]=num%10;
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            printf("one");
        }
        else if (a[i]==2)
        {
            printf("two");
        }
         else if (a[i]==3)
        {
            printf("three");
        } else if (a[i]==4)
        {
            printf("four");
        }
         else if (a[i]==5)
        {
            printf("five");
        } else if (a[i]==6)
        {
            printf("six");
        }
         else if (a[i]==7)
        {
            printf("seven");
        }
         else if (a[i]==8)
        {
            printf("eight");
        }
         else if (a[i]==9)
        {
            printf("nine");
        }
    }

    

    return 0;
}
