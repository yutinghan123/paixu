#include <stdio.h>
void mao(int *a,int n);
void show(int *a,int n);
void mao(int *a,int n)
{
    int i,j;
    int swap = 0;
    for(i=0 ; i < n-1 ; i++)
    {
        for(j=0 ; j < n-i-1 ; j++)
        {
            if(a[j] > a[j+1])
            {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }
}

void show(int *a,int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[10] = {10, 8, 3, 15, 18, 16, 11, 9, 7, 6};
    mao(arr,10);
    show(arr,10);
}
