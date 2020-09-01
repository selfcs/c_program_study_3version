/* 【练习2-5】 算术表达式5 * (fahr - 32) / 9能改写成5 (fahr - 32) / 9吗？
答：不行
能改写成5 /9 * (fahr - 32) ,会影响计算结果吗？
答：会的，因为C语言中 5/9 为 0。
*/


#include<stdio.h>

int main(int argc, char const *argv[])
{
    int celsius, fahr;

    fahr = 150;
    celsius = 5 /9 * (fahr - 32);

    printf("fahr=%d, celsius=%d \n", fahr, celsius);

    return 0;
    return 0;
}
