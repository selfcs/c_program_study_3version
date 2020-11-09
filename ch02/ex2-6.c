/* 【练习2-6】 计算物体自由下落的距离：一个物体从100米的高空自由下落。求它
前3秒内下落的垂直距离。设重力加速度为10m/s^2。*/

#include<stdio.h>

int main(void)
{
    int h, t, g, s;

    h = 100;
    t = 3;
    g = 10;

    s = 0.5 * g * t * t;

    /* 严格来说，这里需要判断s>100，因暂时未学if条件判断，故不考虑 */

    printf("该物体前%d秒下落的距离为%d", t, s);
    printf("test")

    return 0;
}
