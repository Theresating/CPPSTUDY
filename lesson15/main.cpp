#include<stdio.h>
int main(){
/*
关系表达式和条件表达式

（一）关系表达式
   1.真假概念：
     真：true，一个非零的整数值
	 假：false，整数零
   2.关系表达式：
     2.1定义：
	    表示两个值之间的大小关系运算符
	 2.2包括：
	    <  小于
		<= 小于等于
		>  大于
		>= 大于等于
		== 等于
		!= 不等于
	 2.3例题：
	    1>
		int a = 10;判断是否相等通常是对两个整数
		int b = 11;判断浮点型大小因为有效数字问题有时无法判断
		printf("%d \n", a > b);值为假0
		printf("%d", a + 1 == b);值为真1
		printf("%d", a + 1 != b);值为假0
		printf("%d", a + 1 >= b);值为假0
		2>
		double a = 8.0 / 3;
		printf("%d", a == 2.66667);
		返回值为零，无法确定相等只能指定范围
	 2.4注意：
	    1>在判断是否相等时通常是对两个整型进行比较
		2>两个浮点型比较时候要注意有时候无法比较（有效数字的问题）
   3.条件表达式：
     3.1形式：
	    条件表达式：expr1?expr2:expr3
		表达式可以嵌套，须加括号
	 3.2判断：
	    3.2.1当exprl为“真”时表达式值为expr2
	    3.2.2当exprl为“假”时表达式值为expr3
	 3.3例题：
	    1>判断大小（正数负数都是真，只有0是假）
		  printf("%d \n",0? 100:200);//200
		  printf("%d \n", 1? 100 : 200);//100
		  printf("%d \n", -2? 100 : 200);//100
		  int a = -2;
		  printf("%d \n", (a + 2) ? 100 : 200);//200
		  int a = 3;加括号可读性强
		  int b = 2;
		  printf("%d", (a == b)? 100 : 200);//200

		2>学生成绩大于等于60为真，小于60为假
		  int score = 60;
		  printf("%c \n", score >= 60 ? 'T' : 'F');//T

		  int score;
		  printf("please input a score : ");
		  scanf_s("%d", &score);
		  printf("result is : %c \n", (score >= 60) ? 'T' : 'F');

		3>学生成绩90以上为A，60以下为B，中间为C(嵌套太复杂后续有简便算法)
		  int score;
		  printf("please input a score:");
		  scanf_s("%d", &score);
		  char result = (score >= 90 ? 'A' : (score < 60 ? 'C' : 'B'));
		  printf("Result is: %c \n", result);
	 3.4注意：
	    1>通常在条件表达式外面加一个小括号以增加可读性
		2>嵌套时逐层判断就好
（二）小结
    1.初步了解“真”和“假”
	2.关系运算符的使用
	3.关系表达式的值（1或2）
	4.条件表达式的使用
	*/





















	










	return 0;
}