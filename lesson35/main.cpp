/*
指针作为函数参数

（一）指针作为函数的参数
  1.指针参数：
    可以把指针作为函数的参数
  2.指着参数功能：
    2.1可以读取上一层函数中变量的值*p
    2.2可以修改上一层函数中变量的值*p
  3.例题：
    3.1把一个内存地址传给一个函数（使用星号操作*p,来读写操作）
	 void test(int*p)
	 {
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
	    test2(a);//a与n对应不同的变量地址，修改n对a没影响
	    test(&a);//把a的地址传递给test：1如此就可以修改上层函数的值
	    return 0;
	 }
   3.2传递变量地址到sum函数中计算和（a是地址，*a是地址上的内容）
      保存快捷键control+s
	  int sum(int a, int b)
	  {
	     return a + b;
	  }
	  void sum(int*a, int*b, int*out)//全部使用指针
	  {
	     int result = *a + *b;//a是地址，*a是地址上的内容
	     *out = result;//out保存输出，不使用返回值
	  }//取出a，b的内存值，结果存至out，a,b为输入参数；out为输出参数
	  int main()
	  {
	     int a = 10, b = 11;
	     int out = 0;
	     sum(&a, &b, &out);
	     return 0;
	  }
   3.3交换两个变量的值（一个函数要修改外层变量的值只能用指针）
	  void swap(int* a, int* b)
	  {
	     int t = *a;
	     *a = *b;
	     *b = t;
	  }//普通类型参数无法修改上一层函数的变量
	  int main()
	  {
	     int a = 10, b = 11;
	     swap(&a, &b);//此处局部变量a变b，b变a
	     return 0;
	  }
（二）传递数组作为参数
1.定义：
      数组名实质上就是一个指针类型，传递数组就是传递指针
2.形式：
     2.1 把数组传递给一个函数：
	  （注：此后内存里存储的元素为“对象”）
	 2.2首地址：一片连续内存的地址
     2.3长度：这块内存上存储的对象的个数
	  （注：在调用的时候也是自由的）
	 2.4例子：
	  int agv(int* p, int len)
	  {//求平均长度，首地址参数1，长度参数2
	     int sum = 0;
	     for (int i = 0; i < len;i++)
	     {
	        sum += p[i];
	     }
	     return sum / len;
	  }
	  int main()
	  {
	     int arr[] = { 1, 2, 3, 4 };//arr:int*
	     int ret;
	     ret = avg(arr, 4);//arr[0]~arr[3]的平均值
	     ret = avg(arr, 3);//arr[0]~arr[2]的平均值
	     ret = avg(arr + 1, 3);//arr[1]~arr[3]的平均值
	     return 0;
	  }
	2.5注意事项：
	  2.5.1以下两种写法完全等价：
	       int avg(int* p[],int len)//可以表示单个元素
           int avg(int p[],int len)//不是单个元素
	  2.5.2传递数组时，总是要另外传递长度信息，不能只是把首地址传给函数
	       int avg(int* p,int len);
	 *2.5.3对于avg而言不关心你是不是叫数组，在他眼里他只是接受了一个内存而已
（三）传递指针的作用
   1.能返回多个值：return只能返回一个值，如果一个函数要返回多个值，必须使用指针参数
   例子：写一个函数求出数组的最小值和最大值
   注：把用于输入的参数称为输入参数：p,len
      把用于输出的参数称为输出参数:max,min
	  解法一：最大值最小值分两函数写
		  int min(int* p, int len)
		  {
		     int _min = p[0];
		     for (int i = 1; i < len;i++)
		     {
		        if (p[i]<_min)
		        {
		           _min = p[i];
		        }
		     }
		     return _min;
		  }
		  int max(int* p, int len)
		  {
		     int _max = p[0];
		     for (int i = 1; i < len;i++)
		     {
		         if (p[i]>_max)
		         {
		            _max = p[i];
		         }
		     }
		  return _max;
		  }
	  解法二：最大值最小值合在一起写：返回多个输出参数时使用指针
		  void max_min(int* p, int len, int* pmax, int* pmin)
		  {
		     int _max = p[0];
		     int _min = p[0];
		     for (int i = 1; i < len;i++)
		     {
		        if (p[i]>_max)
		        {
		           _max = p[i];
		        }
		        if (p[i]<_min)
		        {
		           _min = p[i];
		       }
		     }
		     *pmax = _max;
		     *pmin = _min;
		  }
   2.效率问题：传值与传地址/传值和传引用reference
     例子：传值若变量体积很大，还要传值，还要拷贝到变量中去
	     对空间和时间的效率都有浪费，若只是传地址（int型）
		 永远只是4个字节，所以传递地址效率很高
		 #include <stdio.h>
		 void test1(int a)//传值：a是n的copy一个拷贝
		 {
		    a = 1;//修改a(变量)对n无影响，只是修改了n的副本
		 }
		 void test2(int* p)//传地址
		 {
		    ...
		 }
		 int main()
		 {
		    int n = 0;
		    test1(n);//传值：把n的值传给函数
		    test2(&n);//传地址：把n的地址传给函数
		    return 0;
		 }
（四）
   1.学会把变量的地址传递给函数
   2.学会把数组信息传递给函数，传数组时必须要长度信息
   3.用指针作为输出参数，返回多个值
     写返回多个返回值的函数两种方法：
	 1>使用指针：写在参数列表里
	 2>使用结构体：写在return语句里
   4.明白传值和传址的区别，以及效率上的差异
*/

















