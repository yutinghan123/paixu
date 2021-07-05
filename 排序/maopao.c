#include <stdio.h>
void bubble_sort(int *arr,int n);
void show(int *arr,int n);

void bubble_sort(int *arr,int n)
{
    int i=0;
    int j=0;
    int swap=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

}

void show(int *arr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[10] = {10, 8, 3, 15, 18, 16, 11, 9, 7, 6};
    bubble_sort(arr,10);
    show(arr,10);
}
