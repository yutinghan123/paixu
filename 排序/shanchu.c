#include <stdio.h>
int main(void)
{
    int a[23] = {1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215};
    int b[22];
    int index;
    int i;
    printf("请输入要删除的数字的下标");
    scanf("%d",&index);
    while(index>23)
    {
        printf("please scanf the right number smaller than 24!\n");
        printf("请输入要删除的数字的下标");
        scanf("%d",&index);
    }
    for(i=0;i<23;i++)
    {
        if(i<index)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = a[i+1];
        }
    }
    for(i=0;i<22;i++)
    {
        printf("%d\x20", b[i]);
    }
    printf("\n");
    return 0;
}
#if 0
# include <stdio.h>
int main(void)
{
    int a[23] = {1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215};
    int b[22];  /*用来存放删除数字后的新数组, 因为删除了一个值, 所以长度为22*/
    int Index;  //要删除的值的下标
    int i;  //循环变量
    printf("请输入要删除的值的下标：");
    scanf("%d", &Index);
    for (i=0; i<23; ++i)
    {
        if (i < Index)
        {
            b[i] = a[i];  /*循环变量i小于插入值位置Index时, 每一个元素所存放的位置不变*/
        }
        else
        {
            b[i] = a[i+1];  /*删除值后面的元素都往前移一位, 要删除的值直接被覆盖*/
        }
    }
    for (i=0; i<22; ++i)
    {
        printf("%d\x20", b[i]);  // \x20表示空格
    }
    printf("\n");
    return 0;
}
#endif
