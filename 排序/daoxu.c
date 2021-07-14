#if 0
#include <stdio.h>
int main(void)
{
    int array[5]={1,2,3,4,5};
    int b[5];
    int i,j;
    for(i=0,j=4;i<5,j>=0;i++,j--)
    {
        b[i] = array[j];
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
#endif

#include <stdio.h>
int main(void)
{
    int a[23] = {1,5,66,8,55,9,1,32,5,65,4,8,5,15,64,156,1564,15,1,8,9,7,215};
    int i = 0;
    int j = 22;
    int buf;
    for(;i<j;++i,--j)
    {
        buf = a[i];
        a[i] = a[j];
        a[j] = buf;
    }
    for(i=0;i<23;i++)
    {
        printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}
