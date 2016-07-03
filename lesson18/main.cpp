#include<stdio.h>
int main(){
	/*
	位操作符
	按位表示：一个字节由八个位组成，
	最短整型unsigned char：最左侧为高位bit7，最右侧为低位bit0
	unsigned short 16个位（2字节）
	unsigned int 32个位（4字节）

	1.按位取反

	10110101(181)->01001010(74)
	unsigned char m = 181;
	unsigned char n = ~m;
	printf("n:%u \n",n);//74
	printf("n:%u \n",(unsigned char) ~181);//强制转换得74

	2.移位操作
	>>1表示所有位右(左)移一位，左（右）侧填充0
	>>8表示所有位右（左）移一位，左（右）侧填充0，八位全移走剩下填充零
	printf("n: %u \n",(unsigned char)(0xA7 >> 8));// n:0

	3.按位与,或，异或
	a&b:a与b同时为0时结果为1，其余为0
	a|b:a=1或b=1时结果为1，其余为0
	a^b:a,b 不同时候为1，相同时候为0（少用）

	4.按位赋值
	unsigned char m = 0xA7;/// (字幕+shift为大写字母)
	m >>= 3;//m = m >> 3;same
	printf("n: %u \n",(unsigned char)(0xA7&0xE7));//n:167

	char buf[] = "A2";//A的权重为16，buf[0]为10,0xA
	unsigned int n1 = (buf[0] -'A') + 10;//字符串转换成数字，buf[0]为大写字母A，16十进制转换为10（16进制）
	unsigned int n2 = (buf[1] - '0');//返回值为2
	unsigned int result = n1 * 16 +n2;//乘以权重

	移位时最好使用unsigned类型

	int n1 = 10;
	int n2 = 2;
	int result = (n1 >> 4 ) + n2; //左移四位相当于乘以16，移位是更划算的算法，乘除比较耗cpu

	单bit操作

	10110101（181假设对bit5进行操作：bit0 bit1 bit2...bit7）

	写操作：设置某位：置1
	flag |=(1u<<5);//bit5
	清除某位：清0（先移位再取反）
	flag &= ~(1u>>5);
	清零：
	unsigned char a = 181;//10110101->00100000(1u<<5)->11011111(~(1u<<5))
	a &= ~(1u << 5);//1u表示1是unsigned int类型

	读操作：判断某位是否为1：
	flag &(1u<<5)真或假


	*/





	




























	return 0;

}