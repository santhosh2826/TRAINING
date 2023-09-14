#include<stdio.h>

    int main()
    {
      int n1,n2,n3;
      printf("enter the number 1 and 2");
      scanf("%d %d %d",&n1,&n2,&n3);
      if(n1<n2 && n1<n3)
      {
        printf("%d %d %d",n1,n2,n3);
      }
      else if(n3<n1 && n1<n2)
      {
        printf("%d %d %d ",n3,n1,n2);
      }
      else if(n2<n1 && n2<n3)
      {
        printf("%d %d %d" ,n2,n1,n3);
      }
      else{
        printf("%d %d %d" ,n3,n2,n1);
      }
      }

    
