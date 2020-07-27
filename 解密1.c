#include<stdio.h>
int main()
{
    int q[101]={0, 6, 3, 1, 7, 5, 8, 9, 2, 4};
    // head表示第一位，tail表示最后一位的后一位
    int head, tail;
    head = 1;
    tail = 10;
    // 当head小于tail的时候执行
    while (head < tail)
    {
        // 输出第一个被删除的
        printf("%d ", q[head]);
        // 换到第二位
        head++;
        // 交换第二位与最后一位的下一位
        q[tail] = q[head];
        // 递增
        head++;
        tail++;
    }
    return 0;

}