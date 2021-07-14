#include <stdio.h>
int main(void)
{
    int array[] = {1,5,66,8,55,9,1,32,5,65,4,8,5,15,64,156,1564,15,1,8,9,7,215,
           16,45,5,6,164,15,236,2,5,55,6,4,1,59,23,4,5,314,56,15,3,54,
           1,54,54,2,4,4,5,15,698,486,56,26,98,78,456,1894,564,26,56,5};
    int i,j,k;
    i = sizeof(array)/sizeof(int);
    printf("请输入一个数字:\n");
    scanf("%d",&j);
    for(k=0;k<i;k++)
    {
        if(j==array[k])
        {
            printf("下标 = %d\n",k);
            //break;
        }
    }
    if(i == k)
    {
        printf("sorry!\n");
    }
    return 0;
}
