/*
变量的生命期与作用域

（一）变量的作用域
   1.定义：
     每一个变量都有一个有效范围
	 在这个范围内这个变量是可以访问的
   2.局部作用域：
     从定义之处生效(之前或者之后都不能访问)，至大括号结束后失效（该变量所在的大括号）
   3.例子：
	 int main ()
	 {
	     if(1)
	    {
	       int a = 10;//生效
	       printf("a:%d\n",b);
	    }//失效
	    printf("a:%d \n",b);
	 }
   4.层次：
	 4.1第一层级是第一个大括号内函数
	 4.2第二层级是第二个大括号内函数
	 4.3第三层级是第三个大括号内函数
	 4.4第零层级是将全局变量所在位置
   5.作用域原理：
	 5.1可以访问上一级的变量:第二层级可以访问第一层级
	    #include <stdio.h>
		int main ()
		{  
		   int a = 1;//a生效
		   if(1)
		   {
		      a = 2;//访问上一层的变量，没有int
		   }
		   printf("a:%d \n",a);//a=2
		   return 0;
		}//a失效
	 5.2可以和上一层级的变量重名，称为名字的覆盖，名字是就近访问
	    当重名时：优先找本层的变量
		1>就近访问
		#include<stdio.h>
		int main()
		{
		    int a = 1;
			if(1)
			{
			    int a = 2;//重新声明了有int
				printf("level2: a=%d \n",a);//a=2
			}
			printf("end: a = %d \n",a);//a=1
			return 0;
		}
		2>就近访问
		#include<stdio.h>
		int  a = 1;
		int main()
		{
		   int a = 2;
		   if(1)
		   {
		      int a = 3;//重新声明了有int
		      printf("level2: a=%d \n",a);//a=3
		   }
		   printf("end: a = %d \n",a);//a=2
		   return 0;
		}
		3>
		#include<stdio.h>
		int  a = 1;
		int main()
		{
		   int a = 2;
		   if(1)
		   {
		      a = 3;//去掉int，访问上一层，相当于在上一层声明内层重新赋值了
		      printf("level2: a=%d \n",a);//a=3
		   }
		   printf("end: a = %d \n",a);//a=2
		   return 0;
		}
	 5.3第二层级的同一变量名的值为第二层级的赋值，但可读性差
（二）变量的生命期
   1.定义：
     生命期和作用域是同一个事，是指当程序运行时，
	 什么时候变量生效，什么时候变量失效
   2.区别：
     2.1作用域是从编写代码的角度
	 2.2是从程序运算的角度
	 2.3全局变量的生命期是一直有效的
（三）函数名重载
    1.举例：
    以下两个函数相同
	double find_max（double a,double b）
	double find_max(double c,double b)
	(只是比较参数个数和参数类型，跟参数名无关！)
    以下两个函数相同
	double find_max(double a ,double b)
	int    find_max(double a,double b)
	(不比较返回值类型！)
（四）函数的匹配步骤
   1.现根据函数名查找
     找到一个或多个同名的函数（如果一个都没有，那就直接报编译错误）
   2.按类型和个数匹配
     2.1按第一种情况：找到一个完全匹配的函数，则调用函数
     2.2按第二种情况：没有找到完全匹配（精确匹配）的函数。。。
   3.模糊匹配
     情况复杂
	 double sum (double a,double b)
	 {
	    return a+b;
	 }
   调用：
   sum(10,11);
   满足以下条件时，模糊匹配成功：
   1.参数个数相同(个数都不同一看就不能选)
   2.参数类型可以自动转换（隐式转换）double a = 10;
   两个都模糊匹配，编译器不知道匹配哪个
   #include<stdio.h>

   double find_max(double a, double b)
   {//可以匹配
   printf("111\n");
   return 0;
   }
   float find_max(float a, float b)
   {//可以匹配
   printf("222\n");
   return 0;
   }
   double find_max(double a, double b, double c)
   {//个数不同不能匹配
   return 0;
   }
   int main()
   {//两个都能模糊匹配，需要强势转换类型达到精确匹配
   int a = 10;
   int b = 10;
   find_max(a, b);
   return 0;
   }













*/
#include<stdio.h>
int main()
{
	int a = 1;
	if (1)
	{
		int a = 2;
		printf("level2: a=%d \n", a);
	}
	printf("end: a = %d \n", a);
	return 0;
}











