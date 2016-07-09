/*
结构体的更多用法

（一）结构体的更多用法
  1.赋值：
    结构体可以互相赋值
	Contact a = {20140003,"anxin",18600100100}
	Contact b = a;//每个字节都相同
	赋值结果：
	原理很复杂，目前来说我们知道结构体赋值的结果是
	每个字节都相等（观察内存）
  2.指针：
    Contact a = {20140003,"anxin","18600100100"}
	Contact* p = &a;
	结构体指针使用箭头->够p访问各成员变量
	printf("id: %d,name: %s \n",p->id,p->name);
	也可以写作：
	(*P).id,但一般大家都不会这么写（地址对应内存的值）
  3.作为函数参数： 和基本类型一样，可以作为函数参数
	3.1传值:用点号
	   void test(Contact a )
	   {
	       printf("id:%d,name:%s \n",a.id,a.name);
	   }
	3.2传地址:用箭头
	   void test(Contact* p)
	   {
	       printf("id: %d,name: %s \n",p->id,p->name);
	   }
 *4.作为函数返回值：可以作为函数的返回值
    4.1像基本类型一样直接return:
	   Contact make(int id)
	   {
	     Contact a;
	     a.id = id;
	     return a;  
	   }
	4.2通常我们写成:
	   void make(int id,Contact* a)
	   {
	      a->id = id;
	   }原因今后再说
	4.3完整:
	   Contact make(int id)
	   {
	      Contact a;
	      a.id = id;
	      return a;
	   }
	   int main()
	   {
          Contact a = { 2014003, "anxin", "18601011223" };
	      Contact b = a;//局部变量相同，内存地址相同
	      Contact* p = &a;
	      printf("id: %d,name: %s \n", p->id, p->name);
	      Contact ccc = make(1234);//id有值，name和phone随机值
	      return 0;
	    }
  5.匿名struct：只定义变量，不定义其类型（只想定义一个变量，因而不需要类型）
    该struct没有命名，编译器会内部分配一个名字，只能声明一个变量
	  定义一个变量info（默认名字）：
	  struct
	  {
	     char guid[128];
	     int user_id;
	  }info;
	   void main()
	  {
	     info.user_id = 98780987;
	     strcpy(info.guid,
	          "{09f140d5-af72-44ba-a763-c861304b46f8}");
	  }
（二）注意事项
  1.struct不支持其他运算：
    结构体默认只支持=，不支持其他运算：加减乘除
	例如：
	Contact a,b;//加起来也没有意义
	Contact c = a + b;//编译错误不支持加法
	（24章讲如何让结构体支持各种运算）
  2.杜绝非正规写法：
	2.1可以把结构体的类型定义写在函数内部，语法上允许，但不正规不建议这么写，
	   最终目的是要重用之所以要定义一个类型，这样定义的类型无法重用，
	   就只能在函数体里面用，正常写法放外面，无法写在头文件里面
	   int main()
	   {
	   struct Contact
	   {
	   int id;
	   char name[16];
	   char phone[16];
	   };
	   Contact a = {20140003,"anxin","18601011223"};
	   return 0;
	   }
    2.2另一种非正规写法，直接把变量名写在后面，18章会说，
	   类型定义一般是放在头文件里的，没这么干得
	   struct Contact
	   {
	      int id;
		  char name[16];
		  char phone[16];

	   }a,b;语法上支持但不正规
	   
  3.C++与C的差异：
    在struct语法上，C++与C有略微差别
	简要介绍C的用法：
	  struct Contact
	  {
	     int id;
		 char name[16];
		 char phone[16];
	  };
	  struct Contact a;
	  C语言定义变量的时候也要加关键词struct，具体另外开一讲
	  <struct是一个关键字并不是一个类型名>
*/










