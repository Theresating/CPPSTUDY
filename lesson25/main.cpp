
/*
函数

（一）函数的概念
    1.概念：
	  函数是具有能够完成一定功能的盒子，
	  给它一些输入数据它就返回一些输出数据
    2.例题：
	  例如一个函数求和
	  输入：两个数
	  输出：两数之和
	  写成代码：
	      int sum (int a , int b)
		  {
		     int result = a + b;
			 return result;
		  }
      使用函数：
	      int main()
		  {
              int ret = sum(10,12);
			  printf("result:%d \n",result);
		      return 0;
		  }
   3.函数形式：
	 3.1形式：
	    return_type name (参数argument)
		{
		      body；
		}
	 3.2其中：
	    name：函数名，字母、数字、下划线的组合
		argument：参数，可以带n个参数，每个参数以逗号分开
		return_type：返回值类型，一个人函数可以返回一个数值
		body：函数体，也就是函数的具体实现
	  例1：
	    功能：求圆的面积
		参数：r
		返回值：面积的值
		double area （double r）
	     {
		    double ret = 3.14*r*r;
			return ret;
		 }
		调用方法：
	     double ret = area(1.2);
		 函数变量是右值，可以不用一个变量去保存
		代码：
		 double area (double r)
		 {
		 double ret = 3.14*r*r;
		 return ret;
		 }
		 #include <stdio.h>
		 int main()
		 {
		 double ret = area(1.2);
		 printf("ret:%.3f", area(1.2));//ret=area(1.2)
		 return 0;
		 }
	  例2：
	    功能：求圆柱体体积
		参数：r：半径 h：高
		返回值：体积的值
		调用方法：
		    double ret = volumn(1.2,5.5);
			其中1.2为半径 5.5为高
		代码：
		double volumn(double r, double h)
		{
		double ret = 3.14*r*r*h;
		return ret;
		}
		#include<stdio.h>
		int main()
		{
		double ret = volumn(1.2, 5.5);
		printf("ret:%.3f \n", ret);
		return 0;
		}

(二)函数调用
   1.定义：函数的使用称为函数调用
   2.三要素：
		    1）函数名
			2）参数个数
			3）返回值类型
   3.注意：
		    1）不需要知道它的内部实现
		    2）调用时把函数的参数值传给它，称为参数传递
		       如：double ret = volumn（1.2,5.5）
			3）小括号的就是参数，该语句的作用是把一系列参数值
			   按顺序传递给函数，并得到函数的返回值
   4.提示：
	        *1.参数的个数要匹配：需要多少个参数就传递多少个参数
			*2.参数的顺序要匹配：按照顺序传递
			 3.参数的类型要匹配：需要什么类型传递什么类型
			  （也可以传递如需要double型传来int型）
			 4.返回值的类型要匹配
	   例1：
	       求两数平方和(调用方式是函数名（参数1，参数2...）)
		   double square(double a, double b)
		   {
		   double ret = a*a + b*b;
		   return ret;
		   }
		   #include <stdio.h>
		   int main()
		   {
		   printf("ret:%.3f \n", square(1, 2));
		   return 0;
		   }
		例2：
		   判断大小写字母：大写返回1，小写返回-1，不是字母返回0
		   int test(char ch)
		   {
		   int ret = 0;
		   if (ch >='A' && ch <='Z')
		   {
		   ret = 1;
		   }
		   else if (ch >='a'&& ch <='z')
		   {
		   ret = -1;
		   }
		   else
		   {
		   ret = 0;
		   }
		   return ret;
		   }
		   #include <stdio.h>
		   int main()
		   {
		   int ret = test('+');
		   printf("result:%d \n", ret);
		   //想判断什么字符在‘’内改
		   return 0;
		   }
（三）小结
	 1.起一个名字
     2.确定输入信息，定义参数列表
	 3.确定返回值类型
	 4.在函数内写代码计算出结果，用return返回
（四）作业：
	     1.写一个函数：判断字符ch，若ch为空格或TAB则返回1，否则返回0
		            1
					int test(char ch)
					{
					  int ret = 0;
					  if (ch==' '||ch=='\t')
					   {
					      ret = 1;
					   }
					  else
					   {
					      ret = 0;
					   }
					  return ret;
					}

					#include <stdio.h>
					int main()
					{
					   int ret = 0;
					   ret = test('\t');
					   printf("result: %d \n", ret);
					   return 0;
					}

		
		 2.写一个函数：输入三个整数ABC，设为三角形三条边，
		             当其实直角三角形时返回1，否则0
					 解法一：
					 int triangle(int a, int b, int c)
					 {
					    int ret = 0;
					    if (a*a+b*b==c*c)
					     {
					        ret = 1;
					     }
					    else
					     {
					        ret = 0;
					     }
					    return ret;
					 }
	
					 #include <stdio.h>
					 int main()
					 {
					    int ret = 0;
					    ret = triangle(3, 4, 5);
					    printf("result:%d \n ", ret);
					    return 0;
					 }
					 解法二：
					 int test（int a,int b,int c）
					 {
					    int aa = a*a;
						int bb = b*b;
						int cc = c*c;
						int ret 0 ;
						if(aa+bb==cc||aa+cc==bb||bb+cc==aa)
					    {
						   ret = 1;
						}
					  return ret;
					 }
 */


































