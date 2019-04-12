
Java语言区别于其他计算机语言最大的一个特点：平台无关性，因为有Java虚拟机（JVM），如果在其他系统能运行代码，必须要有 .class 文件，因为 .class 文件可以被JVM识别。

Java对于标识符的命名规则
	（1）有数字、字母、下划线（英文状态下的_）和美元符号（$）组成
	（2）不能以数字开头
	（3）区分大小写（大小写敏感）
	（4）长度没有限度（建议不要超过15个字符）
	（5）不能是关键字和保留字（goto const）

	
注意：Java语言的整型常量值的数据类型默认为int型，当要声明long类型数值
			时需要在该值结尾处加"l"或"L"(建议大写) 如 long a = 45L;
			（1）long类型的数值需要在数值结尾处添加"L"，否则该值的数据类型为int类型
			（2）float类型的数值结尾需要在数值结尾添加"F"或"f"，否则该值是double类型
	
			
char类型
	（1）在C语言中是一个字节，在java中是两个字节，取值范围0~65535
	（2）char类型的数值需要使用单引号''引起来
	（3）char表示的是单个字符，不是字符串
	（4）有三种char变量定义：1、char c1 = 'A'; 2、char c2 = '\u0061';//Unicode编码形式也就是十六进制编码形式 3、cahr c3 = 97; //ascii值形式
-----------------------------------------------------------------------------------------------------------------------------	

判断一个数值的奇偶性有两个方法：
	（1）能否被二整除
	（2）先转换成二进制，然后查看二进制数最一位是1还是0，1则是奇数 0则是偶数
-----------------------------------------------------------------------------------------------------------------------------	
	
转义字符：
	（1）'\n'  换行符
	（2）'\t'	 水平制表符
	（3）'\r'  回车符
	（4）'\\'	 斜杠
	（5）'\"'  双引号
	（6）'\''  单引号
-----------------------------------------------------------------------------------------------------------------------------	
	
导入util包：import java.util.类名  或 import java.util.* 表示导入全部包  * 表示所有  （Scanner类在util包里）
-----------------------------------------------------------------------------------------------------------------------------	

Scanner类：Scanner scan = new Scanner(System.in);
	（1）int a = scan.nextInt();        //输入int类型数值
	（2）long b = scan.nextLong();      //输入long类型数值
	（3）double c = scan.nextDouble();	//输入double类型数值
	（4）String d = scan.next();				//输入String类型数值
-----------------------------------------------------------------------------------------------------------------------------	

switch语句：switch(byte/short/int/char/String类型数值) --> case 后面的值要与括号内的类型相同
-----------------------------------------------------------------------------------------------------------------------------	

方法调用：
	（1）相同类中：在同一个类中进行方法调用分为 静态方法调用 普通方法调用	
			1）静态方法调用方式：直接调用 
			2）普通方法调用方式：(创建对象调用普通方法)本类类名 对象 = new 类名(); ---> 对象.普通方法名(形参列表);

	（2）不同类中：
			1）普通方法调用方式：(创建对象调用普通方法)本类类名 对象 = new 类名(); ---> 对象.普通方法名(形参列表);
			2）静态方法调用方式：类名.静态方法名(形参);
-----------------------------------------------------------------------------------------------------------------------------		
			
方法重载规则：
	（1）在同一个类中
	（2）方法名相同
	（3）参数列表不同   （参数的类型、个数、顺序其中一个成立即可）

方法重载注意事项：
	（1）方法重载与方法名的参数名称无关
	（2）方法重载与方法中的返回值类型无关
	（3）方法重载与访问修饰符无关
-----------------------------------------------------------------------------------------------------------------------------	
	
访问修饰符：
	（1）public：共有的、公共的，在同一个项目下所有类都可以访问。
							 使用方法：通常情况下，类、普通方法、构造方法、(需要给外部调用的)都是用public关键字修饰
	（2）protected：受保护的，在同一个类中、同一个包中、子类都可以访问。
							 		使用方法：一般情况下，用于子类访问父类的内容（普通方法、构造方法、属性）
	（3）private：私有的，只有本类可以访问。   封装
-----------------------------------------------------------------------------------------------------------------------------	
	
Java三大特性：封装性、继承性、多态
-----------------------------------------------------------------------------------------------------------------------------		
	
Java	特性之封装：封装是指隐藏对象的属性和实现细节，只对外提供一个公共访问方式
	封装原则：
		1）将不需要对外提供的内容都隐藏起来（使用private）
		2）把属性都隐藏起来，提供公共方法给外部间接访问	
-----------------------------------------------------------------------------------------------------------------------------		
			
构造方法：	无参构造（每个类中都会有，默认存在）   有参构造（需要给对象属性进行初始化）
	特点：1）构造方法名与类名相同
				2）没有定义返回值类型		
	-----------------------------------------------------------------------------------------------------------------------------	
	
成员变量与局部变量
	成员变量：在类中与方法处于同一级别的变量
	局部变量：在方法内定义的变量、在方法中定义的参数
	区别：
	（1）位置不同；	在上方
	（2）作用域不同：成员变量作用于整个类中，局部变量作用于方法中
	（3）初始值不同：成员变量有初始值，局部变量没有初始值
	（4）奇葩考点：成员变量与局部变量同名的情况    （就近原则）
	（5）存储地方不同：成员变量在堆中，局部变量在栈中
-----------------------------------------------------------------------------------------------------------------------------	

this 用法
	（1）this 访问本类的属性  		this.本类属性名;
	（2）this 访问本类的方法 			this.本类方法名;
	（3）this 访问本类的构造方法	this.(); (无参构造调用方式)  this.(形参); (有参构造调用方式)
	 使用this时的注意事项：
	（1）使用this关键字，与属性或方法的访问修饰符无关
	（2）在静态方法中不能使用this，否则报错
-----------------------------------------------------------------------------------------------------------------------------	
			
static 静态用法： 静态代码块 静态变量 静态方法 静态导入
	（1）静态代码块（通常写在类的开始处），语法格式：static{ 代码... }
			 注意事项：
			 		1）执行时机：静态代码块所在的那个类加载时，就开始执行，且（不论创建多少对象）只执行一次
			 		2）注意：如果静态代码块所在类不需要在其他类中的main函数中创建对象使静态代码块所在类产生加载时，此类必须有main函数
			 						 如果在其他类中的main函数中创建静态代码块所在类的对象时，静态代码块所在类可以不需要main函数
	
	（2）静态变量   语法格式：static 数据类型 变量名;
			 注意事项：
			 		1）静态成员变量，所有对象共享一份，非静态成员变量，每个对象独享一份
			 		2）调用时可以用类名调用 类名.成员变量，也可以创建对象用对象调用 对象.成员变量名
	
	（3）静态方法  语法格式：static 返回值类型 方法名(参数列表){ 方法体... }
			 注意事项：
			 		1）静态方法可以通过对象名或者类名来调用，但建议用类名来调用
			 		2）静态方法内不可以直接使用非静态成员变量
			 		3）非静态方法中可以使用静态方法
			 		4）静态方法中不能使用this、super
			 		
	（4）静态导入：导入静态包，可以直接省略类的调用，直接使用方法名
								 语法格式:import static 包名; eg: import static java.lang.System.out;  或  import static java.lang.System.*;
								 																	import static java.lang.Math.max;  或  import static java.lang.Math.*; 
			 																			main: out.println("最大值："+max(100,50));
-----------------------------------------------------------------------------------------------------------------------------	
			 																				
创建对象内存分析：创建单个对象、创建多个对象、传递基本数据类型、传递引用书记处类型（具体存储步骤看java文档）
	 内存：栈、堆、方法区、计数器寄存器（多线程）、本地方法区
	（1）栈：存放局部变量（方法参数，方法内定义的变量），注意：main()方法较特殊，直接入栈
	（2）堆：存放new出来的对象（属性[成员变量]）
	（3）方法区：存放字节码文件(.class文件)
	 简单的记忆方法：“基本数据类型占据一块内存（栈内存），因为基本数据类型只在栈内存中活跃”
		 							 “引用数据类型占据两块内存（栈内存、堆内存）”
	 注意：程序运行完后将由GC(垃圾回收器)清除内存							
-----------------------------------------------------------------------------------------------------------------------------	
	
Jar包的制作及使用
	 Jar包制作：在制作jar包的.java文件上右击，再点击Export，进去后点击java文件下的JAR file然后Next，之后什么都不改，只改写jar包路径。
	 Jar包使用：在将要使用jar包的项目上右击，找到New里面的Folder点击，改写Folder name为libs，然后复制制作的jar包到libs中，然后右击复制后的jar包点击Build Path中的Add to Build Path。
	 然后导包后即可使用。
-----------------------------------------------------------------------------------------------------------------------------	
	 
Java特性之继承
	继承就是子类继承父类的特性(属性)和行为(更多继承的是行为)，是的子类对象（实例，实例就是通过new出来的）具有父类的实例和方法；
					或子类从从父类继承方法，使得子类具有父类相同的行为。
	
	继承需要符合的关系是：is-a（子类是父类[猫是动物]），父类更通用（范围广泛），子类更具体。
	虽然食草动物和食肉动物都是属于动物，但是两者的属性和行为上有差别，所以子类具有父类的一般特性也会具有自身的特性。
	
	继承语法格式： 关键字单词：extends			
			父类的语法格式：访问修饰符public class 父类名{ }
			子类的语法格式：访问修饰符public class 子类名 extends{ }
				
	继承的特性：
	当子类继承了父类后，具有以下特点：
		（1）子类拥有父类非private的属性和方法
		（2）子类可以用有属于自己的属性和方法，即子类可以对父类进行扩展
		（3）java的继承是单一继承，且可以进行多重继承。（单继承就是一个子类只能继承一个父类，多重继承就是，例如：A类继承B类、B类继承C类，所以按照关系就是C类是B类的父类，B类是A类的父类）	
		（4）提高了类与类之间的耦合性（关联性） （继承的缺点，耦合度越高就会造成代码之间的关联）
		注意：java的多重继承与C++的多继承室友区别的 （具体看笔记文档）
	
	this与super关键字
		this：当前对象的.. ，本类中访问属性及方法（引用当前对象的.. ）
		super：当前对象的父类的.. ，通过super关键字，可实现对父类方法的访问（引用当前对象的父类的.. ）
		super关键字可用于：
			（1）调用父类的构造方法：语法结构： super(); 或 super(参数列表);
					 注意：用super调用父类的构造方法时，必须放在子类构造方法的第一条语句
			（2）调用父类的方法：    语法结构： super.方法名(参数列表);
					 注意：静态方法中不能使用super关键字，与this类似
			 										
	方法重写要注意的规则：
		（1）@Override注解的使用可要可不要，当@Override注解存在时，@Override注解下面的方法不可以是父类中没有的，否则出错	
		（2）权限问题：子类的权限只能大于或等于父类的访问权限（子类的访问权限通常用public，父类的访问权限通常用protected）
 				 权限大小：public > protected > provate					
		
	方法重写与方法重载的区别：
		（1）方法重写Override：
				 1）不同类（父类与子类）中的关系
				 2）方法名相同且参数列表相同
				 3）子类的访问权限要大于父类的访问权限
		（2）方法重载Overload：
				 1）同一个类中的关系
				 2）方法名相同，参数列表不同 （具体关于方法重载的知识看上面）
	
	Object类：Object类是类层次的结构的根类，每个类都使用Object类作为超类（所有java类都继承Object类），所有对象（包括数组）都实现这个类的方法
			重写toString()方法： toString方法属于Object类里的方法，原本toString方法输出的是“包名+类名+@内存地址值”，重写后使其输出自己想要的内容
					eg: Student student = new Student("吴宗宁");
							System.out.println(student);
							System.out.println(student.toString());
					没重写之前输出的是“test8.Student@1db9742” ，重写后输出“姓名：吴宗宁”（自己想要的内容）
			注意：方法在输出某个对象名称时，输出的内容是类的全名+@内存地址值时，则证明该类没有重写toString()方法
			
			重写equals(Object obj)方法：equals方法属于Object类里的方法，原本equals方法功能是比较内存地址值是否相等，重写后使其功能为比较内容时候相等
					eg: int a = 10; int b = 10;	
							Student student = new Student("吴宗宁");
							System.out.println(a == b);
							Student student1 = new Student("吴宗宁");
							System.out.println(student == student1);
							System.out.println(student.equals("吴宗宁"));	
					没重写equals之前输出是false，重写后输出为true
			“==”与equals的注意事项：
				（1）当使用==比较是否相同时，则注意：==比较基本数据类型时，比较的是数值是否相等
																						 ==比较引用数据类型时，比较的是内存地址值	
				（2）equals比较引用数据类型时，比较的是内存地址值（不可以比较基本数据类型）
