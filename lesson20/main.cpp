#include<stdio.h>
int main(){
	/*
	switch 语句
	switch（expr）
	{
	case option-1：
	     break；
	case option-2：
	     break；
		 ...
	default:
	     break;
	}
	expr:表达式，其值必须是整型
	option：常量，其值必须是整型
	default：默认标签
	case：不是语句是标签，因为不是以“；”结束
	例子：
	switch (ch)
	{
	int ch = 0;
	case 1:
	printf("go to office\n");
	break;
	case 2:
	printf("stay at home\n");
	break;
	default:
	printf("to do nothing\n");
	break;
	}
	规则：
	1.检查有无匹配的case：如果有，则跳到该case处执行（注意形式上直接跳过去）
	2.如果有匹配的case，则寻找default标签，即跳到default处执行。
	3.如果既没有匹配case也没有default，则直接跳过switch语句。
	4.跳到指定位置后，一直往下执行。直到switch大括号结束，或遇break提前结束。
	5.default标签不一定放在最后面，习惯上放在最后面而已，与case地位一样是标签。
	6.不加break就不是分枝处理了，不加break全部执行，case1,2，default
	7.case标签是可以重叠的，即与重叠标签下执行同一语句（case只是标签）
	8.switch和case必须是整型值（因为小数无法精确比较）
	9.case后面必须是常量，不可以是变量

	与if else的比较：
	1.if语句的功能完全覆盖了switch语句，所以switch语句是冗余的
	（可以认为switchcase内部就是ifelse实现的）
	2.switch只适用于“有限个选项”的应用场景不适用于区间,也不适用选项太多的场景
	（如 x>1 && x<5）
	3.if语句在形式上市对每个else if 逐个比较，switch case 的形式是不经过比较
	 而是直接跳转（当然实质上内部还是要比较的）
	
	小结：
	1.当自己写代码时规规矩矩写就好，case放前面，default放后面，全部加break语句
	不太可能出错.
	2.当应付考试时，仔细听几页PPT讲解，搞清楚运行过程
	*/
	























	return 0;
}