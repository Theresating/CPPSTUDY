#include <stdio.h>
int main(){
	//一维数组初始化方法：不给初始值，给全初始值，部分初始化（前n个），全部为零，给全初始值但不给指定长度元素个数
	//char c[5] = { 90, 91 };//部分初始化，只能从前往后
	//char d[5] = { 0 };//全部为零
	//char m[5] = { 0, 0, 92, 93, 94 };
	//在项目内添加新项目，右击解决方案添加新项目，新建项目后在源文件下右击添加cpp文件，再点击新项目名称设为启动项目
    
	//char e[] = { 90, 91, 92, 93, 94 };
	//printf("%d \n", sizeof(e));//初始化元素长度

	//一维数组出现问题，需要二维
	//char arr[15] = { 91, 92, 93, 81, 82, 83, 71, 72, 73, 61, 62, 63, 51, 52, 53 };
	//int index = 3 * 1 + 2 = 5;//第二个同学的第三门成绩
	//printf("%d \n", arr[5]);//一维数组表示


	/*二维数组初始化，arr[m][n],m行n列,下标从零开始
	char arr[5][3] =
	{
		{ 91, 92, 93 },//每一行以逗号分隔
		{ 81, 82, 83 },
		{ 71, 72, 73 },
		{ 61, 62, 63 },
		{ 51, 52, 53 },

	};
	printf("%d \n", arr[1][2]);//二维数组访问
	//1.二维数组与一维数组本质一样，内存字节数一样；
	  2.只是用二维数组更方便一些，不用计算下标；
	  3.一维数组最重要，二维数组不常用
	*/




	return 0;
}