-----------------------------------------------------------------------------------------------------------				

final关键字的使用
	（1）final修饰类：语法格式：[访问修饰符 public] final class 类名{ }
			 java语言中很多类都属于final类  ---> String：public final class String、Integer：public final class Integer
			 作用：使用final关键字修饰的类，该类不能被继承
		
	（2）final修饰方法：语法格式：[访问修饰符 public] final 返回值类型 方法名(参数列表){ }
			 作用：使用final关键字修饰的方法，则该方法不能被覆盖（重写）
		
	（3）final修饰变量：语法格式：[访问修饰符 public] final 常量名 = 常量;
			 作用：使用final关键字修饰的变量，则该变量变成常量（常量是不能改变的量）	常来那个命名规范：字母全部大写，每个单词之间使用下划线隔开
	 
	 java编程规范：
	 		常量命名或使用时，一般会让final和static配合使用 ---> [访问修饰符 public] static final 常量名 = 常量; (注意：static可以写在final前后面，推荐写在final前面)
	 		每个变量的定义占一行（有助于注释） -->建议不要 int a = 10,b = 20;  规范写法：int a = 20; int b = 10;
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

抽象类、抽象方法
	当类存在一些无法确定具体实现的方法时，这时就要需要把方法设置为 抽象方法、抽象类。需要abstract修饰
	
	（1）抽象类：语法格式：[访问修饰符 public] abstract class{ }
	（2）抽象方法：语法格式：[访问修饰符 public] abstract 返回值类型 抽象方法名();
	
	注意细节：
		（1）可以使用 new 关键字来创建抽象类对象吗？
				 不可以。 --->  抽象类不能实例化。
		（2）抽象类中只能有抽象方法吗？
				 错误。抽象类中可以有其他方法。
		（3）抽象类中可不可以没有抽象方法？
				 可以。	抽象类中可以没有抽象方法。
		（4）如果父类是抽象类，则子类必须实现父类的抽象方法吗？
				 不一定。当子类是抽象类时，子类可以不实现父类的抽象方法。当子类不是抽象类时，则需要实现父类的抽象方法。
		（5）抽象类不能有构造方法？
				 可以有构造方法。
				
	抽象类的特点：
		（1）抽象类不能实例化。
		（2）抽象类需要使用abstract关键字修饰：抽象方法只有声明没有实现，且是使用abstract关键字修饰的方法，并必须放在抽象类中。
		（3）当完全实现抽象类的抽象方法时，该子类才可以实现实例化(new 创建对象) ，否则该子类还是抽象类。
---------------------------------------------------------------------------------------------------------------------------------------		
		
接口：接口是特殊的抽象类，当抽象内只有抽象方法和常量时，那么就有一个新的名称 “ 接口 ”
	修饰接口的关键字不再是class / abstract，而是 interface。接口的子类，有实现接口的功能，关键字：implements
	接口语法格式：[访问修饰符 public] interface 接口名 { }
	接口的实现类（子类）语法格式：[访问修饰符 public] class 实现类名 implements 接口名 { }
	
	注意事项：
		（1）接口中的常量：在接口中，当省略了 “public static final” 后，这个变量仍然是常量
		（2）接口中的抽象方法：在接口中，当省略了 “public abstract” 后，该方法仍然是抽象方法
		（3）接口不能实例化 （不能new对象就是不能创建新的空间）
		（4）类于类之间是继承关系，接口于实现类之间是实现的关系
		（5）当实现类实现了接口内的所有抽象方法后，该实现类才能实例化，否则该实现类仍然是抽象类

	注意细节：
		（1）一个类可以实现多个接口？
				 可以。
				 语法格式：[访问修饰符 public] class 实现类名 implements 接口名1, 接口名2... { }
		（2）接口里面不一定都是抽象方法？
				 错。    接口中只能存放抽象类和常量。
		（3）一个类是否可以继承一个类的同时实现多个接口？
				可以。
				[访问修饰符 public] class 实现类名 extends 父类 implements 接口1,接口2...{ }
		
		java把C++中的多继承进行了优化改，多继承可以用接口来表示
-------------------------------------------------------------------------------------------------------------------------------------		

java三大特性之多态
	多态：多态是指不同类的对象对同一消息作出相应，即同一消息可以根据发送对象的不同而采用多种不同的行为方式，
				通过将子类对象引用赋值给超类对象引用变量来实现动态方法调用（发送消息就是方法调用）
	案例一：通过抽象类实现多态
	案例二：通过接口实现多态   --->  与抽象类相似
	案例三：通过抽象类和接口实现多态   ---> 抽象类和接口结合
	
	多态结合：
		（1）使用父类类型的引用指向子类的对象  --->  父类名 引用名 = new 子类();
		（2）该引用只能调用父类中定义的方法和变量
		（3）如果子类中重写了父类中的方法，那么在调用此方法时调用的是子类的方法(重写父类的方法)  （动态连接、动态调用）
		（4）变量不能被重写，否则出错
-----------------------------------------------------------------------------------------------------------------------------------------------
					
数据类型有两大类：引用数据类型  基本数据类型
	引用数据类型：类类型（class）  接口数据类型（interface）  数组
	引用数据类型：引用数据类型变量的值与基本数据类型的值不同，引用数据类型的变量值是指向内存空间的引用（内存地址），所指向的内存中保存这变量所标示的一个值或一组值
	引用（Java中的引用），在其他语言中称为指针或内存地址。Java语言与其他语言不同，不支持直接使用内存地址值，而必须通过变量名对某个内存地址进行访问
	注意事项：
		（1）在Java语言中基本数据类型声明时，系统直接给变量分配空间，因此声明后的变量可以直接赋值 ---> int a;  a = 10;
		（2）在Java语言中引用数据类型声明时，只是给该变量分配引用空间，具体的数据空间没有分配，因此引用数据类型变量声明后不能被直接引用 
												---> Student student;  student.age = 18; 是错误的
		（3）引用或数据类型在声明后必须通过实例化来开辟空间，才能对变量所指向的对象进行访问	
												---> Student student;  student = new Student(); student.age = 18;  是正确的
	java的引用：
		Person person = new Person("张三");
		我们会认为person是一个对象，是Person类的一个实例，下面例子
		Person person;
　　person = new Person("张三");
		这两行代码实现的功能和上面的一行代码是完全一样的。在Java中new是用来在堆上创建对象用的，如果person是一个对象的话 那么第二行为何还要通过new来创建对象呢？
		由此可见，person并不是所创建的对象，也就是说person是一个引用，是指向一个可以指向Person类的对象的引用。真正创建对象的语句是右边的new Person("张三");										
		
	匿名对象：就是没有名字的对象  语法格式： new 类名();
		（1）匿名对象可以作为实际参数进行传递   --->   user.show(new Tv());
		（2）当对象对成员变量或方法仅调用一次时可以使用匿名对象   --->   new User().show(new Tv());  
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------				 
 	
对象类型转换
	基本数据类型：  自动类型转换     强制类型转换
			自动类型转换：把一个范围小的数据类型变量给一个大的数据类型变量
										--->  byte a = 120;  int b = a;
			强制类型转换：把一个范围大的数据类型变量给一个小的数据类型变量  语法格式：数据类型 变量名1 = (最终数据类型)变量名2;
										--->  long c = 1000L; int d = (int)c;
	
	引用数据类型：  向上转型    向下转型
			向上转型：把一个范围小的数据类型变量给一个大的数据类型变量  （安全性高）
								--->  Animal dog1; Dog dog2	= new Dog();  dog1 = dog2;
			向下转型：把一个范围大的数据类型变量给一个小的数据类型变量	（安全性较低）
								--->  Animal dog1 = new Dog();  Dog dog2 = (Dog)dog1;
	注意：当两个引用数据类型不同时不可以相互转换数据类型，当我们不知道两个引用数据类型是否相同时用 "instanceof" 来比较，可以通过重写equals()来比较内容值后再类型转换
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

设计模式：单例模式、简单工厂模式
	设计模式是代码设计经验的总结（老程序员总结的），他与具体的语言无关，是一种编程思想，掌握面向对象的思想，才可以更好的理解设计模式
	
	一、单例模式：在java项目中使用一个类只能实例化一次（只有一个对象），而在整个项目中都调用同一个实例对象（内存地址值一样）	
			单例模式特点：
				（1）单例类只能有一个实例
				（2）单例类必须自己创建自己的唯一实例
				（3）单例类必须给所有其他对象提供唯一实例
			单例模式确保某个类只有一个实例，而却自行实例化并象整个系统提供这个实例
			单例模式分类： 饿汉式单例模式    懒汉式单例模式
			
			饿汉式单例模式基本步骤：
				（1）私有化构造方法  --->  防止外部实例化（防止外部new）
				（2）自己创建自己实例，直接new
				（3）向外部提供共有的访问方法
							//私有化构造方法
							private HungryInstance(){ }
							
							//自己创建自己的实例，直接new
							private static HungryInstance hungryInstance = new HungryInstance();
							
							//向外提供共有的访问方法
							public static HungryInstance getInstance(){
								return hungryInstance;
							}
						
			懒汉式单例模式基本步骤：
				（1）私有化构造方法  --->  防止外部实例化（防止外部new）
				（2）自己创建自己的实例，把该实例设置为null
				（3）向外提供共有的访问方法（使用到时再创建）
						  //私有化构造方法
							private LazyInstance(){ }
							
							//自己创建自己的实例，把该势力设置为null
							private static LazyInstance lazyInstance = null;
							
							//向外提供共有的访问方法（使用到时再创建）
							public static LazyInstance getInstance(){
								if(lazyInstance == null){
									lazyInstance = new LazyInstance();
								}
								return lazyInstance;
							}
	
	二、简单工厂模式：
					专门定义一个类（这个类称为“工厂类”）来负责创建其他类的实例，被创建的实例通常具有共同的父类（抽象类、接口）
					凡是工厂模式都会有一个类名结结尾单词“factory”，否则不算是工厂模式。
					简单工厂模式的实质是有一个工厂类根据转入的参数，动态决定应该创建哪一个产品类的实例（这个产品类继承自同一个父类多接口）
			注意：	
					当要核对两个字符串是否相同时，那么就可以使用 “equals()” 方法比较
					eg：String str = "hello";
							方法一：str.equals("hello");
							方法二："hello".equals(str);  建议使用方法二
-------------------------------------------------------------------------------------------------------------------------------------------------		

面向对象六大原则：		详细看文档
									1）单一职责原则
									2）里氏替换原则
									3）最少知道原则
									4）接口隔离原则
									5）依赖置换原则
									6）开闭原则（最重要）
----------------------------------------------------------------------------------------------------------------------------------------
		
