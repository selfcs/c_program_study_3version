/* 【例2-3】 求华氏温度100F 对应的摄氏温度。计算公式如下
c = 5x(f-32)/9

式中：c表示摄氏温度，f表示华氏温度
*/

#include<stdio.h>

int main(void)
{
    /* 定义两个整型变量， celsius表示摄氏度，fahr表示华氏度*/
    int celsius, fahr;

    fahr = 100;
    celsius = 5 * (fahr - 32) / 9;

    printf("fahr=%d, celsius=%d \n", fahr, celsius);

    return 0;
}


