/* auther:carl
   date:2016.04.19*/
#include<iostream>
using namespace std;

namespace na
{
	void print(int a)
	{
		cout<<"na::print"<<a<<endl;
	}
}

namespace nb
{
	using namespace na;
	void print2(int a,int b)  //这是nb自身的函数
	{
		print(a);  //na的函数
		print(b);  //na的函数
	}
	
	void print(int n)   //这也是nb自身的函数
	{
		cout<<"nb::print"<<n<<endl;
	}
}

namespace nc
{
	using nb::print2;      //指定只使用nb的print2()函数
	void print(int a,int b,int c)
	{
		print2(a,b);      //这是nb的函数
		nb::print(c);     //using中没有指定，所以这儿必须用nb::来指定
	}
}

int main()
{
	using namespace na;
	print(2);      //na的print()函数
	
//	using namespace nb;  //这样使用时，na和nb同时有效
//	print(3);            //编译系统不清楚究竟调用na和nb中的哪一个，因为函数名和参数相同
	
	using namespace nc;  //这样使用时，na和nc同时有效
	print(4,5,6);         //nc的print()函数的参数与na中的参数不同，所以这儿不出错。 
	
	using nb::print;      //指定下面用的print()函数是nb的函数
	print(7);
	
	return 0;
}