内部类：内部类表示一个类定义在另一个类里面，而里面那个类就叫做内部类
		eg:
				public class Outer{ //外部类
						public class Inner{ //内部类
							
						}
				}
				外部类、内部类是一个编译时的概念，一旦编译成功就会成为两个不同的两个类，都会生成两个不同的 .class 文件
				外部类：外部类名.class    --->   Outer.class
				内部类：内部类名.class		--->   Outer$Inner.class
		注意：
				内部类可以是 static 的，也可以是public、（default）、protected和private关键字来修饰，而外部类则只能使用public或default来修饰
		补充：
				当一个文件中有两个及两个以上平极的类时，则只有一个类可以使用public修饰
				eg:
					public class Test {
					}
					class Test1{		
					}
		
	1）成员内部类： 作为外部类的一个成员存在的类称为外部类，必须先创建外部类才能创建内部类
		 							通过外部类访问内部类：语法格式：外部类名.内部类名 内部类对象名 = 外部类对象名.new 内部类名();  或外部类名.内部类名 内部类对象名 = new 外部类名().new 内部类名();
		 							成员内部类特性一：
		 															成员内部类可以直接访问外部类的所有属性或方法 
		 							成员内部类特性二：
		 															内部类和外部类存在同名变量，注意 this 关键字的使用
		 															以内部类为标准：this.内部类变量名; --->  this.age; 此时是调用内部类的变量
		 																							外部类.this.外部类变量名; ---> Outer.this.age;  此时是调用外部类的变量								
		 							静态成员内部类：public static class 内部类名{ }   注意创建静态成员内部类的实例的方式
		 															静态成员内部类创建对象：外部类名.内部类名 内部类对象名 = new 外部类名.内部类名();
		 															成员内部类不可以直接访问外部类非静态成员，需要城建外部类对象来访问外部类成员
		 													eg:
		 															public class Outer3 {
																	int age = 18;
																	
																	//静态内部类
																	public static class Inner{
																		String neme = "吴宗宁 20150115117";
																		//内部静态类不可以直接访问外部类非静态成员
																		public void show(){
																			System.out.println(new Outer3().age);
																		}
																	}
																	
																	public static void main(String[] args) {
																		Outer3.Inner inner = new Outer3.Inner();
																		System.out.println(inner.neme);
																		inner.show();
																	}
																}
		 														 										 					
	2）局部内部类：局部内部类是在一个方法内定义的内部类，局部内部类的是有效范围是该方法内部（和局部变量一样），局部内部类不能使用访问修饰符修饰。
								 语法格式：   ...方法名(){
									 							class 局部内部类名{
									 								
									 							}	
						                 }
						 eg：
						 public class Outer4 {	
							int age = 18;
							
							public void test(){
								//局部内部类不能用访问修饰符修饰
								class Inner{  //局部内部类的使用范围只能在当前方法内部
									int ages = age;
									
									public void show(){
										System.out.println(this.ages);
									}
								}
								//调用
								new Inner().show();	
							}
							
							public static void main(String[] args) {
								Outer4 outer = new Outer4();
								outer.test();
							}
						}
	
	
	3）匿名内部类：	没有名字的内部类，当某类只需要使用一次，则不需要去创建该类，建议使用匿名内部类的方式，以减少类的个数 ---> 使用很多
							    语法格式： new 接口名或抽象类名(){
							    							 实现方法...
							    					}.实现方法名();
						 eg：
						 		//匿名内部类
								new IPhoneable(){ //创建接口对象
									//实现方法
									@Override
									public void call() {
										System.out.println("苹果手机可以打电话...");
									}		
								}.call();
					注意：匿名内部类可以跟抽象类或接口来使用
---------------------------------------------------------------------------------------------------------------------------------------------------------------------

一维数组：数组属于引用数据类型，在java，引用数据类型声明时不可以直接使用，必须创建数据空间后才可以使用，数组也是如此
			数组的声明与创建：
					声明方式一：数据类型[] 数组名;    --->    int[] array;
					声明方式二：数据类型 数组名[];    --->    int array[];
			注意：声明数组时不能指定数组长度    --->    int[5] array;  是错误的
					创建方式：  数组名 = new 数据类型[数组长度];    --->    array = new int[5];  创建5个int类型的数据空间
			数组赋值：当数组没有赋值时，数组默认值为 0
					赋值方式一：静态赋值： --->  （1） 数据类型[] 数组名 = new 数据类型[]{数据};  --->   int[] array = new int[]{1,2,3,4,5};  ---> 数据的个数默认创建数据空间个数
																			 （2） 数据类型[] 数组名 = {1,2,3,4,5};   --->  与上一种方式相同，默认将 new 数据类型[] 隐藏了
					赋值方式二：动态赋值：给数组元素一一赋值，访问数组元素
											数组声明和创建后 --->   数组名[下标值] = 数值;  --->  array[1] = 5;
				eg：
						public static void main(String[] args) {
							//声明数组与创建 
							//方式一
							int[] array1 = new int[5];
							//方式二
							int array2[] = new int[5];
							//赋值   静态赋值1
							int[] array3 = new int[]{1,2,5,4,5};
							//静态赋值2
							int[] array4 = {4,5,8,7,6};
							//动态赋值
							array4[2] = 10;
							System.out.println(array4[2]);
						}	
		注意：数组当参数传参时，可以是 数组名 也可以是 new 数据类型[]{数据}; 
		  eg:
		  	public static void main(String[] args) {
					//声明与创建数组
					int[] array = new int[]{5,8,1,7,6,19,10,3};
					ArrayUtil.arrayPrint(array);
					ArrayUtil.arrayPrint( new int[]{5,8,1,7,6,19,10,3});
				}
		两种for循环遍历：
			（1）普通for循环： for(int k = 0; k < array2.length; k++){
														System.out.println(array2[k]);
													} 
			（2）增强for循环： for(数据类型 数组元素: 数组名){ 循环体 };
												 for(int num: array1){
														System.out.print(num);
													}
					 增强for循环特点：
					 								 缺陷：遍历数组或集合时无法访问索引(下标)值
					 								 用途：只适合遍历显示数组或集合中元素内容
			 两种for循环的区别：
			 					1） 普通for循环可以打印除数组元素，也可以通过下标对数组元素进行修改
			 					2） 增强for循环只能输出数组元素值，不能通过下标对数组元素值进行修改
	 数组排序：
	 		1） 冒泡排序：
	 							eg：
	 									int[] array = new int[]{5,7,12,2,3,8,1,6};
										//冒泡排序
										for(int i = 0; i < array.length-1; i++){
											for(int j = 0; j < array.length-1-i; j++){
												if(array[j] > array[j+1]){
													int team = array[j];
													array[j] = array[j+1];
													array[j+1] = team;
												}
											}
										}
			2） 选择排序：
								eg：
										int[] array1 = new int[]{10,5,2,7,9,12,1,6};
										//选择排序
										for(int i = 0; i < array1.length-1; i++){
											for(int j = i+1; j < array1.length; j++){
												if(array1[i] > array1[j]){
													int team = array1[i];
													array1[i] = array1[j];
													array1[j] = team;
												}
											}
										}
		  3） 插入排序：
		  					eg：
		  							int[] array2 = new int[]{10,5,2,7,9,12,1,6};
										//插入排序
		  						 	for(int i = 1; i < array2.length; i++){
											for(int j = i; j > 0; j--){
												if(array2[j] < array2[j-1]){
													int team = array2[j-1];
													array2[j-1] = array2[j];
													array2[j] = team;
												}else{
													break;
												}
											}
										}
			4） 二分查找法：  也称为折中法      数组必须是有序的数组
									eg：
										 public static void main(String[] args) {
												//猜测的数值   猜测的数必须数组里面有的值
												int num = 95;
												//有序数组												
												int[] array = {2,7,15,45,56,78,95,102};
												//下标初始值
												int min = 0;
												//下标结束值
												int max = array.length-1;
												//中间值变量
												int temp = 0;
												//循环查找猜测的元素值
												while(max >= min){
													temp = (max + min)/2;
													if(num == array[temp]){
														break;
													}else if(num > array[temp]){
														min = temp + 1;
													}else if(num < array[temp]){
														max = temp -1;
													}
												}
												System.out.println("猜测的数值在数组中的第"+(temp+1)+"个元素");
											}
		可变参数：就是可以变化的参数个数
							语法格式：方法名(数据类型...变量名){ }  其实这就是一个数组--->  方法名(数据类型...数组名){ }	
					eg: //可变参数求和
						  public static int getSum(int... num){  
								//int... num 就是一个数组，数组的长度是可变的，当你传了几个实参，长度就是多少
								int sum = 0;
								for(int i =0; i < num.length; i++){
									sum += num[i];
								}
								return sum;
						  }	
				main函数调用：
							System.out.println("不传实参时默认为0："+Util.getSum());
							System.out.println("三个数之和："+Util.getSum(20,45,32));				
			  注意：
			  		1）传递实参时，如果传递多个实参，则每个实参之间用逗号隔开	
			  			 System.out.println("三个数之和："+Util.getSum(20,45,32));
			  		2）形参 int... num 就是一个数组，数组的长度时可变的，由实参传递的实参个数决定数组长度
--------------------------------------------------------------------------------------------------------------------------------------------------

二维数组：就是由一维数组组成的二维数组，数组空间不是连续分配的，所以不要求二维数组每个一维数组大小相同
			数组的声明与创建：
						声明方式一：数据类型[][] 数组名;    --->    int[][] array;
						声明方式二：数据类型 数组名[][];    --->    int array[][];
				 注意：声明数组时不能给两个下标赋值      --->    int[5][2] array;  是错误的		  		
		  二维数组创建方式一：    每个一维数组的长度可能不一样（自己随意定义）
							  array1 = new int[3][];
								//动态赋值：给每个一维数组给定数组长度
								array1[0] = new int[5];   //这个二维数组的第一个一维数组的长度为5（5个元素）
								array1[1] = new int[10];
								array1[2] = new int[6];
			二维数组创建方式二：    每个一维数组的长度一样 	
								array1 = new int[4][5];  //一共有20个元素	
			二维数组赋值：当数组没有赋值时，数组默认值为 0
			赋值方式一：静态赋值： --->  （1） 数据类型[][] 数组名 = new 数据类型[][]{数据};  --->   int[][] array = new int[][]{{1,2,3},{4,5},{6,7,8,9}};  ---> 数据的个数默认创建数据空间个数
																	 （2） 数据类型[][] 数组名 = {数据};  --->  int[][] array = {{1,2,3},{4,5},{6,7,8,9}};  --->  与上一种方式相同，默认将 new 数据类型[] 隐藏了
			赋值方式二：动态赋值：给数组元素一一赋值，访问数组元素
											数组声明和创建后 --->   数组名[下标值][下标值] = 数值; 
								eg：  String[][] strs = new String[2][];
											strs[0] = new String[2];
											strs[1] = new String[3];
											strs[0][0] = "wu";
											strs[0][1] = "zong";
											strs[1][0] = "ni";
											strs[1][1] = "媒";
											strs[1][2] = "de";
		二维数组的遍历：
				1）普通for循环遍历，通过下标遍历
				   eg：
						    for(int i = 0; i < strs.length; i++){ //遍历一维数组的个数
									for(int j = 0; j < strs[i].length; j++ ) //遍历一维数组的元素
									System.out.println(strs[i][j]);
								}
				2）增强for循环遍历，直接输出，不能改变元素
					 eg：
					      for(int[] num1: array2){
									//此时遍历的是一维数组的内存地址
									//System.out.println(num1);
									for(int num: num1){
										//此时遍历的是一维数组的元素
										System.out.print(num+"\t");
									}
								}
-----------------------------------------------------------------------------------------------------------------------------

