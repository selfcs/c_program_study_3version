/* 【练习2-4】 温度转换: 求华氏温度150F对应的摄氏温度 */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int celsius, fahr;

    fahr = 150;
    celsius = 5 * (fahr - 32) / 9;

    printf("fahr=%d, celsius=%d \n", fahr, celsius);

    return 0;
    return 0;
}
