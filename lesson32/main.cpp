/*
函数的递归调用

(一)调用分类
函数可以在任意一个函数中调用
普通情况：
   main->a()->b()->c()
特殊情况：
   统称为递归调用
相互调用：
   main()->a()->b()->a()
调用自己：
   main()->a()->a()
（二）递归调用
用途：
    算法设计
定义：
    递归用于实现特定的算法，
特点：
    1.将规模为n的问题转换为规模
	  为n-1的（或更低）的相同问题
	  1.1数据结构二叉树
	  1.2几何里的分形
	  1.3数学里的数列（MATLAB）
	2.终止条件的判断：别让他无限制调用下去
	
例子：
    n!使用循环来求：
	int computer (int n)
	{
	  int result = 1;
	  for(int i=1;i<=n;i++)
	  {
	    result *= i;
	  }
	}
	用递归算法实现：
	int fx( int n)
	{
         if(n==1)	
	        return 1;//终止条件
	     else
		    return n*fx(n-1);//降低规模
	}
	int main ()
	{
	   int ret = fx(3);
	   printf("%d \n",ret);
	   return 0;
	}
例子：
    斐波那契额数列：1,2,3,5,8,13,21,34.。。
	nt fx( int n)
	{
	if(n==0)//终止条件
	{
	    return 0;
	}
	if(n==1)//终止条件
	{
	    return 1;
	}
	else
	{
	    return fx(n-1)+fx(n-2);//降低规模
	}
	}
	int main()
	{
	   int ret = fx(5);
	   printf("%d ]n",ret);
	   return 0;
	}//函数栈


*/
#include <stdio.h>
int main()
{
	return 0;

}