异常处理：异常是程序在运行期发生的不正常的事件，它会打断指令的正常执行流程
				  发生异常(如 NullPointerException)后，后面的代码将不会执行
				  Java语使用异常处理机制为程序提供了异常处理的能力，从而大大增强了Java语言的可靠性
			异常处理类：Throwable类可分为两个类 ---> Error(错误) 、 Exception(异常)
				  Error(错误)： 程序员没办法处理；硬件问题程序员无能为力
				  Exception(异常)： CheckedException(受检异常、一般性异常) ---> (数组越界、空指针、类型转换异常) 、 UnCheckedException(非受检异常、[RuntimeException](运行时异常))
				  									异常因编程错误或偶然的外在因素导致的一般性问题，这类异常得到恰当的处理时，程序有机会恢复至正常运行状态
				  注意：程序员通常只能处理异常（Exception），而对错误（Error）无能为力
		  异常处理机制：
		  		（1）Java程序在执行过程中如果出现异常，会自动生成一个异常类对象，该异常对象被自动提交给JVM，这个过程称为 抛出(throw)异常		  
					（2）当JVM接受到异常对象时，会寻找能处理这一异常的代码并把当前对象交给其处理，这一过程称为捕获(catch)异常和处理异常
					（3）如果JVM找不到可以捕获异常的代码，则运行时系统将终止，相应的Java程序也将退出
					方式：（1）捕获异常  （2）向上抛出异常  （3）抛出单个具体的异常
					异常处理就是要学习5个关键字：try、catch、finally、throw、throws
					（1）捕获异常
							 语法格式1：   try{  //尝试捕获异常     执行第一个异常代码后，后面的代码不执行，catch的是
								 								//可能产生异常的代码
								 						 }catch(异常处理类类型 参数名){
								 						 		//异常的处理代码
								 						 }catch(异常处理类类型 参数名){ //可写多个catch
								 						 		//异常的处理代码
								 						 }finally{
								 						 		//此处代码无论如何都会执行
								 						 }
								 	  	eg：   
								 	  				  try{  //尝试捕获异常     执行第一个异常代码后，后面的代码不执行，catch的是
																//除0异常
																int a = 10/0;   //ArithmeticException
																//空指针异常
																String str = null;
																boolean is = str.equals("Hello");  //NullPointerException
															}catch(ArithmeticException e){   //捕获异常
																e.printStackTrace();   //输出异常
															}catch(NullPointerException e){
																e.printStackTrace();   //输出异常
															}finally{   //无论如何都会执行
																System.out.println("HelloWold");
							语法格式2：    	
														 try{  //尝试捕获异常     执行第一个异常代码后，后面的代码不执行
								 								//可能产生异常的代码
								 						 //}catch(Exception 参数名){ //ArithmeticException  NullPointerException 都属于 Exception类
								 						 }catch(异常处理类类型1 |异常处理类类型2 参数名){ 
								 						 		//异常的处理代码
								 						 }finally{
								 						 		//此处代码无论如何都会执行
								 						 }	
								 	  eg：    
								 	  				 try{  //尝试捕获异常     执行第一个异常代码后，后面的代码不执行，catch的是
															 //除0异常
															 int a = 10/0;   //ArithmeticException
															 //空指针异常
															 String str = null;
															 boolean is = str.equals("Hello");  //NullPointerException
														 }catch(ArithmeticException | NullPointerException e){   //捕获异常
												       //}catch(Exception e){  //ArithmeticException  NullPointerException 都属于 Exception类   //捕获异常
															 e.printStackTrace();   //输出异常
														 }finally{   //无论如何都会执行
															 System.out.println("HelloWold");
														 }
						  捕获异常总结：
						  				（1） try 中的代码是可能发生异常的代码，执行第一个异常代码后，后面的代码不执行
						  				（2） catch 会直接匹配 try 中代码产生的异常类型，当匹配成功，则执行 catch 中的代码；若匹配不成功，则就不会执行；（根本没做处理）
						  				（3） JDK新特性，一个 catch 代码可以声明多个能处理的特定异常的类型，多个类型之间用 “｜” 隔开
						  									catch(ExcetionName1 | ExceptionName2 e){
						  												//异常的处理代码
						  									}
						  				（4） 当异常发生时，程序会终止当前的流程去执行相应的 catch 代码
						  				（5） 写 catch 代码时，先捕获异常的范围不能大于后捕获的异常的范围
						  				（6） finally 段的代码无论是否发生异常都执行
						  
				（2）向上抛出异常（尽量避免使用）  关键字： throws
						 语法格式：[访问修饰符 public] static 返回值类型 方法名() throws 异常类型{ 方法体 } --->  会与抛出单个具体的异常配合使用-> throw
						 在定义一个方法的时候可以使用throws关键字声明，使用throws声明的方法表示此方法不能异常处理，而交给调用该方法的方法进行处理，调用该方法的地方需要自己去做异常处理 --->  不做处理，向上抛出异常
						 注意：
						 		 （1）本身的程序处理不了了，往上一层抛，由上一层去处理
						 		 （2）定义一个方法的时候，通过这种方式来告知调用方，这个方法有可能会发生异常（会导致这个异常最终可能没处理）		
						 eg：  
									public static void main(String[] args) throws IOException {   //会导致这个异常最终可能没处理
										test1();
									}
									public static void test1() throws IOException{
										test2();
									}								
									public static void test2() throws IOException{
										test3();
									}							
									public static void test3() throws IOException{
										throw new IOException("向上抛出异常...");
									}
				（3）抛出单个具体的异常
						异常不仅仅虚拟机可以抛，我们自己也可以抛，我们可以在代码中使用 throw 关键字来抛出某个具体的异常对象
									throw new RuntimeException("程序出现异常");
						eg：
									public void setAge(int age) {
										if(age >= 0 && age <=130){
											this.age = age;
										}else{
											//抛出单个具体异常
											throw new RuntimeException("您输入的年龄不符合范围，请核对后再操作...");
										}		
									}		
		 自定义异常类：创建自定义异常类，需要继承 Exception 或其子类
		 					 eg：  
		 					 			public class MyException extends Exception {  //自定义异常继承Exception
											//需要重写内部两个构造方法
											//无参构造
											public MyException(){
												
											}
											//有参构造
											public MyException(String msg){
												System.err.println(msg);
											}
										}
		 易错面试题
		 		例题一：
				 					public class InterviewQuestion {
										public static void main(String[] args) {
											System.out.println(test());
										}
										
										public static int test(){
											try{
												String str = null;
												boolean is = str.equals("Hello");
											}catch(Exception e){
												return 0;
											}finally{
												return 1;  //无论如何都会执行
											}
										}
									}
			 例题二：
			 						public class User {
										public static double show(){
											return 2;
										}
									}
									public class InterviewQuestion1 {
										public static void main(String[] args) {    
											User user = null;
											System.out.println(user.show());   //因为方法是静态方法，次方式调用相当于 User.show(); 如果User类方法不是静态方法，次调用将会出现异常（空指针异常）
											System.out.println(User.show());
										}
									}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

基本数据类型包装类： 每个基本数据类型都有一个与之匹配的包装类  除了 int 、 char 这两个基本数据类型外，其他的基本数据类型对应的包装类都是把首字母大些即可
			 				       1） 整型： byte -->  Byte类   short -->  Short类    int -->  Integer类    long --> Long类
			 				       2） 浮点型： float --> Float类   double --> Double类
			 				       3） 字符型： char --> Character类
			 				       4） 布尔型： boolean --> Boolean类
			 				       包装类的层次：
			 				       							Character：
			 				       												java.lang.Object  <--  java.lang.Character
			 				       							Boolean：
			 				       												java.lang.Object  <--  java.lang.Boolean
			 				       							其他：
			 				       												java.lang.Object  <--  java,lnag.Number  <--  java.lang.Integer 或 java.lang.Double 等等..
			 				      基本数据类型包装类的常用方法
			 				      				（1） 装箱：把简单的基本数据类型变成引用数据类型（包装类） ---->   int 类型转变为	Integer 类
			 				      							   1） 通过构造方法进行装箱：
			 				      							   			  包装类名 对象 = new 包装类名(数值); 	-->   Integer a = new Integer(15);	或 	Integer a = new Integer("12");			
																	
																		 2） 通过调用方法进行装箱：
																		 				包装类名 对象 = 包装类名.valueOf(数值);  -->  Integer a = Integer.valueOf(10);	
																						
														（2）	拆箱：把引用数据类型（包装类）变成基本数据类型   ---->   Integer 类转变为 int 类型	
																		    基本数据类型 变量 = 包装类对象.基本数据类型Value();   -->   int a = num.intValue();	
														自动装箱与自动拆箱
																	自动装箱：可以直接把一个基本数据类型赋值给包装类  -->   Integer a = 10;
																						相当于省略了 Integer.valueOf(数值);			-->   Integer a = Integer.valueOf(10);
																  自动拆箱：可以直接把一个包装类对象赋值给基本数据类型  -->  int a = new Integer(10);
																  					相当于省略了包装类对象.基本数据类型Value();  --->   int a = num.intValue();		
														例题1：
														  		public static void main(String[] args) {
																		Integer a = null;
																		int b = a;   //自动拆箱
																	} //空指针异常
														  注意：有拆箱操作时一定要特别注意封装类对象是否为null
														
													 例题2：
													 				public static void main(String[] args) {
																		Integer a1 = 100;   //100 相当于 new Integer(100); 只要数值相同并且数值的范围在 -128 到 127 之间,Integer对象就是同一个，否则重新new一个对象
																		Integer a2 = 100;
																		System.out.println(a1 == a2);  //判断是否指向同一个对象
																		
																		Integer b1 = 200;
																		Integer b2 = 200;   //因为200 不在-128 到 127 之间 所以重新new一个对象
																		System.out.println(b1 == a1);
																	}
									学会把一个String类型的数字转换为 int 或 double 类型
													 基本数据类型 变量 = 包装类名.parse基本数据类型(String类型字符串);
												eg:
														public static void main(String[] args) {
															int a = Integer.parseInt("123");
															System.out.println(a);
															
															double b = Double.parseDouble("3.1415");
															System.out.println(b);
														}
							练习：将一个字符串如 "1,2,3,4,5,6" 转换成一个整数数组
										将这个字符串转换成一个数组 ---> 使用String类里面的 split(); 方法  --->  String[] strs = str.split(",");	
										Arrays工具类：		
																  此类包含用来操作数组（比如排序和搜索）的各种方法。此类还包含一个允许将数组作为列表来查看的静态工厂
																  static void sort(int[] a)           对指定的 int 型数组按数字升序进行排序
																  static String toString(int[] a)     返回指定数组内容的字符串表示形式		  
												答案：
															public static void main(String[] args) {
																//String 字符串
																String str = "23,15,5,32,24,11";
																//装换成String[]
																String[] strs = str.split(",");
																//遍历
																for(String num: strs){
																	System.out.print(num+"  ");
																}
																System.out.print("\n");
																int[] num = new int[strs.length];
																for(int i = 0; i < num.length; i++){
																	num[i] = Integer.parseInt(strs[i]);
																}
																for(int c: num){
																	System.out.print(c+"  ");
																}
																System.out.print("\n");
																Arrays.sort(num);
																System.out.println(Arrays.toString(num));
															}			
							Character类与Scanner类：
											 Character类：Character类在对象中包装一个基本类型 char 的值，Character类型的对象包含类型为 char 的单个字段（就是单个字符）
											 							此外，该类提供了几种方法，以确定字符的类型（判断是否为字母、大写字母等等），并将小写字母转换为大写字母
											 							public static void main(String[] args) {
																			//必须是由参构造，因为只有由参构造
																			Character ch = new Character('a');
																			//Character类转换为char类型     拆箱
																			char ch1 = ch.charValue();
																			System.out.println(ch1);
																			//char类型转换为Character类类型   装箱
																			Character ch2 = Character.valueOf('b');
																			System.out.println(ch2);
																			//判断是否为字母
																			System.out.println(Character.isLetter('A'));
																			//判断是否为小写字母
																			System.out.println(Character.isLowerCase('F'));
																			//判断是否为大写字母
																			System.out.println(Character.isUpperCase('f'));
																			//将小写字母转换为大写字母
																			System.out.println(Character.toUpperCase('G'));
																			//将大写字母转换为小写字母
																			System.out.println(Character.toLowerCase('L'));
																		}
											  Scanner类： Scanner属于资源，使用资源后最好关闭掉否则占内存 	
																		public static void main(String[] args) {
																			//System.in 是输入流，Scanner属于资源，使用资源后最好关闭掉否则占内存
																			Scanner scanner = new Scanner(System.in);   
																			//输入int类型数值
																			int a = scanner.nextInt();
																			System.out.println(a);
																			//输入double类型数值
																			double b = scanner.nextDouble();
																			System.out.println(b);
																			//输入String类型字符串,此方法不能识别空格，当字符串有空格时不推荐使用此方法
																			//String c = scanner.next();
																			//System.out.println(c);
																			//输入String类型字符串，此方法可以识别空格,但是最好单独食用不要与scanner.next();一起使用，否则scanner.nextLine();不能正常使用
																			String d = scanner.nextLine();
																			System.out.println(d);
																			/**
																			 * 几个常用的语言环境
																			 * 	 	中文（中国） zh_CN     中文（台湾） zh_TW
																			 * 		中文（香港） zh_HK     英语（美国） en_US
																			 * 		英语（英国） en_GB     西班牙文（西班牙） es_ES
																			 * 		法文（法国） fr_FR     日文 ja_JP
																			 * 		韩文 ko_KR
																			 */
																			//输出语言环境
																			System.out.println(scanner.locale()); 		
																			//关闭资源,使用资源后最好关闭掉否则占内存,尤其是IO流
																			scanner.close();
																		}	
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
																		
String类：	
				 字符串是常量：他们的值在创建之后不能更改。字符串缓冲区支持可变的字符串。因为String对象是不可变的，所以可以共享
				 创建String对象
				 				方式一：String 变量 = "0个1个或多个字符";    直接赋值
				 				方式二：string 变量 = new String("0个1个或多个字符");	
				 				方式三：使用字符串连接符 + 
				 				public static void main(String[] args) {
									//创建String类
									//方法1  直接赋值
									String str1 = "sadas";
									System.out.println(str1);
									//方法2
									String str2 = new String("wuzongning");
									System.out.println(str2);
									//方法3 使用字符串连接符 + 
									//String str3 = "wuzongning"+123;
									String str3 = "wuzongning"+"123";
									System.out.println(str3);
								}	
				常量池概念：Java运行时会维护一个常量池，常量池用来存放运行中产生各种字符串，并且池中的字符串的内容不重复  --->  不可变
										常量池在java用于保存在编译期已确定的，已编译的class文件中的一份数据。它包括了关于类，方法，接口等中的常量，
										也包括字符串常量，如String s = "java"这种申明方式；当然也可扩充，执行器产生的常量也会放入常量池，故认为常量池是JVM的一块特殊的内存空间。
				String常用方法（增删查改）	
							  public static void main(String[] args) {
									//字符串常用方法（增删查改）
									//增: String concat(String str)   在原有的字符串的尾部添加参数字符串，如果str的长度为空，则返回原字符串 	注：str不鞥为空(null)
									String str1 = "wuzongning";   //不可变
									String str2 = str1.concat("傻逼");
									//输出str1
									System.out.println(str1);
									//输出str2
									System.out.println(str2);
									//删：String substring(int begindex) 获取从beginIndex开始到结束的子字符串
									System.out.println(str1.substring(2));
									//删：string substring(int beginIndex,int endIndex) 获取从beginIndex开始下标到endIndex结束下标之前的字符串
									System.out.println(str2.substring(2, 6));
									//删：public String trim()  把字符串中的首尾空白字符去掉，使用此方法去除空格
									String str3 = "   Hello World   ";
									System.out.println(str3);
									System.out.println(str3.trim());
									//查：char charAt(int index)   查看index下标的char类型字符
									System.out.println(str2.charAt(9));
									//改：public String toLowerCase()  把字符串中的字符全部转换为小写字符
									String str4 = "WuZongNing";
									System.out.println(str4.toLowerCase());
									//改：public String toUpperCase()  把字符串中的字符全部转换为大写字符
									System.out.println(str4.toUpperCase());
									//改：public String replace(CharSequence target, CharSequence replacement) 
									//    public String replace(char oldChar, char newChar)          使用指定的字符值target替换replacement字符值,如果没有指定的字符值则返回原字符串
									System.out.println(str1.replace("uzo", "sha"));
									System.out.println(str1.replace('o', 'f'));
									//改：public String replaceAll(String regex, String replacement)  使用给定的replacement字符串替换所有regex字符串,如果regex在原字符串中没有，则返回原字符串
									String str5 = "wu,zhong,ning,sgabi";
									System.out.println(str5.replaceAll(",", "B"));
									//改：public String replaceFirst(String regex, String replacement)  使用给定的replacement字符串替换圆字符串中第一个regex字符串,如果regex在原字符串中没有，则返回原字符串
									String str6 = "wu,ning,ning,sgabi";
									System.out.println(str6.replaceFirst("ning", "sha"));
								}	
			 String常用查询方法
			 					public static void main(String[] args) {
									String str = "Hello,JavaJava";
									//第一次出现的索引
									System.out.println(str.indexOf('a'));
									System.out.println(str.indexOf("Java"));
									//最后一次出现的索引
									System.out.println(str.lastIndexOf('a'));
									System.out.println(str.lastIndexOf("Java"));
									//使用索引查找字符
									System.out.println(str.charAt(5));
								}	
			String常用比较方法：== 和 equals()    当比较基本数据类型的数值时，使用 == 可以比较是否相等；当比较引用数据类型时，== 和 equals() 比较的是内存地址值
																						String类已经重写了equals() 方法，比较的是内容而不是内存地址值
								public static void main(String[] args) {
									//String类常用比较方法
									//boolean equalsIgnoreCase(String str) 将此String字符串与另一个String比较，不考虑大小写
									String str = "wuzongning";
									System.out.println(str.equalsIgnoreCase("WuZongNing"));
									//int compareTo(String value) 按字典顺序比较两个字符串（如果两个字符串的第一个字符不相同则比较此两个字符，否则比较两个字符串的第二个字符，以此类推）
									//		考虑大小写				       如果两个字符串相等则返回0，如果两个字符串不相同，返回值是比较的两个字符ASCII值之差（前面的字符见否面的字符）
									System.out.println("1bc".compareTo("1B3"));
									//用法与上面一个相同，不考虑大小写
									System.out.println("1b3".compareToIgnoreCase("1B3"));
									//bool startsWith(String value)  检查一个字符串是否以参数value字符串开始
									System.out.println(str.startsWith("wu"));
									//bool endsWith(String value)    检查一个字符串是否以参数value字符串结束
									System.out.println(str.endsWith("ning"));
								}																				
		基本数据类型转换为String类型
							  public static void main(String[] args) {
									//int ---> String
									//public static String valueOf(基本数据类型 变量)
									int a = 10;
									String str1 = String.valueOf(a);
									System.out.println(str1);
									//double ---> String
									double b = 3.14;
									String str2 = String.valueOf(b);
									System.out.println(str2);
									//更简洁的方法：快速把一个基本类型的数值转换为String
									//直接在该数据类型后添加 +""，快速转换
									String str3 = 123 + "";
									String str4 = 3.1415 + "";
									System.out.println(str3);
									System.out.println(str4);
									//创建Student类
									Student student = new Student("吴宗宁");
									String str5 = student + "";
									System.out.println(str5);
								}									
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

StringBuffer类：
								如果程序对这种附加字符串的需求很频繁，系统会频繁在内存中创建String对象，造成性能下降，所以并不建议使用 + 来进行频繁的字符串链接
								这时应该使用java.lang.StringBuffer类
								StringBuffer类代表可变字符序列
								StringBuffer类称为字符串缓冲区，它的工作原理是：预先申请一块内存，存放字符序列。如果字符序列满了，会重新改变缓存区的大小，以容纳更多的字符序列。
								StringBuffer是可变对象，这个与String最大的不同，与数组也不一样，数组声明创建了数据空间后，不能再进行变化长度
								StringBuffer类的构造方法
											StringBuffer()   构造一个不带字符的字符串缓冲区，其初始容量为16个字符
											StringBuffer(String Str)    构造一个字符串缓冲区，并将其内容初始化为指定的字符串内容
								StringBuffer常用方法     append() 拼接    insert() 插入		
											eg：
													public static void main(String[] args) {
														//常用的创建StringBuffer类的构造方法
														StringBuffer sb1 = new StringBuffer();        //无参时初始化容为16个字符（字符串缓冲区）
														StringBuffer sb2 = new StringBuffer("Hello"); //有参时初始化为指定的字符串内容
														System.out.println(sb1.length());
														//常用方法      拼接  append()
														sb2.append("World");
														System.out.println(sb2);
														//插入  insert()
														sb2.insert(0, "Java ");
														System.out.println(sb2);
														//一个引用类型转换为String ---> toString()
														String str = sb2.toString();
														System.out.println(str);
														//指定位置变换字符
														sb2.setCharAt(0, 'A');
														System.out.println(sb2);
														//删除指定开始与结尾-1之间的字符串
														sb2.delete(5, 10);
														System.out.println(sb2);
														//删除指定下标字符
														sb2.deleteCharAt(5);
														System.out.println(sb2);
														//字符串替换  指定开始位置与结束位置之间的字符串替换成需要的字符串
														sb2.replace(5, 9, "吴宗宁");
														System.out.println(sb2);
													}
									作业：
													public static void main(String[] args) {
														//反转   --->  "123456"转换为 "654321"
														//使用普通方法
														String str = "123456";
														//字符串转换为字符数组  char[]
														char[] chs = str.toCharArray();
														String result = "";
														for(int i = chs.length-1; i >= 0; i--){
															result += String.valueOf(chs[i]);
														}
														System.out.println(result);
														//使用StringBuffer类
														System.out.println(str);
														StringBuffer sb = new StringBuffer(str);		
														System.out.println(sb.reverse().toString());
														System.out.println(sb);
													}
StringBuilder类： StringBuilder类与StringBuffer类使用方式类似
									StringBuilder类 表示可变字符序列 --->  线程不安全
									StringBuffer类  表示可变字符序列 --->  线程安全（做了同步处理）	
									StringBuilder类与StringBuffer类的用法完全一致，唯一的区别是StringBuffer是线程安全而StringBuilder不是线程安全的。
									StringBuilder类使用与单线程   StringBuffer类使用与多线程，所以StringBuilder在大多数实现中比StringBuffer要快					

Math类：
				Math类中有很多关于数学的计算方法，Math类中的所有方法均为静态的
				Math类的常用方法：
													//静态倒入:当使用一个类里面的静态方法或静态变量时，每次都需要写类名，如果不想写类名可以考虑使用静态导入 -->Import static 包名.类名.sin; 或 Import static 包名.类名.*;
													import static java.lang.Math.*;
													public class MathTest1 {
														public static void main(String[] args) {
															//System.out.println(Math.E);
															System.out.println(E);  //静态倒入
															//System.out.println(Math.PI);
															System.out.println(PI);
															//绝对值
															System.out.println(Math.abs(-4));
															//sin
															System.out.println(Math.sin(180));
															//指数幂
															System.out.println(Math.pow(4,2));
															//平方根
															System.out.println(Math.sqrt(16));
															//四舍五入
															System.out.println(Math.round(3.5415));
															//最大最小值
															System.out.println(Math.max(15, 45.3));
															System.out.println(min(12.5, 10.6));
															//随机数  0 ~ 1.0  大于0 小于1
															double  randomNumber = Math.random();
															System.out.println(randomNumber);
															//随机数 1 ~ 100
															int randomNumber1 = (int)(Math.random()*20)+1;
															System.out.println(randomNumber1);
														}
													}	
													//设计一个获取随机数的方法
													public static int getRandom(int start,int end){
														//设制一个方法实现获取任意数字范围的随机数（不包括范围大的）
														int random = (int)(Math.random() * (end - start)) + start;
														return random;
														//return (int)(Math.random() * (end - start)) + start;
													}	

Random类：
					此类用于生成随机数
									（1）Random();  创建一个新的随机数生成器
											  public static void main(String[] args) {
													Random random = new Random(); 
													//范围在 -2的31次方  ~ 2的31次方-1
													System.out.println(random.nextInt());
													//范围在 从0开始到指定的数之间的随机数，不包括指定的数
													System.out.println(random.nextInt(10));
												}
									（2）Random(long seed);   种子数 --->  只要种子数相同，顺序输出的随机数相同   
												public static void main(String[] args) {
													//有种子数的随机数
													Random random = new Random(100);
													System.out.println(random.nextInt());
													System.out.println(random.nextInt(15));
													//种子数相同，产生固定的随机数也相同
													Random random1 = new Random(100);
													System.out.println(random1.nextInt());
													System.out.println(random1.nextInt(15));
												}

Calendar类：
						Calendar类是一个时间日历类 --> 日期       Calendar类是一个抽象类（不能实例化）
						Calendar类的对象必须通过静态方法getInstance() 来获取
						获取年月日之前必须采用get()获得  --->  int get(int field)
						public static void main(String[] args) {
							//获取Calendar对象
							Calendar calendar = Calendar.getInstance();
							//获取年月日
							System.out.println("年："+calendar.get(Calendar.YEAR));
							System.out.println("月："+(calendar.get(Calendar.MONTH)+1));
							System.out.println("日："+calendar.get(Calendar.DATE));
							//时分秒
							System.out.println("时："+calendar.get(Calendar.HOUR));
							System.out.println("分："+calendar.get(Calendar.MINUTE));
							System.out.println("秒："+calendar.get(Calendar.SECOND));
							//第几天
							System.out.println("当前年的第几天："+calendar.get(Calendar.DAY_OF_YEAR));
							System.out.println("当前月的第几天："+calendar.get(Calendar.DAY_OF_MONTH));
							System.out.println("当前周的第几天："+calendar.get(Calendar.DAY_OF_WEEK));
							//当前周的星期几的基础上加3天
							calendar.add(Calendar.DAY_OF_WEEK, 3);
							System.out.println("当前周的第几天："+calendar.get(Calendar.DAY_OF_WEEK));
							//上面加了天数，年月的天数也加了3天
							System.out.println("当前年的第几天："+calendar.get(Calendar.DAY_OF_YEAR));
							System.out.println("当前周的第几天："+calendar.get(Calendar.DAY_OF_MONTH));
						}						

BigInteger类：
							能表示比Integer更大的数字
							public static void main(String[] args) {
								//输出Integer最大值最小值
								System.out.println(Integer.MAX_VALUE);
								System.out.println(Integer.MIN_VALUE);
								//创建BigInteger对象
								BigInteger biginteger1 = new BigInteger("2147483647");
								BigInteger biginteger2 = new BigInteger("2");
								//输出比Integer最大值大的数
								System.out.println("Integer最大值加2："+biginteger1.add(biginteger2));
								System.out.println("Integer最大值减2："+biginteger1.subtract(biginteger2));
								System.out.println("两个Integer最大值相加："+biginteger1.add(biginteger1));
								System.out.println("Integer最大值乘2："+biginteger1.multiply(biginteger2));
								System.out.println("Integer最大值除以2："+biginteger1.divide(biginteger2));
							}
							
BigDecimal类：
							表示浮点数
							public static void main(String[] args) {
								//输出两个浮点数相加减
								System.out.println("两个浮点数相减："+(0.10-0.01));//应该输出的是0.09，但是输出是0.09000000000000001
								//创建BigDecimal对象
								BigDecimal bigdecimal1 = new BigDecimal("0.10");
								BigDecimal bigdecimal2 = new BigDecimal("0.01");
								//输出两浮点数之差
								System.out.println("两个浮点数相减："+bigdecimal1.subtract(bigdecimal2));
								System.out.println("两个浮点数相加："+bigdecimal1.add(bigdecimal2));
								System.out.println("两个浮点数相乘："+bigdecimal1.multiply(bigdecimal2));
								System.out.println("两个浮点数相除："+bigdecimal1.divide(bigdecimal2));
							}

正则表达式：
						所谓的正则表达式就是表达式的描述符合一定规则的字符串
						正则表达式的应用主要有：判断功能   分割功能   替换功能   获取功能
						判断功能：
											public static void main(String[] args) {
												//正则表达式 判断功能
												//手机检验规则（以1开头，第二位为3或8）
												String phone = "18377778975";
												String regex1 = "[1][3|8]\\d{9}";
												boolean flag = phone.matches(regex1);
												System.out.println(flag);
												//校验邮箱
												String email = "wuzong_ning@188.com.cn";
												String regex2 = "\\w+@\\w+(.\\w+)+";
												boolean hh = email.matches(regex2);
												System.out.println(hh);
											}
					分割功能：
											public static void main(String[] args) {
												//正则表达式 分割功能、
												//将 "0-14-22-60-130" ---> int[]
												String age = "0-14-22-60-130";
												String[] str = age.split("-");
												//创建int数组
												int[] array = new int[str.length];
												//String ---> int
												for(int i = 0; i < array.length; i++){
													array[i] = Integer.parseInt(str[i]);
												}
												//输出数组
												System.out.println(Arrays.toString(array));
											}
				 替换功能：	 
				 							public static void main(String[] args) {
												//正则表达式 替换功能
												//电话号码 18818877374 转换为 188****7374
												String cardNumber = "18818877374";
												String regex = "(\\d{3})(\\d{4})";
												String newCard = cardNumber.replaceAll(regex, "$1****");
												System.out.println(newCard);
											}
				 获取功能：   
				 							public static void main(String[] args) {
												//正则表达式  获取功能
												String str = "我的QQ号是,1234567,我朋友的QQ是,6695166,吴宗宁";
												String regex = "\\b\\d+\\b";
												Pattern pattern = Pattern.compile(regex);
												Matcher matcher = pattern.matcher(str);
												//循环找
												while(matcher.find()){    //查找
													System.out.println(matcher.group());   //查找到的内容
												}
											}
---------------------------------------------------------------------------------------------------------------------------

集合：
		（1）集合是Java API所提供的一系列类（List接口、Set接口、Map接口），可以用于动态存放多个对象，注意：长度可以变化，集合只能存放对象
		（2）集合与数组的不同在于，集合是大小可变的序列（长度可变），而且元素类型可以不受限定，只存放引用数据类型（基本数据类型不可以，基本数据类型的包装类可以）
		（3）集合类全部支持泛型，泛型是一种数据安全的用法 ---> <T>
		Java的集合框架从整体上可以分为两大家族：
		（1）Collection接口：该接口下的所有子孙均存储的是单一对象，通常用 add() 方法存储
		（2）Map接口：该接口下的所有子孙均存储的是key-value(键值对)形式的数据
		另外还有三个分支，均为上述两大家族服务的：
		 1）Iterator(迭代器)：主要用于遍历Collection接口的及其子类而设计 ---> 迭代：循环、遍历（Iterator 专业、专门用于集合）
		 2）Comparator(比较器)：在集合中存储对象的时候，用于对象之间的比较
		 3）Collections(工具类)：里面提供了很多个静态方法，来对Collection集合进行操作
			
		Collection接口定义了存取对象的方法，有两个非常常用的子接口：List接口   Set接口
		（1）List接口：存放的元素有序（存放和输出）且允许有重复元素的接口集合
		（2）Set接口：存放的元素无序（存放和输出）不抱含重复元素的集合接口
		
		Collection接口内的常用方法：看文档
		
		List接口：重点掌握ArrayList和LinkedKist    
							在集合中，凡是以Array开头的实现类，一般都与数组有关；Linked开头的实现类一般与链表有关
				  List接口之ArrayList实现类：与数组有关
				  			ArrayList实现类的无参构造： ArrayList()   ---->   构造一个初始容量为10的空列表
				  			创建实例对象的语法格式：   父接口 实例对象名 = new 实现类();
						eg:
								public static void main(String[] args) {
									/*
									 * ArrayList集合的数据添加、遍历、删除、修改数据
									 （1）添加数据1，2，3，3
									 （2）遍历集合数据观察输出
									 （3）删除数据1
									 （4）将数据2修改为4，在遍历输出结果
									 */
									//创建ArrayList对象
									//创建集合对象通用的方式：父类名 实例对象名 = new 实现类名();
									List list = new ArrayList();
									//添加数据
									list.add(1);
									list.add(2);
									list.add(3);
									list.add(3);
									//for循环遍历
									for(int i = 0; i < list.size(); i++){
										System.out.println(list.get(i));
									}
									list.remove(0);
									list.set(0, 4);
									//增强for循环遍历
									for(Object num:list){
										System.out.println(num);
									}
								}
					List接口之LinkedList实现类：与链表有关
								 LinkedList实现类的无参构造： ArrayList()   ---->		构造一个空列表
								 LinkedList实现类用法和ArrayList实现类类似
						eg:
								public static void main(String[] args) {
									/*
									 * LinkedList集合的数据添加、遍历、删除
									 （1）添加数据：23，45，34，89，1
									 （2）使用增强for循环遍历
									 （3）删除数据89
									 */
									//创建LinkedList对象
									List list = new LinkedList();
									//添加数据
									list.add(23);
									list.add(45);
									list.add(34);
									list.add(89);
									list.add(1);
									//增强for循环遍历
									for(Object num: list){
										System.out.println(num);
									}
									//删除数据89
									list.remove(3);
									System.out.println("-------------------------");
									//增强for循环遍历
									for(Object num: list){
										System.out.println(num);
									}
								}
					ArrayList与LinkedList的区别			
							ArrayList：List接口的大小可变数组的实现
							LinkedList：List接口的链表的实现
							区别：
									（1）ArrayList实现类底层是通过动态数组实现，LinkedList实现类底层实现是通过链表结构实现的
									（2）ArrayList实现类插入元素和删除元素效率低（需要将插入或删除元素之后的元素往后挪），LinkedList实现类插入元素和删除元素效率高（只需要改变地址指向）
											 （频繁地插入和删除元素，优先考虑使用LinkedList实现类）
									（3）ArrayList实现类可以快速通过元素下标获得元素值，ArrayList实现类随机访问与获取元素值速度很快
											 LinkedList实现类通过首地址指向来获得元素值，LinkedList实现类随机访问与获取元素值速度低	
				
				Iterator迭代器：专门来遍历我们集合知中的元素，包括Set集合，这既是迭代器（循环、遍历）
								迭代器的获取：Iterator iterator = list.Iterator();
								迭代器常用方法：
																boolean hasNext()  ---> 判断有没有下一个元素
																E next()  --->   获取元素值和将指针指向下一个地址
													eg:
															  public static void main(String[] args) {
																	/*
																	 * 创建一个ArrayList集合，并往集合中添加数据：abc def ghi mnh,然后使用Iterator迭代器来输出集合数据元素
																	 */
																	//创建ArrayList对象
																	List<String> list = new ArrayList<String>();
																	list.add("abc");
																	list.add("def");
																	list.add("ghi");
																	list.add("mnh");
																	//获取Iterator迭代器对象
																	Iterator<String> iterator = list.iterator();
																	while(iterator.hasNext()){
																		//String str = (String)iterator.next();   没有使用泛型时需要使用强转类型
																		String str = iterator.next();    //使用泛型不需要强转
																		System.out.println(str);
																	}
																}
											
				泛型：
								没有泛型时：
													 1、装入集合的数据都会被当作Object对象来存放，conger失去了自己的实际类型
													 2、从集合中去除元素时，需要进行强制转换，效率低，容易产生错误
								  有泛型时：
								  				 1、在定义一个集合时就指定集合存储的对象的数据类型，限定存入集合时的元素类型
								  				 2、存入数据时只能存取泛型指定的数据类型，如果存入其他数据类型，则会编译错误
								  				 3、从集合中取出元素时，无需转型
								  				 
							泛型之泛型类：  
									语法格式：[访问修饰符 public] class 类名 <T>{ }  相当于声明T（任意引用类型）
											  eg：
											  		public class MyGenericityClass<T> {
															private T obj;
															public void setObj(T t){
																this.obj = t;
															}
															public T getObj(){
																return this.obj;
															}
														}	
														public class MyGenericityClassTest {
															public static void main(String[] args) {
																//创建泛型类
																MyGenericityClass<String> mgc = new MyGenericityClass<String>();
																mgc.setObj("吴宗宁");
																System.out.println(mgc.getObj());
																MyGenericityClass<Integer> mgc1 = new MyGenericityClass<Integer>();
																mgc1.setObj(33);
																System.out.println(mgc1.getObj());
															}
														}
						泛型之泛型方法：
									语法格式：[访问修饰符 public] <T> 返回值类型 方法名(T 参数名){  }
											  eg：
											  		public class MyGenericityMethod {
															//一个类中有一个方法，自己不知道传入什么类型的值进去
															//泛型方法
															public <T> void show(T t){
																System.out.println("数值："+t);
															}
														}
														public class MyGenericityMethodTest {
															public static void main(String[] args) {
																//创建对象
																MyGenericityMethod mgm = new MyGenericityMethod();
																mgm.show("南宁学院");
																mgm.show(3.14159);
																mgm.show(666);
															}
														}
					  泛型之泛型接口：  创建对象通用方法： 父接口 实例对象名 = new 实现类();  --->  List<String> list = new ArrayList<String>();
					      父接口语法格式：[访问修饰符 public] interface 接口名 <T>{  }
					      				eg：
					      						public interface IMyGenericity<T>{
															//public abstract void call(T t);
															void call(T t);
														}
								实现类语法格式：[访问修饰符 public] class 实现类名 <T> implements 父接口 <T>{   }
					  						eg：
					  								public class IMyGenericityImpl<T> implements IMyGenericity<T> {
															@Override
															public void call(T t) {
																System.out.println("数值："+t);
															}
														}
														public class IMyGenericityTest {
															public static void main(String[] args) {
																//创建对象 -->  父接口 实例对象名 = new 实现类();
																IMyGenericity<String> img = new IMyGenericityImpl<String>();
																img.call("三星A9");
																IMyGenericity<Double> img1 = new IMyGenericityImpl<Double>();
																img1.call(3001.0);
																img1.call((double)3001);
																img1.call(3001d);
															}
														}
				
				  扩展知识：了解即可  --->  Vector集合   Stack集合
				  		Vector集合：Vector类是一个元老级别的类，但是考虑一大部分的然已经习惯了使用Vector类，因此让Vector类时List接口的子类，才将其保留下来（兼容性）
				  								所以Vector类的使用于于ArrayList的使用没有太大的区别
				  								Vector原始方法：添加addElement()、获得数据元素elementAt()
				  												迭代器Enumeration、 判断是否有下一个元素hasMoreElements()、下一个元素nextElement（）
														eg：
																public static void main(String[] args) {
																	/*
																	 * 给Vector集合添加数据：Hello Java verygood
																	 * 使用for循环遍历
																	 * 使用迭代器遍历
																	 */
																	//创建Vector对象
																	Vector<String> vector = new Vector<String>();
																	vector.addElement("Hello");  //也可以使用add
																	vector.addElement("Java");
																	vector.addElement("verygood");
																	//for循环遍历
																	for(int i = 0; i < vector.size(); i++){
																		System.out.println(vector.elementAt(i));
																	}
																	//增强for循环遍历
																	for(String num: vector){
																		System.out.println(num);
																	}
																	//迭代器遍历
																	//获取迭代器对象 也可以使用Iterator迭代器
																	Enumeration<String> enumeration = vector.elements();
																	while(enumeration.hasMoreElements()){
																		System.out.println(enumeration.nextElement());
																	}
																}
									Stack集合：Stack集合模拟了栈的特性  --->  元素 “先进后出”
												 eg：
												 		 public static void main(String[] args) {
															//创建Stack对象          Stack用法与ArrayList类似
															Stack<String> stack = new Stack<>();
															stack.add("wuzongming");
															stack.add("吴宗宁");
															stack.add("HelloJava");
															//迭代器遍历
															Iterator<String> itertor = stack.iterator();
															while(itertor.hasNext()){
																System.out.println(itertor.next());
															}
															System.out.println("-----------------------------------");
															//Stack独有的方法
															while(!stack.empty()){  //true代表空   false代表不是空
																System.out.println(stack.pop());//pop腿栈（弹）      push进栈（推、压栈）
															}
														}		 	

					Set接口：Set系列中的容器类（存放引用数据类型），不允许存储重复的元素，Set中的元素无序（HashSet无序、TreeSet有序）
						 注意：实现Set接口的容器存储对象（引用数据类型）时，根据每个对象的哈希码值（通过哈希算法(散列算法)得出的一个数据）(自动调用hashCode()方法获得)用固定的算法算出它的存储索引(下标)，把对存放在一个叫做
						 			 散列表的相应位置（表元）中：如果对应的位置没有其它元素，就只需要直接存入；如果该位置已经有元素，就会将新对象跟该位置的所有对象进行比较(调用equals()方法)，以查看容器中是否已经存在该对象，若不存在，则存放该对象；若存在，就直接使用该对象
								HashSet类：HashSet类是Set接口实现类之一，使用较为广泛，无序
													 HashSet类是根据元素的哈希码来进行存放的，当取出时，也可以根据哈希码快速找到 			
												   注意：凡是有Hsah这个词的实现类，那么它一定实现了哈希算法
												   具体元素存放步骤狂吐看文档.....
											eg：
													public class Student {
														private String name;
														private int age;
														public Student(String name, int age) {
															this.name = name;
															this.age = age;
														}
														public String getName() {
															return name;
														}
														public void setName(String name) {
															this.name = name;
														}
														public int getAge() {
															return age;
														}
														public void setAge(int age) {
															this.age = age;
														}
														@Override
														public String toString() {
															return "Student [name=" + name + ", age=" + age + "]";
														}
														/*
														@Override  //自动生成
														public int hashCode() {
															final int prime = 31;
															int result = 1;
															result = prime * result + age;
															result = prime * result + ((name == null) ? 0 : name.hashCode());
															return result;
														}
														@Override
														public boolean equals(Object obj) {
															if (this == obj)
																return true;
															if (obj == null)
																return false;
															if (getClass() != obj.getClass())
																return false;
															Student other = (Student) obj;
															if (age != other.age)
																return false;
															if (name == null) {
																if (other.name != null)
																	return false;
															} else if (!name.equals(other.name))
																return false;
															return true;
														}*/
														
														//重写hashCode()
														public int hashCode() {
															return this.age*this.name.hashCode();
														}
														//重写equals()  比较元素是否相同
														public boolean equals(Object obj) {
															 //线判断对象类型书否相同  instanceof
															if(obj instanceof Student){
																//对象类型强制转换
																Student student = (Student) obj;
																//在进行比较属性值是否相同
																if(this.age == student.getAge()
																		&& this.name.equals(student.getName())){
																	return true;
																}
															}
															return false;
														}	
													}	
													public class HashSetTest2 {
														public static void main(String[] args) {
															/*
															 * 编写一个学生类，关注其姓名、年龄属性，并提供具有两个参数的构造方法，同时需要对其属性进行封装
															 * 再将该自定义的学生类存放入到HashSet中，
															 */
															//创建HashSet对象
															Set<Student> set = new HashSet<Student>();
															//存入元素时会自动调用hashCode() 和  equals() 方法
															set.add(new Student("小张",19));
															set.add(new Student("老王",28));
															set.add(new Student("李四",21));
															set.add(new Student("小张",19));
															//遍历
															for(Student student: set){
																System.out.println(student);
															}
														}
													} 
								TreeSet实现类：TreeSet类使用红黑构造（有序）对加入的元素进行排序存放（存放数据时，添加的下一个数据于之前数据比较后进行有序存放）
											两种方法：
														1.无参构造  TreeSet()  --->  构造一个新的空set，该set根据其元素的自然值顺序进行排序
														  eg：
														  		public class TreeSetTest2 {
																		public static void main(String[] args) {
																			/*
																			 * 编写一个老师类，关注其姓名、年龄，并提供一个具有这两个参数的构造方法，同时对其遍历
																			 * 王老师  33    龙老师  19   张老师  24    刘老师  23
																			 */
																			//创建TreeSet对象
																			Set<Teacher> set = new TreeSet<Teacher>();
																			//添加数据时，内部会自动去调用 compareTo() 方法
																			set.add(new Teacher("王老师",33));
																			set.add(new Teacher("龙老师",19));
																			set.add(new Teacher("张老师",24));
																			set.add(new Teacher("刘老师",23)); 
																			//for each 遍历
																			for(Teacher teacher: set){
																				System.out.println(teacher);
																			}
																		}
																	}
																	public class Teacher implements Comparable<Teacher>{
																		//姓名
																		private String name;
																		//年龄
																		private int age;
																		public Teacher(String name, int age) {
																			this.name = name;
																			this.age = age;
																		}
																		public String getName() {
																			return name;
																		}
																		public void setName(String name) {
																			this.name = name;
																		}
																		public int getAge() {
																			return age;
																		}
																		public void setAge(int age) {
																			this.age = age;
																		}	
																		@Override
																		public String toString() {
																			return "Teacher [name=" + name + ", age=" + age + "]";
																		}
																		@Override
																		public int compareTo(Teacher teacher) {
																			//比较此对象与指定对象 的顺序，如果该对象小于、等于或大于指定对象，则分别返回负整数、零或正整数
																			//此对象：本类对象this   指定对象：Teacher teacher
																			//按照年龄值从小到大顺序排序
																			if(this.age < teacher.getAge()){
																				return -1;
																			}
																			if(this.age > teacher.getAge()){
																				return 1;
																			}
																			return 0;
																		}	
																	}
														  2.有参构造   TreeSet(Comparator<? super E> comparator)  --->  需要传入一个Comparator比较器对象 
														  																											  --->  构一个新的空TreeSet，根据指定比较器进行排序
														 eg:	
														 			public class TreeSetTest3 {
																		public static void main(String[] args) {
																			/*
																			 * 编写一个Child类，=关注小孩姓名、身高（double）
																			 * 把小孩添加到TreeSet中，并通过身高值的大小来排序
																			 * 要求通过TreeSet的构造方法来比较身高值，而不是实现Comparable接口
																			 */
																			//创建TreeSet对象
																			Set<Child> set = new TreeSet<Child>(new Comparator<Child>() {
																				//匿名内部类    比较大小
																				@Override
																				public int compare(Child c1, Child c2) {
																					//通过身高值的大小来排序
																					if(c1.getHigth() > c2.getHigth()){
																						return -1;
																					}
																					if(c1.getHigth() < c2.getHigth()){
																						return 1;
																					}
																					return 0;
																				}
																			});
																			//添加数据
																			set.add(new Child("张三",180));
																			set.add(new Child("李四",170));
																			set.add(new Child("王五",175));
																			set.add(new Child("刘美",158));
																			//遍历
																			for(Child child : set){
																				System.out.println(child);
																			}
																		}
																	}
																	public class Child {
																		//姓名
																		private String name;
																		//年龄
																		private double higth;
																		public Child(String name, double higth) {
																			this.name = name;
																			this.higth = higth;
																		}
																		public String getName() {
																			return name;
																		}
																		public void setName(String name) {
																			this.name = name;
																		}
																		public double getHigth() {
																			return higth;
																		}
																		public void setHigth(double higth) {
																			this.higth = higth;
																		}
																		@Override
																		public String toString() {
																			return "Child [name=" + name + ", higth=" + higth + "]";
																		}
																	}																									 
											LikedHashSet实现类：LikedHashSet类是根据元素的哈希码进行存放，同时用链表记录元素的加入顺序
														eg：  
																	public class LinkedHashSetTest {
																		public static void main(String[] args) {
																			/*
																			 * 编写一个汽车类，关注其颜色、轮胎数，并写一个具有这两个参数的构造方法
																			 * 吧定义的汽车类传入LinkedHashSet实现类中
																			 */
																			//创建LinkedHashSet对象
																			Set<Car> set = new LinkedHashSet<Car>();
																			//添加数据   添加数据时会自动调用 hashcode() 和   equals() 
																			set.add(new Car("red",4));
																			set.add(new Car("yello",3));
																			set.add(new Car("black",8));
																			set.add(new Car("yello",3));
																			//遍历
																			for(Car car : set){
																				System.out.println(car);
																			}
																		}
																	}
																	public class Car {
																		//颜色
																		private String color;
																		//轮胎数
																		private int num;
																		public Car(String color, int num) {
																			this.color = color;
																			this.num = num;
																		}
																		public String getColor() {
																			return color;
																		}
																		public void setColor(String color) {
																			this.color = color;
																		}
																		public int getNum() {
																			return num;
																		}
																		public void setNum(int num) {
																			this.num = num;
																		}
																		@Override
																		public String toString() {
																			return "Car [color=" + color + ", num=" + num + "]";
																		}
																		@Override
																		public int hashCode() {
																			final int prime = 31;
																			int result = 1;
																			result = prime * result + ((color == null) ? 0 : color.hashCode());
																			result = prime * result + num;
																			return result;
																		}
																		@Override
																		public boolean equals(Object obj) {
																			if (this == obj)
																				return true;
																			if (obj == null)
																				return false;
																			if (getClass() != obj.getClass())
																				return false;
																			Car other = (Car) obj;
																			if (color == null) {
																				if (other.color != null)
																					return false;
																			} else if (!color.equals(other.color))
																				return false;
																			if (num != other.num)
																				return false;
																			return true;
																		}
																	}
													  
						Map接口：Map接口不是Collection接口的继承，而是与Collection同一级别的集合接口，Map接口定义了存储“键(key)-值(value)映射对”的方法，Map中不能有重复的“键”
										 Map实现类中存储的键值映射对是通过键来唯一标示的（不重复），Map底层的“键”是使用Set来存放的，因此存入Map中的映射对的“键”对应的类（自定义的类）必须重写hashCode()和equals()方法	
										 Map常用方法看文档！
										 HashMap是基于哈希码表的Map接口的实现，它是使用频率最高的一个容器，提供所有可选的映射操作，它内部对“键”用Set进行散列存放，所以根据“键”去取“值”的效率很高
										 eg1：
										 			public class HashMapTest1 {
														public static void main(String[] args) {
															//创建HashMap对象
															Map<String,String> map = new HashMap<String,String>();
															//添加元素
															map.put("s001", "zhangsan");
															map.put("s002", "lisi");
															map.put("s003", "wangwu");
															map.put("s001", "zhangsan2");
															map.put("s004", "qianliu");
															map.put("s005", "zhaoba");
															map.put("s006", "lisi");
															//输出  key是唯一的不能重复     value是不唯一的可以重复
															System.out.println(map);
															System.out.println("-----------------------------");
															//移除 s004  qianliu
															map.remove("s004");
															System.out.println(map);
															//获得所有key，存放在Set集合中
															Set<String> sets = map.keySet();
															//for each 循环遍历   把key当作一个整体处理
															for(String key : sets){
																//通过key获得value值
																String value = map.get(key);
																System.out.println(key+"="+value);
															}
															System.out.println("-----------------------------");
															//获得迭代器Iterator   把key当作一个整体处理
															Iterator<String> iterator = sets.iterator();
															while(iterator.hasNext()){
																String num = iterator.next();
																System.out.println(num+"="+map.get(num));
															}
															System.out.println("-----------------------------");
															//把key-value当成一个整体(对象)来做处理
															Set<Map.Entry<String, String>> entrys = map.entrySet();
															for(Map.Entry<String, String> entry : entrys){
																System.out.println(entry.getKey()+"="+entry.getValue());
															}
														}
													}
										eg2： 
													public class HashMapTest2 {
														public static void main(String[] args) {
															/*
															 * Key: 自定义类型Student; Value: String ---> Map<Student,String>
															 * Student属性：学号、姓名   封装性+构造方法
															 * 把Student类添加到HashMap集合中
															 */
															//创建HashMap对象
															Map<Student,String> map = new HashMap<Student,String>();
															//添加元素
															map.put(new Student(12,"张三"),"学霸");
															map.put(new Student(15,"王五"),"学渣");
															map.put(new Student(12,"张三"),"学婊");
															System.out.println(map);
															//把key-value当成一个整体(对象)来做处理
															Set<Map.Entry<Student, String>> entrys = map.entrySet();
															for(Map.Entry<Student, String> entry : entrys){
																System.out.println(entry.getKey()+"="+entry.getValue());
															}
														}
													}
													public class Student {
														//属性  学号
														private int stuID;
														//姓名
														private String name;
														public Student(int stuID, String name) {
															this.stuID = stuID;
															this.name = name;
														}
														public int getStuID() {
															return stuID;
														}
														public void setStuID(int stuID) {
															this.stuID = stuID;
														}
														public String getName() {
															return name;
														}
														public void setName(String name) {
															this.name = name;
														}
														@Override
														public String toString() {
															return "Student [stuID=" + stuID + ", name=" + name + "]";
														}
														@Override
														public int hashCode() {
															final int prime = 31;
															int result = 1;
															result = prime * result + ((name == null) ? 0 : name.hashCode());
															result = prime * result + stuID;
															return result;
														}
														@Override
														public boolean equals(Object obj) {
															if (this == obj)
																return true;
															if (obj == null)
																return false;
															if (getClass() != obj.getClass())
																return false;
															Student other = (Student) obj;
															if (name == null) {
																if (other.name != null)
																	return false;
															} else if (!name.equals(other.name))
																return false;
															if (stuID != other.stuID)
																return false;
															return true;
														}
														
													}
							TreeMap实现类：
															存放自定义的类型给key，需要进行排序 --->  1、实现Comparable接口[比较器]  2、往构造方法中传入一个Comparator参数
													eg1：
															public class TreeMapTest1 {
																public static void main(String[] args) {
																	//创建TreeMap对象
																	Map<String,String> map = new TreeMap<String,String>();
																	//添加元素
																	map.put("0", "b");
																	map.put("5", "k");
																	map.put("4", "s");
																	map.put("6", "e");
																	map.put("0", "a");
																	System.out.println(map);
																}
															}
												eg2： 
															public class TreeMapTest2 {
																public static void main(String[] args) {
																	/*
																	 * 往TreeMap<Book,String>中添加自定义书本类，关注书本的书名。价格，并对这些属性进行封装
																	 * 同时写一个有着两个参数的构造方法
																	 * 业务需求：1.价格从低到高进行排序  2.如果价格相同则根据书名来进行排序
																	 */
																	//创建TreeMap对象
																	Map<Book,String> map = new TreeMap<Book,String>();
																	map.put(new Book("计算机网络1",99.5), "偏贵");
																	map.put(new Book("自动控制",10.5), "偏贵");
																	map.put(new Book("计算机网络",99.5), "偏贵");
																	System.out.println(map);
																}
															}
															public class Book implements Comparable<Book> {
																//属性  书名
																private String bookName;
																//价格
																private double price;
																public Book(String bookName, double price) {
																	this.bookName = bookName;
																	this.price = price;
																}
																public String getBookName() {
																	return bookName;
																}
																public void setBookName(String bookName) {
																	this.bookName = bookName;
																}
																public double getPrice() {
																	return price;
																}
																public void setPrice(double price) {
																	this.price = price;
																}
																@Override
																public String toString() {
																	return "Book [bookName=" + bookName + ", price=" + price + "]";
																}
																@Override
																public int compareTo(Book book) {
																	//1.价格从低到高进行排序
																	if(this.price < book.price){
																		return -1;
																	}
																	if(this.price > book.price){
																		return 1;
																	}
																	//2.如果价格相同则根据书名来进行排序
																	return this.bookName.compareToIgnoreCase(book.bookName);
																}
															}
												eg3：
															public class TreeMapTest3 {
																public static void main(String[] args) {
																	//创建TreeMap对象
																	Map<Book,String> map = new TreeMap<Book,String>(new Comparator<Book>() {
																		//匿名内部类
																		@Override
																		public int compare(Book b1, Book b2) {
																			if(b1.getPrice() < b2.getPrice()){
																				return -1;
																			}
																			if(b1.getPrice() > b2.getPrice()){
																				return 1;
																			}
																			return b1.getBookName().compareTo(b2.getBookName());
																		}
																	});
																	map.put(new Book("计算机网络1",99.5), "偏贵");
																	map.put(new Book("自动控制",10.5), "偏贵");
																	map.put(new Book("计算机网络",99.5), "偏贵");
																	System.out.println(map);
																}
															}	
									LinkedHashMap实现类    了解即可
												eg：
															public class LinkedHashTest {
																public static void main(String[] args) {
																	//创建LinkedHash对象
																	LinkedHashMap<Integer,String> linkedHash = new LinkedHashMap<Integer,String>();
																	//添加数据
																	linkedHash.put(3, "Hello");
																	linkedHash.put(1, "World");
																	linkedHash.put(2, "Java");
																	System.out.println(linkedHash);
																	//修改键值2
																	linkedHash.put(2, "JavaEE");
																	System.out.println(linkedHash);
																	//获取所有键值key，存入Set集合中
																	Set<Integer> set = linkedHash.keySet();
																	//获得Iterator迭代器
																	Iterator<Integer> iterator = set.iterator();
																	while(iterator.hasNext()){
																		Integer key = iterator.next();
																		System.out.println(key+"=="+linkedHash.get(key));
																	}
																}
															}		
									Propertise实现类   了解即可
												eg：	
															public class PropertiseTest {
																public static void main(String[] args) {
																	//创建一个属性文件，命名为pro.txt，存放于工程的src目录中
																	//当前线程的ClassLoader获得资源IO流
																	InputStream inputStream = Thread.currentThread().getContextClassLoader().getResourceAsStream("pro.txt");
																	try {
																		//加载并读取文件中value
																		Properties propertise = new Properties();
																		//从流中加载
																		propertise.load(inputStream);
																		//获得属性值  getProperty(String key)
																		String username = propertise.getProperty("userName");
																		System.out.println("username="+username);
																		String password = propertise.getProperty("password");
																		System.out.println("password="+password);
																	} catch (IOException e) {
																		e.printStackTrace();
																	}
																}
															}		
-----------------------------------------------------------------------------------------------------------------------------------

IO流																			
				   