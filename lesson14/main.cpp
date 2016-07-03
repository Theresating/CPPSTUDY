#include<stdio.h>
int main()
{
	/*
	表达式就是一个值，也叫右值可以放在等式右侧
	int a = 1;
	int b = 2;
	printf("%d,%d \n", a, a + b);

	算数表达式：+ - * /%加减乘数模
	printf("%d \n", a + b);
	
	模运算%（操作数不能是小数）
	printf("%d \n", 123 % 10);

	除法运算（结果出去小数部分,结果为2）
	int c = 8;
	int d = 3;
	printf( "%d \n", c / d);
	浮点型相除结果也为浮点型；

	赋值运算符（变量和数组元素可以被赋值,结果为12）
	int e = 10;
	int f = 2;
	e = e + f;
	printf("%d \n",e);
	*/



	/*解析加法运算
	1.从a的内存取出a的值，交给加法器
	2.从b的内存取出b的值，交给加法器
	3.加法器开始运算，求得两数之和存到输出寄存器中
	4.将加法器的输出值存回到a中（内存）
	*/

	/*赋值运算的简写
	a += b 相当于 a=a+b
	a *= b 相当于 a=a*b

	a *= b;//a*b=1*2=2
	printf("%d \n", a);
	*/

	/*赋值表达式（本身就是一个右值 其值就是左边的变量的值）
	int a = 0;结果是10，先赋值再替换
	printf("%d \n", (a = 10));
	*/

	/*int a = 10;
	int b = 2;
	a += b - 1;//a=a+b-1
	printf("%d \n", a);//结果为11
	*/

	/*结果为50,10*(10+2)
	int a = 10;
	int b = 2;
	a *= b + 3;
    printf("%d \n", a);
	*/
	
	/*输入一个整数 求百位十位个位的数字
	int n ;
	printf("please input a number:");
	scanf_s ("%d", &n);
	char buf[3];
	buf[2] = n % 10;//个位为7

	n /= 10;
	buf[1] = n % 10;//十位为6

	n /= 10;
	buf[0] = n;//百位为3

	printf("%d %d %d", buf[2], buf[1], buf[0]);
    
	return 0;
	*/
}