/*
if语句

（一）语句
	1.定义：
	  以分号结束的一行，规范写法是一句一行，但也可把两个语句写在一行（可读性会差）  
	2.复合语句：
	  用{}组成一个符合语句，在简单语句出现的地方都可以使用复合语句
（二）if语句
	1.语句形式1（复合形式）：
	  1.1形式：
	  if（expr）
	    statement1
      else
	    statement2
      1.2规则：
	       如果expr为真（非0）则执行语句statement1
	       否则执行语句statement2
		   
	  1.3例子：
	       60以上通过考试，表达式值为非零
	       int x = 61;
		   if (1)
		   printf("pass ! \n");
		   else
		   printf("fail ! \n");
	       60以上通过考试，表达式值为非零，输出pass 并喝啤酒庆祝
	       int x = 61;
	       if (x>=60)
	       {
	           printf("pass ! \n");
	           printf("bear ! \n");//多个语句合起来
	        }
	        else
	           printf("fail ! \n");

   2.语句形式2(最简形式)：
	 2.1形式：
	     if（expr）
	         statement1；
     2.2规则：
	       如果expr为真（非零），则执行statement1，没有否则（最简形式）
		   if后面最好加大括号，不然if只认紧跟if的第一个语句，再后的语句不属于if
		   所以无论接多少语句if后面一定接大括号，增强可读性
   3.语句形式3：
	 3.1形式：
	     if（expr）
	        statement1
         else if（expr2）
	        statement2
         else if...
	     else if...
	     else(if)可加可不加if
	        statement last
     3.2规则：
	       如果expr为真（非0），则执行语句statement1（没有否则）
     3.3例子：
	    3.3.1多段比较，小于60打印C，大于60小于80打印B，大于80打印A
		     int x = 87;
		     if (x < 60)
		     {
		        printf("c \n");
		     }
		     else if (x < 80)
		     {
		        printf("B \n");
		     }
		     else
		     printf("A \n");
			 注：1>画蛇添足else if (x>=60 && x < 80)
			    2>能运行到此处说明已经大于60了

        3.3.2让用户输入0到6任意数字，0表示周日，1表示周一...6表示周六
	         输入0或者6时，打印 at home，输入1到5时，打印 at office
		     输入非法字符或者无效字符时，打印 bad input.
			 (初始值为-1，可以判断n有效与否)
			 int n = -1;
			 //界面输入
			 printf("please input a number: \n");
			 scanf_s("%d", &n);//%d后面不要有空格
			 //业务逻辑
			 if (n == 6 || n == 0)
			 {
			 printf("at home \n");
			 }
			 else if (n >= 1 && n <= 5)
			 {
			 printf("at offirce \n");
			 }
			 else
			 {
			 printf("bad input \n");
			 }		  
（三）注意：
	1.积极使用大括号，if后要接多条语句一定加大括号
    2.注意else的意思，不要重复判断
    3.1<x<5是数学语言不是代码语言
    4.如果三个语句都是if，那不算画蛇添足
*/ 
