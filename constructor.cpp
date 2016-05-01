/* auther:carl
   date:2016.04.29*/
#include<iostream>
#include<string>
using namespace std;


/*
我们来看一下基类与派生的构造函数的调用顺序。创建时先基类后派生类。销毁时先派生类后基类。
*/
class CBase{
	string name;
	int age;

public:
	CBase(){
		cout<<"BASE"<<endl;
	}
	~CBase(){
		cout<<"~BASE"<<endl;
	}
};

class CDerive:public CBase{
	int age;
	public:
		CDerive(){
			cout<<"DERIVE"<<endl;
		}
		~CDerive(){
			cout<<"~DERIVE"<<endl;
		}
};

int main()
{
	CDerive d;
}
