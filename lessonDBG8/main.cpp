/*
程序崩溃的原因

（一）分类：
 1.读取未赋值的变量：
   1.1一个变量未初始化、未赋值就读取它的值
   1.2例子：
	   int multiply(int m, int n)
	   {
	   return m*n;
	   }
	   int main()
	   {
	   int a, b;//未赋值，错误
	   int m = multiply(a, b);
	   printf("result: %d \n", m);
	   return 0;
	   }

 2.函数栈溢出
   2.1定义了一个体积太大的局部变量
   2.2函数嵌套调用层次过深（无穷递归）
      递归调用而且没有终止程序
   2.3例子：
      当变量体积太大时应该用malloc 或者new来分配动态变量
	  #include <stdlib.h>
	  void test()
	  {
	  int buf[1024 * 1024 * 16];//栈溢出
	  printf("do not define a very large buffer on the stack");
	  for (int i = 0; i < sizeof(buf);i++)
	  {//绿色箭头表示从第XX行返回后函数栈发生异常
	  buf[i] = i;
	  }
	  }
	  int main()
	  {
	  test();
	  return 0;
	  }
 3.数组越界访问
   访问数组时，下标越界
 4.指针的目标对象不可用****
   4.1空指针：读取位置0x000000000时发生了访问冲突
   4.2野指针
      4.2.1指针未赋值(内存错误整个屏幕乱码)
	  4.2.2free、delete释放了的对象
	  4.2.3不恰当的指针强制转变：不会产生同一特征

 





















 */
#include <stdio.h>
#include<stdlib.h>









