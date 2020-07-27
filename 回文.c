#include<stdio.h>
#include<string.h>

int main()
{
    char a[101], s[101];
    int len, top, next, i, mid;


    gets(a);
    len = strlen(a);

    if (len % 2 == 0)
    {
        printf("No!\n");
    }
    
    mid = len / 2 + 1;
    top = 0;
    // 先将mid前面的字符输入到s字符数组中
    for ( i = 0; i < mid - 1; i++)
    {
        s[top] = a[i];
        top++;
    }
    next = mid;
    
    // 进行判断是否是回文
    for ( i = next; i < len; i++)
    {
        if (a[i] != s[top-1])
        {
            break;
        }
        top--;
        
    }
    if (top == 0)
    {
        printf("Yes!\n");
    }else
    {
        printf("No!\n");
    }

    return 0;
}