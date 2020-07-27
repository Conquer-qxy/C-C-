#include<stdio.h>
// 定义全局变量，在子函数中使用
int a[101], n;

void quicksort(int left,int right)
{
    int i, j, t, temp;
    if (left > right)
    {
        return;
    }
    temp = a[left];
    i = left;
    j = right;
    while (i != j)
    {
        // 从右边第一个开始查询，比较出直到比基准数字小的序号结束
        while (a[j] >= temp && i < j)
        {
            j--;
        }
        // 从左边第一个开始查询，比较出直到比基准数字大的序号结束
        while (a[i] <= temp && i < j)
        {
            i++;
        }
        // 交换
        if (i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    // 最后交换基数与中间的一个数
    a[left] = a[i];
    a[i] = temp;
    // 以第一次为基准的数字的左边进行递归排序
    quicksort(left,i-1);
    // 以第一次为基准的数字的右边进行递归排序
    quicksort(i+1, right);
}

int main()
{
    int i, j, t;
    printf("输入数据\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    // 调用函数
    quicksort(1,n);

    // 结果输出
    for ( i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}
