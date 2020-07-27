#include<stdio.h>

int main()
{
    int a[1001], i, j, t, n;
    scanf("%d", &n);
    // 循环输入
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // 冒泡排序
    for ( i = 0; i < n-1; i++)
    {
        
        for ( j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    // 输出结果
    for ( i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            printf("%d ",a[i]);
        }
        
    }
    return 0;
    
}