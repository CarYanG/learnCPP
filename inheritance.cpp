/* auther:carl
   date:2016.04.29*/


/*
继承有三种方式，即公有(Public)继承、私有(Private)继承、保护(Protected)继承。
我们先讨论最常用的公有继承。公有继承就是将基类的公有成员变为自己的公有成员，基类的保护成员变为自己的保护成员。

对于公有继承，基类的成员能否访问，有以下特征
基类的私有成员：在派生类和外部都不可以访问。
基类的公有成员：在派生类和外部都可以访问。
基类的保护成员：在派生类可以访问，在外部不可以访问。
*/
#include<iostream>
#include<string>
using namespace std;

class CBase
{
	string name;
	int age;
public:
	string getName()
	{
		return name;
	}
	
	int getAge()
	{
		return age;
	}
protected:
	void setName(string s)
	{
		name=s;
	}
	void setAge(int i)
	{
		age=i;
	}
};

class CDerive:public CBase //用“public”指定公有继承
{
public:
	void setBase(string s,int i)
	{
		setName(s);  //调用基类的保护成员
		setAge(i);   //调用基类的保护成员
		//调用基类的私有成员
		//cout << name << "   " << age << endl;    //编译出错
	}
};

int main()
{
	CDerive d;
	d.setBase("abc",100);
	
	//调用基类的私有成员
		//cout << d.name << "   " << d.age << endl;    //编译出错
	//调用基类的公有成员
    cout << d.getName()<<"   "<< d.getAge()<< endl;
	//调用基类的保护成员
	//d.setName("xyz");    //编译出错
	//d.setAge(20);        //编译出错
	return 0;
}

