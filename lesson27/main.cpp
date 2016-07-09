
/*
函数的传值

（一）引例
   1.代码：
	#include<stdio.h>
	void test(int a)
	{
	    a += 12;
	}
	int main()
	{
	    int n = 10;
	    test(n);
	    printf("now: n=%d \n", n);
	    return 0;
	}//n=10
   2.问题：
	 在test函数里对a怎么修改都对main函数里的m没有影响
	 （1）为什么修改a的值对m没有影响？
	 （2）怎么才能在test里面修改main里的值呢？
   3.解答：
	 3.1在函数调用过程中test（n）；只是把n的值传给了test并不是把变量传给了test，这个过程叫“传值”调用void
		test（int）传入的值用于对参变量初始值化，相当于发生了一个int a = n 的操作，a是个变量，n是个变量
		对a的修改不会影响n
	 3.2参变量和main函数里的变量，是完全不同的两个变量，内存位置也不同，所以之前不会有影响，反观：内存地址不同
		就是不同的变量
	 3.3以我目前的知识，在test函数是无法改变main函数的变量的值的（看是否是同一个变量看其内存地址是否相同，
	    变量名字可以相同（不同函数内））,下例中不同函数里变量名(变量a在函数main中以及在函数test中）可以相同
		但互不影响
		void test(int a)
		{
		   a += 1;
		}
		int main()
		{
		    int a = 10;
			test (a);
			printf("now:a=%d \n",a);
			return 0;
		}
（二） 函数传值：隐式转换
   1.规定：
     一般我们要求传递的值得类型，应该和函数的参数类型一致；
     不一致的时候，如果能够满足隐式转换的规则，则也可以编译
	 传的是值不是变量，对原变量无关，只是用n初始化了a的值而已
	 double sum(double a,double b)
	 {
	    return a + b;
	 }
	 int main()
	 {
	    int m = 10;
		int n = 11;
		int result = sum(m,n);
		return 0;
	 }
   2.语法检查：
     尝试double a = m;double b = n;可以隐式转换所以编译通过
     从int转换成double类型到double sum中去，int可以转换为double
	 从double到int会丢失数据小数部分，编译时会警报，但依然编译通过

*/
