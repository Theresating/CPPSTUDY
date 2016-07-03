#include <stdio.h>
int main()
{
	/*字符的的输出(asc2表范围比较小 char 型足够)
	char ch = 65;
	printf("%c \n", 65);
	*/

	/*字符的写法
	char ch1 = 'A';//三种写法同义，字面常量
	char ch2 = 65;//三种写法同义,因此不用记忆asc表
	char ch3 = 0x41;//三种写法同义
	printf("ch= %d \n", 'A');//字符常量表示ASC码加单引号
	*/

	/*字符的打印和求码
	printf("%c %c \n", 'A', 65);//打印字符A
	char ch = 'B';//看B的码数值
	printf("%d \n", ch);
	*/

	/*打印空格
	printf("%c%c%c", '1',' ', '2');
	*/

	/*打印加号（加单引号）
	printf("%c%c%c",'1','+','2');
	*/

	//字符分四种：字母，数字，标点，控制字符

	/*转义字符:'\n':换行 '\t':回车tap '\"':双引号 '\\':反斜杠
	printf("%c%c%c%c",'1','\n','2','\n');
	char ch = '\n';
	*/
















	return 0;
}