/* auther:carl
   date:2016.04.25*/
/*


“拷贝构造函数”和“赋值运算符”都是将对象的值复制一份然后传给另一对象。
这二个功能也是类本身就具有的，但有很多场合原封不动地复制给另外一个对象时反而会出错
，例如在成员函数中有动态分配内存，或者参数指针指向外部某一地址时，就有可能出错。

要避免这些错误，我们可以重载“=”运算符以及拷贝构造函数，将出错的因素排除。
下例中为了演示，故意将赋值运算符重载函数中不复制“姓名”，而拷贝构造函数中固定“年龄”。
*/

#include<iostream>
#include <string>
using namespace std;

class stuff{
	string name;
	int age;
public:
	stuff(string n,int a):name(n),age(a)
	{
		cout<<"构造函数   "<<name<<"------"<<age<<endl;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	
	stuff& operator = (stuff& x);   //赋值运算符重载
	
	stuff(stuff& x):name(x.name),age(20)  //拷贝构造函数重载
	{ 
		cout<<"拷贝构造函数  "<<name<<"------"<<age<<endl;
	}

};

	
	stuff& stuff::operator=(stuff &x)
	{
		age=x.age;
		cout<<"赋值运算符  "<<name<<"------"<<age<<endl;
		return *this;
	}
	
int main()
{
	stuff st1("你好",3);   //调用通常的构造函数
	stuff st2("你好，世界",10);  //调用通常的构造函数
	st2=st1;    //因为不产生新的实例，所以调用的是赋值运算符
	stuff st3=st1;    //因为产生新的实例，所以调用的是拷贝构造函数
	cout<<st1.getName()<<"------"<<st1.getAge()<<endl;
	cout<<st2.getName()<<"------"<<st2.getAge()<<endl;
	cout<<st3.getName()<<"------"<<st3.getAge()<<endl;
	
	return 0;
}
