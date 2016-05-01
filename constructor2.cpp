/* auther:carl
   date:2016.04.29*/
   
/*
当有参数时，参数必须传送给基类。注意例子中传递的方法
*/
   
#include<iostream>
#include<string>
using namespace std;

class CBase{
	string name;
	
public:
	CBase(string s):name(s){
		cout<<"BASE"<<name<<endl;
	}
	~CBase(){
		cout<<"~BASE"<<endl;
	}
};

class CDerive:public CBase{
	int age;
	public:
		CDerive(string s,int a):CBase(s),age(a){
			cout<<"DERIVE:"<<age<<endl;
		}
		~CDerive(){
			cout<<"~Derive"<<endl;
		}
};

int main(){
	CDerive d("小雅",24);
	return 0;
}
