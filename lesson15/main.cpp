#include<stdio.h>
int main(){

	//真：一个非零的整数值，假：整数零
	//关系表达式：表示两个值之间的大小关系

	//int a = 10;判断是否相等通常是对两个整数
	//int b = 11;判断浮点型大小因为有效数字问题有时无法判断
	//printf("%d \n", a > b);值为假0
	//printf("%d", a + 1 == b);值为真1
	//printf("%d", a + 1 != b);值为假0
	//printf("%d", a + 1 >= b);值为假0

	//double a = 8.0 / 3;
	//printf("%d", a == 2.66667);
	//返回值为零，无法确定相等只能指定范围

	/*
	  条件表达式：expr1?expr2:expr3
	  1.当exprl为真时表达式值为expr2
	  2.当exprl为真时表达式值为expr3
	  表达式可以嵌套，须加括号
	*/

	/*
		printf("%d \n",0? 100:200);//200
		printf("%d \n", 1? 100 : 200);//100
		printf("%d \n", -2? 100 : 200);//100
		int a = -2;
		printf("%d \n", (a + 2) ? 100 : 200);//200

		int a = 3;
		int b = 2;
		printf("%d", (a == b)? 100 : 200);//200
	*/

	/*
	学生成绩大于等于60为真，小于60为假
	int score = 60;
	printf("%c \n", score >= 60 ? 'T' : 'F');//T

	int score;
	printf("please input a score : ");
	scanf_s("%d", &score);
	printf("result is : %c \n", (score >= 60) ? 'T' : 'F');
	*/

	/*学生成绩90以上为A，60以下为B，中间为C(嵌套太复杂后续有简便算法)
	int score;
	printf("please input a score:");
	scanf_s("%d", &score);
	char result = (score >= 90 ? 'A' : (score < 60 ? 'C' : 'B'));
    printf("Result is: %c \n", result);
	*/





















	










	return 0;
}