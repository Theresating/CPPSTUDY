/*
结构体的深入认识

（一）结构体的大小：对齐问题
  1.结构体大小跟成员有关，但有时会比各成员之和要大
    struct Object
    {
      char a;//1字节对齐，地址可以放在奇数地址
	  int b;//4字节对齐，地址必须放在4字节对齐
    };
    printf("%d \n",sizeof(Object));//不是4+1，而是8
  2.为了实现对齐，编译器会对结构体进行填充padding
    注：C/C++标准没有规定一定要对齐，这是编译器自己行为
  3.通常的对齐规则为：
    3.1 short：其内存地址必须是2字节（地址能被2整除）
	3.2 int：4字节对齐（地址只能被4整除）
  4.为什么要对齐：
    因为CPU的指令要求，只能在对齐的地址上存取，属于指令集的
	语法要求，不对齐就没办法存取（并不是所有的CPU都有此限制）
	对其是为了让变量在内存中处在一个比较齐整的位置上
  5.如何取消对齐规则：
    不同的编译器有不同的方法，这不在C++标准中定义
	但是永远不要这样做！
	结构体对齐是十分必要的机制，没有任何理由要取消对齐
	struct Object
	{
	   char a;//1字节
	   char i;
	   int b;//4字节
	};
	int main()
	{
	   Object obj;
	   obj.a = 0x0A;
	   obj.b = 0x11223344;
	   obj.i = 0x0B;
	   printf("a:%p i:%p b:%p\n", &obj.a,&obj.i, &obj.b);
	   int n = sizeof(obj);//内存：0a,0b,cc,cc(此为填充)
	   return 0;//大小是8
	}
（二）结构体变量名作为子成员
  1.struct的成员的类型可以使另外一种struct类型
    struct Score
	{
	   float Chinese;
	   float english;
	   float math;
	};
	struct Student
	{
	   int id;
	   char name[16];
	   Score score;//此成员变量类型是struct   
	}
	1.1注意前后顺序：
	   把score类型的定义放在Student的前面
	1.2在内存视图上仍然很简单，各成员在内存里依次排列
	   少许padding
	1.3访问成员的子成员：按层次顺序连续使用点号   
	   Student s;
	   s.score.english = 89.5;
  2.另一种形式：
    使用指针，而不是直接包含（应用场景相对复杂）
    struct Student
	{
	   int id;
	   char name[16];
	   Score* ps;
	   //使用指针，而不是直接包含
	}
	Score _score = {88.0,90.0,98.0};
	Student _stu;
	_stu.ps = &score;
（三）结构体作为参数：再论传值与传址的效率问题
  1.结构体的体积较大，占得内存空间较多，往往不使用传值方式
    void test(Contact who)
	{
	  printf("id: %d, name: %s \n",who.id,who.name);
	}
	两大问题：
	1）空间因素：使用了更多的内存空间
	2）时间因素：将拷贝到参变量who，要花费较多的CPU
  2.结构体作为函数的参数时（数据往往很大），总是使用传地址的方式
    如果只是输入参数，则加上const修饰
	void test（const Contact* who）
	{//只是输入参数不用修改就设为const
	   printf("id:%d,name:%s \n",who->id,who->name);
	}
	struct Contact
	{
	   int id;
	   char name[16];
	   char phone[16];
	};
	void test(Contact who)
	{//Contact who = a;两个变量：a占36个字节，who占36个字节
	   printf("id: %d, name: %s \n", who.id, who.name);
	}//使用了更多的内存
	void test2(const Contact* who)
	{
	   printf("id:%d,name:%s \n", who->id, who->name);
	}
	int main()
	{
	   Contact a = { 2014003, "anxin", "18600100100" };
	   test(a);//相当于把a的值传给函数test
	   test2(&a);//只传递了地址4个字节，直接访问内存
	   return 0;
	}
（三）小结
  1.结构体的大小：对齐问题
  2.结构体变量作为变量成员
  3.结构体作为参数：再论传值与传地址










*/












