
/*
while语句

（一）while语法形式
	1.定义：
      while也用于实现循环，本质与for相似
	2.形式：
	  while（expr）
	    statement
	3.步骤：
	  3.1判断：expr为假时，退出循环；否则执行2
	  2.2执行语句statement（循环体）
	  3.3回到2进行下一轮
    4.例子：
	   和for没有本质区别，以下代码实现了for功能
	   char buf[100];
	   int i = 0 ;
	   while (i<100)
	   {
	      buf[i] = i + 1;
	      i++;
	   }
	   char buf[100];

	   int i = 0;
	   while (1)
	   {
	      if (i>=100)
	     {
	        break;//终止循环
	     }
	   buf[i] = i + 1;
	   i++;
	   }
   5.区别：
	   与for没有区别
	   同样的例子用while实现
   6.例题：
     例1：
	   求小于100的奇数的平方和：
	   int sum = 0;
	   int i = 1;
	   while (i < 100)//此处加断点（F9），F5，F10（按一次向下执行一步）
	   {
	     sum += i*i;//此处可以看到局部变量一直在变1->3->5...
	     i += 2;
	   }
	 例2：
	   让用户从控制台输入一系列正整数，当用户输入为0时表示结束，
	   存储这些数并求他们的总和。要点：不知道用户会输入多少个数
	   int buf[100];//buffer
	   int count = 0;//计数
	   while (1)
	   {
	      int n ;
	      printf("please input:");
	      scanf_s("%d", &n);
	      if (n<=0)
	      {
	          break;
	      }
	   buf[count] = n;
	   count += 1;
	   }
	   printf("total: %d \n", count);
	   int sum = 0;
	   for (int i = 0; i<count; i++)
	   {
	       sum += buf[i];//数组元素之和，而不是加n,因为n已经存再数组中
	   }
	   printf("result : %d \n", sum);
    例3：
	   令用户输入一个整数（十进制），判断他有几位
	   int n = 3456;//scanf最后加便于调试
	   scanf_s("%d", &n);//scanf后面不加换行符
	   int count = 0;
	   while (n != 0)
	   {
	      n /= 10;
	      count++;
	      //调试->窗口->内存、局部变量、自动窗口
	      //345,34,3,0
	   }
	   printf("count:%d \n", count);
	   注：调试时可以不用输入一步，直接给值进行调试，调试速度更快省时省力


（二）do while 语句
	1.定义：
	  本质和while、for完全相同
	2.形式：
	    do
		{
		    statement
		}while(expr);
	3.步骤：
	    3.1执行do{}里面的循环体
		3.2判断expr是否为真，为真是继续下一轮，为假时继续
	4.特点：循环体至少执行一次
    5.例子：
	    让用户输入一个介于0-100的整数，返回它的平方值，
		如果用户输入的数在此区间之外，令其重新输入
	    分析：
	      至少执行一次，如果一次正确则结束，否则反复输入
		  int n = 0;
		  do
		  {
		     printf("please input:");
		     scanf_s("%d", &n);
		  } while (n<0||n>100);
		  printf("%d \n", n*n);

（三）小结
    1.while、for、do while本质上完全相同
    2.形式略有区别常用while和for
*/



	
	


















	return 0;
}