#if 0
#include <stdio.h>
int main(void)
{
    int a[23] = {1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215};
    int buf[24];
    int index;
    int num;
    int i;
    printf("请输入要插入的下标:\n");
    scanf("%d",&index);
    while(index>23)
    {
        printf("please scanf the right number smaller than 24!\n");
        printf("请输入要插入的下标:\n");
        scanf("%d",&index);
    }
    printf("请输入要插入的值:\n");
    scanf("%d",&num);
    for(i=0;i<24;i++)
    {
        if(i<index)
        {
            buf[i] = a[i];
        }
        if(i == index)
        {
            buf[i] = num;
        }
        else
        {
            buf[i]=a[i-1];
        }
    }
    for(i=0;i<24;i++)
    {
        printf("%d\x20",buf[i]);
    }
    printf("\n");
    return 0;
}
#endif

#include <stdio.h>
int main(void)
{
    int i,j;
    int buf;
    int a[] = {900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500};
    int n = sizeof(a)/sizeof(a[0]);
    for(i=1;i<=n;i++)
    {
        buf = a[i];
        j = i-1;
        while((j>=0)&&(a[j]>buf))
        {
            a[j+1] = a[j];
            --j;
        }
        if(j != i-1)
        {
            a[j+1] = buf;
        }
    }
    for(i=0;i<n;i++)
    {
         printf("%d\x20",a[i]);
    }
    printf("\n");
    return 0;
}
