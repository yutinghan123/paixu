//#if 0
#include <stdio.h>
int main(void)
{
    int min = 0;
    int mid;
    int array[]={13, 45, 78, 90, 127, 189, 243, 355};
    int max = sizeof(array)/sizeof(array[0])-1;
    int key;
    int flag = 0;
    printf("请输入想要查找的数:");
    scanf("%d",&key);
    while(min<=max)
    {
        mid = (min+max)/2;
        if(key<array[mid])
        {
            max = mid-1;
        }
        else if(array[mid]<key)
        {
            min = mid+1;
        }
        else
        {
            printf("下标:%d\n",mid);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("sorry!data is not found!\n");
    }
    return 0;
}
//#endif
#if 0
# include <stdio.h>
int main(void)
{
    int a[] = {13, 45, 78, 90, 127, 189, 243, 355};
    int key;  //存放要查找的数
    int low = 0;
    int high = sizeof(a)/sizeof(a[0]) - 1;
    int mid;
    int flag = 0;  //标志位, 用于判断是否存在要找的数
    printf("请输入想查找的数:");
    scanf("%d", &key);
    while ((low <= high))
    {
        mid = (low + high) / 2;
        if (key < a[mid])
        {
            high = mid - 1;
        }
        else if (a[mid] < key)
        {
            low = mid +1;
        }
        else
        {
            printf("下标 = %d\n", mid);
            flag = 1;
            break;
        }
    }
    if (0 == flag)
    {
        printf("sorry, data is not found\n");
    }
    return 0;
}
#endif
