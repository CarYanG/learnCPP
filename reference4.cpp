/* auther:carl
   date:2016.04.23*/
   
   
#include<iostream>
using namespace std;
int & f();
int x;
int main()
{
	f()=100;
	cout<<x<<endl;
	return 0;
}

int &  f()
{
	return x;
}

/*
上面这个函数的返回值是引用类型，通过函数结果的设置反过来去改变“源头”数据，这种“逆向引用”为C++增强了很多功能，当然也有许多需要注意的地方。
*/
