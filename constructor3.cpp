/* auther:carl
   date:2016.04.30*/
/*
当有三层继承时，参数要一层一层地传递下去
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
			cout<<"~CDerive"<<endl;
		}
};


class CSon:public CDerive{
	string id;
	public:
		CSon(string s1,int a,string s2):CDerive(s1,a),id(s2){
			cout<<"SON: "<<id<<endl;
		}
		~CSon(){
			cout<<"~Son"<<endl;
		}
};

int main(){
	CSon s("小雅",27,"8012");
	
}
