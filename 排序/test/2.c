#include <stdio.h>

void xuan(int *a,int n);
void show(int *a,int n);

void xuan(int *a,int n)
{
    int i,j;
    int index;
    int buff;
    for(i=0;i<n;i++)
    {
        index = i;
        for(j=i;j<n;j++)
        {
            if(a[index]>a[j])
            {
                index = j;
            }
        }
        buff = a[i];
        a[i] = a[index];
        a[index] = buff;
    }
}

void show(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[10] = {10, 8, 3, 15, 18, 16, 11, 9, 7, 6};
    xuan(arr,10);
    show(arr,10);
}
