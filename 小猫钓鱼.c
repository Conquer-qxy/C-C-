#include<stdio.h>
#include<string.h>
struct queue
{
    int data[1000];
    // 头部
    int head;
    // 尾部
    int tail;
};

struct stack
{
    // 桌面牌的数量
    int data[20];
    int top;
};

int main()
{
    struct queue q1, q2;
    struct stack s;
    int i, n, t;
    int book[10];
    n = 6;
    // 初始化小哼q1
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &q1.data[i]);
    }
    q1.head=0;
    q1.tail=n;
    // 初始化小哈q2
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &q2.data[i]);
    }
    q2.head = 0;
    q2.tail = n;
    // 初始化桌面
    for ( i = 0; i < 10; i++)
    {
        book[i]=0;
    }
    
    s.top=0;
    


    return 0;
}
