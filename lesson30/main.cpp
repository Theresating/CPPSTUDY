/*
(一)return语句的用法
用法：
    return语句的位置是自由的，它无论是处于if/for/while
	等各种位置都可以直接使用return。
例1：
    判断一个char是否是字母
	int is_alpha(char ch)
	{
	if (ch >= 'a'&&ch <= 'z')
	{
	return 1;//满足条件立刻退出return1
	}//空间占的少，只要得到答案就退出
	if (ch >= 'A'&&ch <= 'Z')
	{
	return 1;
	}
	return 0;
	}
	int main()
	{
	int ret = is_alpha(100);
	return 0;
	}
例2：
    判断质数（如果输入的数为负数、1、0就提前退出）
	int prime(int n)
	{
	   if(n<=2)
	   return 0;
	   int flag = 1;
	   for(int i=2; i<n; i++)
	   {
	      if(n%i == 0)
		  {
		    flag = 0;
		    break;
		  }
	   }
	   return flag;//把结果返回
	}
（二）函数间的调用
调用：
    1.所有函数之间都可以相互调用，没有语法上的限制
	   main()->fa->fb->fc
	2.甚至可以相互调用、调用自身（递归）
	  main()->fa->fb->fa->fb
	  main()->fa->fa
例子：
    打印字母表（函数间调用）
	#include <stdio.h>
	int is_alpha(char ch)
	{
	if (ch >= 'a'&& ch<='z')
	{
	return 1;
	}
	if (ch >='A'&&ch <='Z')
	{
	return 1;
	}
	return 0;
	}
	#include <stdio.h>
	int is_alpha(char ch)
	{
	if (ch >= 'a'&& ch<='z')
	{
	return 1;
	}
	if (ch >='A'&&ch <='Z')
	{
	return 1;
	}
	return 0;
	}
	void print_ascii()
	{
	for (int i = 1; i < 127;i++)
	{
	if (is_alpha(i))
	{
	printf("%d->%c \n", i, i);
	}
	}

	}
	int main()
	{
	print_ascii();
	return 0;
	}//函数调用main函数调用printf_sacii,printf_sacii再调用is_alpha

（三）程序的起点：main函数
main函数：入口函数（entry）人为规定
        1.代码里必须有一个main函数，否则编译不通过，main字面不可修改
		2.程序启动时，先从main函数开始运行，程序按照顺序和逻辑一行一行执行
执行方式：
        一行一行执行，线性顺序 main->fa->主轴loc1->fb->主轴loc2->结束
		等待调用函数执行完再再主程序上继续执行下一行

（四）函数声明与函数定义（实现）
实现：函数的先后顺序
1.调用的地方：往前找这个函数：
  把最先需要调用的函数放在最前面，便于编译器找到函数
  若反过来则会出现未定义函数的现象无法编译，
  相互调用的话也有解决方法，
2.解决方法：先声明后使用，是正规写法
  把函数原型（声明prototype）放在最前
  此时函数书写顺序随意
3.函数声明和函数定义区别
  1.函数声明不带大括号（无函数体）
  2.函数定义有大括号（有函数体）
  注：1.参变量的名称可以省
     2.没有函数体，参数名字根本没用到
	 3.函数声明里的参数名称与函数定义里的不需要一致
	 4.加一个参量也增加可读性，最好加
  
（五）编码的规范：函数名的命名
规则：
    数字、字母、下划线的组合
注意：
    函数名的命名必须有意义，要做到顾名思义，名字反映其功能
习惯：（编码风格命名法，使用一种）
    1.全小写，下划线（旧式c）
	2.每个单词大写开头（C++）
	3.第一个单词小写开头，后面大写开头（Java，C#）


*/


























