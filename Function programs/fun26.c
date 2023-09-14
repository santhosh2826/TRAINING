#include<stdio.h>
void merge()
{
    int a[50], b[50], n1, n2, i, k, c[100];
    printf("Enter array 1  ");
    scanf("%d", &n1);
    printf("Enter Array 1 : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k = i;
    printf("\nEnter array 2  ");
    scanf("%d", &n2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }
    printf("\nThe new array  is:\n");
    for(i=0; i<k; i++)
        printf("%d ", c[i]);
}
void main()
{
    merge();
}
