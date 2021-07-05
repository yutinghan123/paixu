#if 0
#include <stdio.h>
int main(void)
{
    int i,j;
    int buff;
    int a[] = {900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500};
    int n = sizeof(a)/sizeof(a[0]);
    for(i=1;i<=n;i++)
    {
        buff = a[i];
        j = i-1;
        while((j>=0) && (a[j] > buff))
        {
            a[j+1] = a[j];
            --j;
        }
        if(j != i-1)
        {
            a[j+1] = buff;
        }
    }
    for(i=0;i<n;i++)
    {
         printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}
#endif
#if 0
# include <stdio.h>
int main(void)
{
    int i, j;
    int temp;  //用于存储站出来的数
    int a[] = {900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500};
    int n = sizeof(a) / sizeof(a[0]);  //存放数组a中元素的个数
    for (i=1; i<n; i++)  /*i从1开始, 即从第二个人开始比, 每循环一次比较一轮*/
    {
        temp = a[i];
        j = i - 1;  //与它前一个数比较
        while ((j>=0) && (a[j]>temp))  /*与左边所有人都比完了或找到一个比他矮的为止*/
        {
            a[j+1] = a[j];  //与他比完之后比它高的向右挪一个位置
            --j;  /*最经典的地方, 每次减1, 再与前一个比较, 直到与左边所有的都比完或比到有一个数小于等于它为止, while循环退出, 此时左边形成一个新的有序序列*/
        }
        if (j != i-1)  /*这句也很经典, j != i-1说明执行过上面的while, 并且找到位置了, 那么就插进去；如果j = i-1, 则说明没有执行过while, 说明他和左边的相比是最高的, 则不用换位置*/
        {
            a[j+1] = temp;  /*之所以j要加1是因为while在退出之前又执行了一次--j*/
        }
    }
    for (i=0; i <15; ++i)
    {
        printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
/*
将一个数据插入已经排好的序列中，使用插入排序无疑是最好的选择。此时计算量只不过是冒泡排序的一轮比较而已
*/
#include <stdio.h>
int main()
{
    int a[10] = {1, 3, 4, 5, 7, 9, 11, 13, 20};
    int i = 8;
    int data = 0;
    printf("输入要插入的数:");
    scanf("%d",&data);
    while((i>=0) && (a[i]>data))
    {
        a[i+1] = a[i];
        --i;
    }
    a[i+1] = data;
    for(i=0;i<10;++i)
    {
        printf("%d\x20",a[i]);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
# include <stdio.h>
int main(void)
{
    int a[10] = {1, 3, 4, 5, 7, 9, 11, 13, 20};
    int i = 8;  //存储数组有效数据的最大下标
    int data = 0;  //存储要插进来的数
    printf("请输入要插进来的数:");
    scanf("%d", &data);
    while ((i>=0) && (a[i]>data))  /*找到data应该插入的位置, 并把那个位置空出来*/
    {
        a[i+1] = a[i];
        --i;
    }
    a[i+1] = data;  //将data插入那个位置
    for (i=0; i<10; ++i)
    {
        printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}
#endif

/*
数组不擅长插入（添加）和删除元素。数组的优点在于它是连续的，所以查找数据速度很快。但这也是它的一个缺点。正因为它是连续的，所以当插入一个元素时，插入点后所有的元素全部都要向后移；而删除一个元素时，删除点后所有的元素全部都要向前移
 */

#include <stdio.h>
int main(void)
{
    int a[23] = {1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215};
    int b[24];
    int index;
    int i;
    int num;
    printf("请输入插入值的下标：");
    scanf("%d",&index);
    while(index>23)
    {
        printf("please scanf the right number smaller than 24!\n");
        printf("请输入插入值的下标：");
        scanf("%d",&index);
    }
    printf("请输入插入的数值：");
    scanf("%d",&num);
    for(i=0;i<24;i++)
    {
        if(i < index)
        {
            b[i] = a[i];
        }
        else if(i == index)
        {
            b[i] = num;
        }
        else
        {
            b[i] = a[i-1];
        }
    }
    for(i=0;i<24;i++)
    {
        printf("%d\x20", b[i]);
    }
    printf("\n");
    return 0;
}

#if 0
#include <stdio.h>
int main(void)
{
    int a[23] = {1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215};
    int b[24];  //用来存放插入数字后的新数组, 因为又插入了一个值, 所以长度为24
    int Index;  //插入值的下标, Index是“下标”的英文单词
    int num;  //插入的值
    int i;  //循环变量
    printf("请输入插入值的下标：");
    scanf("%d", &Index);
    while(Index > 23)
    {
        printf("please scanf the right number smaller than 24!\n");
        scanf("%d", &Index);
    }
    printf("请输入插入的数值：");
    scanf("%d", &num);
    for (i=0; i<24; ++i)
    {
        if (i < Index)
        {
            b[i] = a[i];  /*循环变量i小于插入值位置Index时, 每一个元素所放的位置不变*/
        }
        else if (i == Index)
        {
            b[i] = num;  //i等于Index时, 将插入值赋给数组b
        }
        else
        {
            b[i] = a[i-1];  /*因为插入了一个新的元素, 所以插入位置后的每一个元素所存放的位置都要向后移一位*/
        }
    }
    for (i=0; i<24; ++i)
    {
        printf("%d\x20", b[i]);
    }
    printf("\n");
    return 0;
}
#endif
