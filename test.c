#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

/* clock_t是clock()函数返回的变量类型 */
clock_t start, stop;
/* 记录被测函数允许时间，以秒为单位 */
double duration;

double f1(int n, double a[], double x);
double f2(int n, double a[], double x);

#define MAXN 1000000

int main()
{
    int i;
    double a[MAXN];

    for(i = 0; i<MAXN; i++ ){
        a[i] = (double)i;
    }
    start = clock(); // 开始计时
    f1(MAXN - 1, a, 1.1);// 运行时间

    stop = clock();     // 停止计时
    duration = ((double)(stop - start)) / CLK_TCK;

    printf("ticks1 = %f\n", (double)(stop -start));
    printf("duration1 = %6.2e\n", duration);

    start = clock();
    f2(MAXN - 1, a, 1.1);
    stop = clock();
    duration = ((double)(stop - start) / CLK_TCK);

    printf("ticks2 = %f\n", (double)(stop -start));
    printf("duration2 = %6.2e\n", duration);


    return 0;
}

double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = 1; i <= n; i++){
        p += (a[i] * pow(x, i));
    }

    return p;
}

double f2(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = n; i > 0; i--) {
        p = a[i -1] + x*p;
    }
    return p;
}


