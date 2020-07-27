#include<stdio.h>
int main()
{
    int a[10], n, t, i, j;
    printf("请输入！\n");
    scanf("%d", &n);
    // 循环输入数据
    for(i = 0; i < n;i++)
    {
        scanf("%d",&t);
        a[i]=t;
    }


    for(i = 0; i < n-1;i++)
    {
        // 重复次数增多，应该为n-1-i，减少循环次数
        for(j = 0;j < n-1-i;j++)
        {
            if (a[j] < a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
            
        }
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}
