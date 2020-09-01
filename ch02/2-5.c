/* 【例2-5】计算银行存款的本息。输人存款金额money、 存期year和年利率rate,
根据下列公式计算存款到期时的本息合计sum (税前)，输出时保留两位小数。 
sum = money * (1 + rate)^year

#常用的数学函数#
C语言处理系统提供了许多事先编好的函数，供用户在编程时调用，这些函数称
为库函数，其中一些必需的信息在相应的系统文件(头文件)中声明。所以，用户调
用库函数时，一定要用#include命令将相应的头文件包含到源程序中。例如，调用输人
输出函数，要加#include<stdio.h>;调用数学函数，则需加人#include<math.h>。

*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int money, year;
    double rate, sum;

    printf("Enter money:\n"); 
    scanf("%d", &money); 

    printf("Enter year:\n");
    scanf("%d", &year);

    printf("Enter rate:\n");
    scanf("%lf", &rate);

    sum = money * pow(1+rate, year);

    printf("sum=%.2f\n", sum);

    return 0;
}


