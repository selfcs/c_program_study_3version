/* 例1-1 求阶乘 输入一个正整数n 求n! */

#include<stdio.h>  /* 编译预处理命令 */
int factorial(int n); /* 函数声明 */
int main(void); /* 主函数 */


int main(void){
	int n;  /* 变量定义 */
	printf("请输入一个正整数：\n");
	scanf("%d", &n);   /* 输入一个整数 */
	printf("该整数的阶乘是:\n");
	printf("%d \n", factorial(n));  /* 调用函数计算阶乘 */

	return 0;

}

int factorial(int n){  /* 定义计算n!的函数 */
	int i, fact=1;
	
	for(i=1; i<=n; i++){
		fact=fact*i;
	}


	return fact; 

}