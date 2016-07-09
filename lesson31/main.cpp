/*
函数的重载

（一）原因：
    C语言不允许函数重名，给程序员带来不小的麻烦
（二）需求：
   1.写一个函数求2数之中的最大值
     double find_max(double a ,double b)
   2.写一个函数求三数之间的最大值
     find_max是个好名字可惜已经被占用
     于是double find_max_3(double a,double b,double c)
（三）例子：
   double find_max(double a, double b, double c)
   {//把文件名改成.C此程序报错
       return 0;
   }
   double find_max(double a, double b)
   {
      return 0;
   }
   int main()
   {//文件名变成cpp则不会报错（可以重名）
      return 0;
   }
   改用c++：
     1.c++允许文件重名，也叫文件名重载（overload）
     2.c++允许两个函数名相同，单参数列表不同
	   （此语法称为函数名重载）
（四）参数列表相同满足：参数名可以不同
     1.参数个数相同
	 2.参数类型相同















*/
