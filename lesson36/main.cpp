/*
const 指针

1.定义：
     在普通指针类型的前面，加上const修饰，
     例如：const int* p
2.区别：
     2.1不加const
	    int a = 10;
	    int* p = &a;
	    *p = 11;//可写
	    int b = *p;//可读
	 2.2加上const（只读：read only）
	    int a = 10;
		const int* p = &a;
		*p = 11;//错误不可写
		int b = *P;//可读
3.作用：
     3.1const的作用是封禁：
	   （限制）星号操作里写的内存功能，此块内存只能读不能写
	 3.2const用于限定函数的参数：（不能修改const内存，不能赋值）
	    int avg(const int* p int len)
		{
		}
	 3.3用于显示地指定：
	    该函数是输入参数，在函数里只是读取这个内存、而不会修改这个内存的值
	 3.4注：
	    当你不需要修改内存时，在指针前面加const修饰，避免一不小心的错误发生
4.注意事项：
     4.1const只是封禁星号操作，不允许写内存，但对于普通的指针加减是没关系的
	 4.2const用于限定函数的参数
	    int avg(const int* p,int len)
		{
		   for(int i = 0;i<len;i++)
		   {
		      printf("%d \n",*p);//可以读
		      p = p + 1;//没问题
		   }
		}
5.一个不常用的语法：
     一下知识点仅在考试中会遇到，实际工程中不会用到
	 （平时熟悉使用 const int*就好）
	 int a ;
	 int b ;
	 int* const p = &a;//这是另一种语法
	 p = &b;//语法错误：p值不能修改
6.小结
   6.1const指针表示内存是只读的
   6.2常用语修饰函数的参数，当被const修饰，表示该参数仅用于输入
      int agv(const int* arr,int len);










*/