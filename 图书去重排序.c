#include<stdio.h>
int main()
{
    int a[1001], i, n, t;

    printf("输入数字\n");
    scanf("%d", &n);
    // 初始化
    for ( i = 1; i <= 1000; i++)
    {
        a[i] = 0;
    }
    // 循环输入ISBN编号
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        a[t] = 1;
    }
    // 循环输出
    int k = 1;
    for ( i = 1; i <= 1000; i++)
    {
        if (a[i]==1)
        {
            printf("%d ", i);
            k++;
        }
        
    }
    printf("%d", k);
    return 0;
}