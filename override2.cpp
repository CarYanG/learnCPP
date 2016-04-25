/* auther:carl
   date:2016.04.25*/

/*
运算符重载对于普通函数和成员函数来说，格式稍有不同。
//单目运算符
成员函数：      返回值类型  operator  运算符  () ;
普通函数：      返回值类型  operator  运算符  (对象的类型) ;

//双目运算符
成员函数：      返回值类型  operator  运算符  (对象的类型) ;
普通函数：      返回值类型  operator  运算符  (对象的类型1, 对象的类型2) ;

//函数调用
成员函数：      返回值类型  operator  (任意的参数列) ;

//数组元素
成员函数：      返回值类型  operator[]  (参数类型) ;

//增1/减1运算符
成员函数：      返回值类型  operator  运算符  (int) ;
普通函数：      返回值类型  operator  运算符  (对象的类型, int) ;
*/
#include<iostream>
#include<string>
using namespace std;

class stuff{
	string name;
	int age;
public:
	stuff(string n,int a):name(n),age(a)
	{
		cout<<name<<"------"<<age<<endl; 
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	
	void operator +(int x);  //运算符重载的定义
	void operator +(string s);   //运算符重载的定义
};

void stuff::operator +(int x)   //运算符重载的实装
{
	age=age+x;
}

void stuff::operator +(string s)  //运算符重载的实装
{
	name=name+s;
}

int main()
{
	stuff st2("你好",3);
	st2+2;  //+运算
	st2+",世界";  //+运算
	cout<<st2.getName()<<"------"<<st2.getAge()<<endl;
	return 0;
}


