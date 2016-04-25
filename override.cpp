/* auther:carl
   date:2016.04.25*/

/*

写法一是在构造函数体中赋值，赋值前成员变量已经有了地址空间，尚未有值。
写法二是一种特殊方法，是在成员变量分配空间的同时将参数的值赋给成员变量。
虽然写法二用的人少，但明显优于写法一。

事实上，如果将成员变量的定义改为常量，“const string name;”和“const int age;”，
写法一将出错，而写法二仍然正确。
*/
#include<iostream>
#include<string>
using namespace std;

class stuff{
	 string name;
	 int age;
public:
	stuff()   //这是写法一
	{
		cout<<name<<"------"<<age<<endl;
		cout<<&name<<"------"<<&age<<endl;
		name="空";
		age=0;
		cout<<name<<"------"<<age<<endl; 
	}
	
	stuff(string n,int a):name(n),age(a)         //这是写法二
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
};

int main()
{
	stuff st2;
	stuff st1("你好",3);
	return 0;
}

