 #include<stdio.h>
 void main()
 {
 int a1,a2,a3;
    int sum=0;
    printf("enter the three angle");
    scanf("%d %d %d",&a1,&a2,&a3);
    sum =a1+a2;
    if(sum<a3)
    {
        printf("valid");
    }
    else{
        printf("not valid");
    }
 }