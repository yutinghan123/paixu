#include <stdio.h>
void choose_sort(int *arr,int n);
void show(int *arr,int n);

void choose_sort(int *arr,int n)
{
    int i,j;
    int index;
    int buff;
    for(i=0;i<n;i++)
    {
        index = i;
        for(j=i;j<n;j++)
        {
            if(arr[index]>arr[j])
            {
                index = j;
            }
        }
        buff = arr[i];
        arr[i] = arr[index];
        arr[index] = buff;

    }
}
void show(int *arr,int n)
{
    int i = 0;
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
}
int main(void)
{
    int arr[10] = {10, 8, 3, 15, 18, 16, 11, 9, 7, 6};
    choose_sort(arr,10);
    show(arr,10);
}
