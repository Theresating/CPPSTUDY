#include <stdio.h>
int main(){
	/*
	for 语句语法形式：

	形式：for（expr1；expr2；expr3）
	        statement
	规则：
	1.初始化：执行expr1 （只执行一次）
	2.条件判断：如果expr2为真，则执行expr3，否则退出
	3.执行statement：循环体，每次进入循环体都要先判断2
	4.执行expr3：递增，直到范围超过2
	5.回到32，下一轮
	例子：
	int a[100];
	int i;
	for (i = 0; i < 100;i++)
	{
	a[i] = i + 1;
	}

	for循环变形（1）：
    for(i=0;i<100;i++)
	{
	a[i]= i=1;//for后面只跟随一条语句，因此需要大括号括起来
	}
	与
	for(i=0;i<100;i++)
	a[i]= i=1;
	注意：初学者务必使用大括号（复合语句）
	对于初学者是为了避免低级错误
	更重要的是可读性，属于编码规范的要求。
	使用大括号使得层次更清晰
	
	for循环变形（2）：
	初始化表达式可以为空：
	int a[100];
	int i;
	i = 0;
	for (; i < 100; i++)
	{
	a[i] = i + 1;
	}
	printf("%d \n", a[0]);

	for循环变形（3）：
	后置表达式expr3也可以为空,将后置表达式直接放在循环体里
	int a[100];
	int i;
	for(i = 0; i < 100;)
	{
	a[i] = i + 1;
	i += 1;
	}

	for循环变形（4）：
	条件表达式expr2可以为空，表示总是满足
	int a[100];
	int i;
	for (i = 0;;i += 1)
	{
	if (i >= 100)
	break;
	a[i] = i + 1;
	}
	
	for循环变形（5）：
	三个条件都可以空,结果会一直打印下去，不会停止
	for( ; ; )
	{
	printf("hello");
	}

	break语句
	用于中断循环，退出执行

	continue语句
	跳过后面的语句，直接进入下一轮
    例子：
	    打印1到100之间的偶数，并统计偶数的个数

		int count = 0;//在c++里在任意位置都可以定义变量，在C中只能在前面定义变量
		for (int i = 1; i <= 100; i += 1)
		{//变量分散定义
		if (i % 2)//非零是奇数，为零是偶数
		continue;//跳过下面的步骤，进行下一轮
		count++;
		printf("even : %d \n", i);
		}
		printf("total : %d \n", count);

	遍历数组：
	例1：    
	    将一个数组的元素全部按16进制打印
		unsigned char buf[4] = { 1, 2, 3, 4 };
		for (int i = 0; i < 4;i++)
		{
		printf("%02X \n", buf[i]);
		}
    例2：
	   将一个数组的元素全部按16进制打印，每行打印4个字符
	   unsigned char buf[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	   for (int i = 0; i < 8; i++)
	   {//编码规范，缩进层次
	     printf("%02X ", buf[i]);
	     if ((i + 1) % 4 == 0)
	      {
	         printf("\n");
	      }
	   }
    例3：
       将一个数组顺序颠倒存放如：int buf[4]原来1234，颠倒后边4321
	   设计思路与方法：
	   先找出规律：
	   a[0]<->a[n-1]
	   a[1]<->a[n-2]
	   ...
	   a[i]<->a[n-1-i]
	   共循环多少次个：n/2次（同时适用于n为奇数和偶数）
	   int buf[5] = { 1, 2, 3, 4, 5 };
	   for (int i = 0; i < 5 / 2;i++)
	   {
	   int t = buf[i];
	   buf[i] = buf[n - 1 - i];
	   buf[n - 1 - i] = t;

	   }
    例4 求小于100的奇数的平方和
	int sum = 0;
	for(int i=1;i<100;i+=2)
	{
	   sum +=i*i;
	}

	易错点：
	1.初始值和结束值
	2.遍历时是小于并不是小于等于，因为初始值为0


	*/



	

	







	return 0;
}














