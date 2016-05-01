/* auther:carl
   date:2016.04.29*/
#include<iostream>
#include<string>


/*

保护继承是将基类的公有成员和保护成员变成自己的保护成员，而基类的私有成员在派生类里本身就不能访问。
对于私有继承，基类的成员能否访问，有以下特征：
基类的私有成员：在派生类和外部都不可以访问。
基类的公有成员：在派生类可以访问，在外部不可以访问。
基类的保护成员：在派生类可以访问，在外部不可以访问。


三种继承方式的比较

从上面的结果来看，私有继承和保护继承作用完全一样。仔细一想其实还是有区别，区别是如果派生类再一次去派生其它类时，对于刚才的私有继承来说，
再派生的类将得不到任何成员。
而对于刚才的保护继承，仍能够得到基类的公有和保护成员。


			A类(基类)	B类(A的派生类)	C类(B的派生类)
公有继承	公有成员	公有成员		公有成员
			私有成员	(无)			(无)
			保护成员	保护成员		保护成员

私有继承	公有成员	私有成员		(无)
			私有成员	(无)			(无)
			保护成员	私有成员		(无)

保护继承	公有成员	保护成员		保护成员
			私有成员	(无)			(无)
			保护成员	保护成员		保护成员
 
*/
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

class CDerive : protected CBase {    //用“private”指定私有继承
public:
    void setBase(string s, int i) {
        setName(s);    //调用基类的保护成员
        setAge(i);     //调用基类的保护成员
        //调用基类的私有成员
        //cout << name << "   " << age << endl;    //编译出错
    }
    string getBaseName() {
        return getName();    //调用基类的公有成员
    }
    int getBaseAge() {
        return getAge();     //调用基类的公有成员
    }
};
int main ( )
{
    CDerive d;
    d.setBase("abc", 100);
   
    //调用基类的私有成员
    //cout << d.name << "   " << d.age << endl;    //编译出错
    //调用基类的公有成员
    //cout << d.getName() << "   " << d.getAge() << endl;    //编译出错
    cout << d.getBaseName() << "   " << d.getBaseAge() << endl;
   
    //调用基类的保护成员
    //d.setName("xyz");    //编译出错
    //d.setAge(20);        //编译出错
    return 0;
}
