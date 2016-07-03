/*
指针作为函数的参数

1.指针参数：
  可以把指针作为函数的参数
2.指着参数功能：
  2.1可以读取上一层函数中变量的值*p
  2.2可以修改上一层函数中变量的值*p
3.例题：
  3.1
	 void test(int*p)
	 {//把一个内存地址传给一个函数
	 //test 我们能拿指针做什么
	 //使用星号操作*p,来读写操作
	 printf("before test:%d \n", *p);
	 *p = 1;//修改了内存的值
	 printf("now:%d \n", *p);
	 }
	 void test2(int n)
	 {
	 n = 1;//非指针变量的修改对a并无影响
	 }
	 int main()
	 {
	 int a = 0;
	 test2(a);//a与n对应不同的变量地址
	 test(&a);//把a的地址传递给test：1
	 return 0;
	 }
   3.2
      1//保存快捷键control+s






*/
#include <stdio.h>
int sum(int a, int b)
{
	return a + b;
}
void sum(int*a,int*b,)





















