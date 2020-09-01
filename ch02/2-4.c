/* 【例2-4】为鼓励居民节约用水，自来水公司采取用水量按月分段计费的办法，
居民应交水费y (元)与月用水量x (吨)的函数关系式如下(设x≥0)。
输人用户的月用水量x (吨)，计算并输出该用户应支付的水费y (元) (保留两位小数)。
            4x/3   x<= 15
y = f(x) = 
            2.5x -10/5 x>15

*/

#include<stdio.h>
int main(void)
{
    double x, y;
    printf ("Enter x (x>=0): \n"); /* 输入提示 */

    scanf("%lf", &x);

    /* if-else 语句 */
    if (x<=15)
    {
        y = 4 * x / 3;
    }
    else
    {
        y = 2.5 * x - 10.5;
    }

    printf("y=f(%f) = %.2f \n", x, y);
    
    return 0;
}

/* 格式控制说明：
int: %d
float: %f
double: %lf
 */
