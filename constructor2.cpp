/* auther:carl
   date:2016.04.29*/
   
/*
���в���ʱ���������봫�͸����ࡣע�������д��ݵķ���
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
	CDerive d("С��",24);
	return 0;
}
