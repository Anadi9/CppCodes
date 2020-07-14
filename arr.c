#include<stdio.h>
int main()
{
    int n=5,A[n];
    int i=0;

    printf("Enter the elements:\n");
    scanf("%d",i);
    for(i=0;i<n;i++)
        {
        printf("%d\n", &A[i]);
        }
}
