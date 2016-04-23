/* auther:carl
   date:2016.04.19*/

#include<iostream>
using namespace std;

namespace na
{
	namespace    //无名名字空间
	{
		int sum(int a,int b)
		{
			return a+b;
		}
	}
	
	int calc(int x,int y)
	{
		return sum(x,y);    //内部可以调用无名名字空间的变量或函数
	} 
}

int main()
{
	 //cout << na::sum(5, 11) < < endl;  //因为缺少里面的名字，所以外部不能调用
	cout<<na::calc(6,12)<<endl;
	return 0;
}
