#include<stdio.h>
int main(){

	//逻辑表达式：与(&&)或(||)非(!:)


	/*与（双目运算）
	expr1&&expr2均为真时表达式才为真
	&&前的表达式错误，则不计算&&之后的表达式（计算省略）
	printf("%d \n", 1 && 0);
	printf("%d \n", 2 && -1);
	int a = 11;
	int b = 12;
	int c = 0;
	printf("%d \n", a > b && (c = 4));
	printf("c: %d \n", c);c:0右式还未计算
	*/

	/*或（双目运算）
	expr1||expr2两者任一为真则表达式为真
	&&前的表达式正确，则不计算&&之后的表达式（计算省略）
	printf("%d \n", 1 || 0);//1
	printf("%d \n", 0 || 0);//0

	int a = 13;
	int b = 12;
	int c = 0;
	printf("%d \n", a > b || (c = 4));
	printf("%d \n", c);//c：0右式还未计算
	*/

    /* 非（单目运算）
	如果expr为真 ！expr为假 如果expr为假 ！expr为真
	printf("%d \n", !18);//0
	*/

	/*逗号表达式
	expr1,expr2,expr3 若干表达式以逗号相连，取最后一个表达式的值
	int a = (12, !3, a = 4);
	printf("%d \n", a);
	*/







































































































	return 0;

}