/* auther:carl
   date:2016.04.23*/
   
   
#include<iostream>
using namespace std;

class myclass
{
	int who;
	public:
		myclass(int n)
		{
			who=n;
			cout<<"构造函数调用"<<who<<endl;
		}
		~myclass()
		{
			cout<<"析构函数调用"<<who<<endl; 
		} 
		int id()
		{
			return who;
		}
};
void f1(myclass o)  //普通变量方式传递参数
{
	cout<<"外部函数调用"<<o.id()<<endl;
}
void f2(myclass *o)    //指针方式传递参数
{
	cout<<"外部函数调用"<<o->id()<<endl; 
}
void f3(myclass &o)  //引用方式传递参数
{
	cout<<"外部函数调用"<<o.id()<<endl; 
} 

int main()
{
	myclass x1(1);
	f1(x1);
	cout << "-------" << endl;
	myclass x2(2);
	f2(&x2); 
	cout << "-------" << endl;
	myclass x3(3);
	f3(x3);
	cout << "-------" << endl;
	return 0;
}

/*
从上面例子可以看出，用普通变量方式传递参数时，函数首先将参数复制一个副本，在函数体内使用的是副本。
这个副本和参数自身不是同一个地址。而指针方式和引用方式并不产生副本，函数体内用的真是参数自身。
需要注意的是，产生副本时调用了类的缺省“拷贝构造函数”，这个“拷贝构造函数”并不调用构造函数就产生了一个副本。
*/
