/*
结构体的定义和基本应用

（一）引例：
    下面表格记录了多个联系人的信息：
	ID、名称、手机号 三个字段
    如何表示结构化信息？
    之前学到的知识可以表示为（注意选择适合的类型）：
	int id[4] = {201501,201502,201503,201504}
	char name[4][16]=
	{
	   "john","jennifer","anxin","unname"
	};
	char phone[4][16] =
	{//当作字符串来保存
	"186010111223","13810022334","18600100100","13111011011"
	};
	缺点：
	   1.信息比较松散不太直观
	   2.容易重名
	   3.数据存储不方便
	   如要查找一个联系人根据ID来查找，将联系人信息返回
	   这就很难写出来，因为字段太多了
	   int find（int id, char name[],char phone[]）
	   //或者写成char* name char* phone
	   //貌似可以使用输出参数name，phone来返回联系人的信息
	   但是字段多变，有100个字段呢？难道要用100个输出参数吗？
	   最好有一种新的数据类型，直接表示联系人所有属性
       contact person[4];//contact:一种新的类型
	   contact find（int id）;//直接返回一个contact对象
	   或int find(int id,contact* p);//使用一个输出参数
	   这样语法才是简洁直观！
（二）结构体：struct
    1.定义：
	  C/C++的几个主要基本类型：char、short、int、float
	  double以及数组指针，但他们不够：
	  将基本类型组合起来新形成了新的数据类型称为：
	  “自定义类型”
		   struct Contact
		   {
		     int id;
			 char name[16];
			 char phone[16];
		   };
	 这里定义一个新的类型Contact，它的地位和int、double相同
	（每个联系人所有字段都有，一个联系人缺一个字段都不是结构体）
	2.基本形式：
	  struct TypeName
	  {
	    //Members
	  }
	  2.1 struct：是关键字
	  2.2 TypeName：为新类型的名称
	  2.3 Members：则是一系列成员变量
	  2.4 例子：
		  #include<stdio.h>
		  #include <string.h>
		  struct Contact
		  {
		     int id;
		     char name[16];
		     char phone[16];
		  };
		  int main()
		  {
		     return 0;
		  }//把内部数据安id重新组合
	  2.5位置：
	     定义一定放在函数之外（就是个声明并不占内存）
		 在函数内初始化就可以
	3.命名规则：
	  3.1和变量名的规则一样：字母数字下划线组合
	  3.2成员变量可以普通的变量、数组定义
	4.例子：
	  struct Contact//结构体变量
	  {
	    int id;//成员变量
		char name[16];
		char phone[16];
	  };
	  定义一个新的类型Contact，成员变量有id,name,phone
	  注意：
	      成员变量的定义和普通变量的定义方式是一致的
	5.结构体使用：
	  5.1定义变量：
	     定义一个变量名，不给初始值
	     Contact c;
	  5.2定义数组：
	     Contact cs[4];//四个对象
	  5.3定义指针：
	     Contact* pc = &c;
	  5.4作为函数参数：
	     void test（Contact c）；
	  5.5作为返回值类型：
	     Contact make(int id);
	6.变量的定义和初始化：
	  6.1定义：
	     Contact a;//定义一个变量不给初始值
	  6.2初始化：
	     6.2.1用大括号将各个成员的初始值“按顺序”列出
		      （对比二维数组初始化）
		      Contact a = 
		     {//放在函数之外
                201501,//int初始化
			    "jennifer",//char数组初始化
			    "13810022334"//
             }；
		 6.2.2初始化时注意：
		   1）注意使用大括号，末尾要加“分号”结束
		   2）各字段的初始值要与该字段的类型匹配
		   3）各初始值以“逗号”分开
		   4）按顺序初始化（在类型里出现的顺序）
		 6.2.3和一维数组一样可以只初始化部分成员变量：
		     Contact a = {201501,"John"};//只初始化前两个成员
		 6.2.4也可以直接清零： 则该变量的每一位都是0
		     Contact a = {0};    
	  6.3在内存视图里：
	    1）各个成员紧密排列，相当于被组合在了一起
		2）一行定义1个变量：Contact a;
		3）一行定义2个变量：Contact a, b;
		4）把每个成员变量按顺序初始化：
		  （放在函数之外）
		   Contact a =
		   {
		      201501,//int初始化
		      "jennifer",//char数组初始化
		      "13810022334"//放在函数之外
		   };
	  6.4定义数组：
	    1）可以和基本类型一样，定义数组，表示并排列的多个对象
		   Contact cs[4];
		2）定义时初始化，最后一个元素、字段后面不需要加逗号
		Contact cs[4] =
		   {//四个Contact，每个成员变量初始化
		     {201501,"john","18601011223"},
		     {201502,"jennifer","13810022334"},
		     {201503,"anxi","18600100100"},
		     {201504,"unnamed","18601011223"}
		   };
    7.对成员的访问：
	  7.1使用点号访问其成员：
	     结构体变量名+“.”+成员变量名
	     Contact a;
	     a.id = 201501;
	     strcpy(a.name,"john");
	     strcpy(a.phone,"18601011223");
		 Contact a;
		 a.id = 201501;
		 strcpy_s(a.name, "john");
		 //把字符串拷贝到数组中去
		 strcpy_s(a.phone, "18601011223");
		 //用于访问成员变量
		 printf("%d \t%s \t%s \n",
		 a.id,
		 a.name,
		 a.phone);
		 //右值可以被打印
	     注：strcpy函数用于字符串的拷贝，需要<string.h>
	  7.2使用数组方式访问：
	     Contact cs[4];
		 cs[0].id = 201501;
		 strcpy(cs[0].name,"john");
		 strcpy(cs[0].phone,"18601011223")
	     注：
		   访问成员指的是访问“结构变量”的成员
		   Contact a;
		   printf("id: %d \n",Contact.id);//错！
		   Contact只是一个类型的名字而已，只要变量a才对应内存
(二)小结
   1.初步学习struct定义新类型
   2.新类型的变量定义方式和基本类型差不多相同
     （注意其初始化方式）
   3.成员的访问：使用点号加上成员的名称
*/















