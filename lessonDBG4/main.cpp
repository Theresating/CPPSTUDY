/*
单步调试技术
步骤：
   1.断点->单步->继续（分段、隔离、定位）
   2.调试窗口（观察局部变量、全局变量、内存窗口）
     调试->窗口->点击所要选的窗口->并将其拖拽至底部
   3.修改变量、内存的值（在内存窗口内可以直接修改值实时修改）
   4.step into（进入函数里面来看[不常用]，F11进入函数内单步）
     不在进入函数的第一行加断点时，F10（step over）直接跳过函数
*/
int a = 10;//全局变量：在监视窗口观测，在窗口内粘贴上去
#include<stdio.h>//在窗口内可以直接修改变量值
int Sum(int* buf, int n)
{
	int total = 0;//int * 是一种指针看不到buf内部了
	for (int i = 0; i < n ; i++)
	{//在内存1里面输入buf内存地址得到buf内容
		total += buf[i];
	}//此处没有循环直接得零
	return total;//把i<n写成了i<total(total 初始值为零)
}
int main()
{   //缓冲区
	int buf[64];
	for (int i = 0; i < 64;i++)
	{//初始化
		buf[i]=i;
		//循环太多，不能一遍遍的按F5走，
		//于是按continue就可以走完所有循环
		//直到遇到下一个断点（黄色箭头走向）
	}//观察局部变量0-63没有错误
	 //求和
	int result = Sum (buf, 64);//buf没错断定sum函数有问题
	printf("result: %d \n", result);
	return 0;
}


















