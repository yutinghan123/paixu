#if 0
#include <stdio.h>

void quick_sort(int *arr, int low, int high);
void show(int *arr, int n);

int main()
{
    int arr[8] = {8, 3, 9, 4, 10, 7, 6, 1};

    quick_sort(arr, 0, 7);
    show(arr, 8);

    return 0;
}

void quick_sort(int *arr, int low, int high)
{
    int pivot = 0;
    int i = 0;
    int j = 0;
    if(high <= low)
        return;

    pivot = arr[low];
    i = low;
    j = high;

    while(i < j) {
        while(i < j && arr[j] > pivot)
            j--;
        if(i < j)
            arr[i++] = arr[j];
        while(i < j && arr[i] < pivot)
            i++;
        if(i < j)
            arr[j--] = arr[i];
    }
    arr[i] = pivot;
    quick_sort(arr, low, i - 1);
    quick_sort(arr, i + 1, high);
}

void show(int *arr, int n)
{
    int i = 0;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
#endif
/*
基本思想

通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。

步骤

a. 先从数列中取出一个数作为基准数。

b. 分区过程，将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边。

c. 再对左右区间重复第二步，直到各区间只有一个数。
*/

/*****************************************************
File name：Quicksort
Author：Zhengqijun    Version:1.0    Date: 2016/11/04
Description: 对数组进行快速排序
Funcion List: 实现快速排序算法
*****************************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 10

/**************************************************
 *函数名：display
 *作用：打印数组元素
 *参数：array - 打印的数组，maxlen - 数组元素个数
 *返回值：无
 **************************************************/
void display(int array[], int maxlen)
{
    int i;

    for(i = 0; i < maxlen; i++)
    {
        printf("%-3d", array[i]);
    }
    printf("\n");

    return ;
}

/************************************
 *函数名：QuickSort
 *作用：快速排序算法
 *参数：
 *返回值：无
 ************************************/
void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)     // 从右向左找第一个小于k的数
            {
                j--;
            }

            if(i < j)
            {
                arr[i++] = arr[j];
            }

            while(i < j && arr[i] < k)      // 从左向右找第一个大于等于k的数
            {
                i++;
            }

            if(i < j)
            {
                arr[j--] = arr[i];
            }
        }

        arr[i] = k;

        // 递归调用
        QuickSort(arr, low, i - 1);     // 排序k左边
        QuickSort(arr, i + 1, high);    // 排序k右边
    }
}

// 主函数
int main()
{
    int array[BUF_SIZE] = {12,85,25,16,34,23,49,95,17,61};
    int maxlen = BUF_SIZE;

    printf("排序前的数组\n");
    display(array, maxlen);

    QuickSort(array, 0, maxlen-1);  // 快速排序

    printf("排序后的数组\n");
    display(array, maxlen);

    return 0;
}
