/* auther:carl
   date:2016.04.19*/
#include<iostream>
using namespace std;
namespace na{
	void print(int n){   //�����ֿռ�nb�ĺ�������ͬ
		cout <<"na:print"<<n<<endl;
	}
	
}

namespace nb{
	void print(int n){   //�����ֿռ�nb�ĺ�������ͬ
		cout <<"nb:print"<<n<<endl;
	}
	
}

namespace na        // ͬһ�����ֿռ���Զ�����
{
	void print2(int a,int b)
	{
		print(a);
		print(b);
	}
}

int main()
{
	na::print(3); // ָ��na�µ�print����
	nb::print(4);  // ָ��na�µ�print����
	na::print2(5,6);  // ָ��na�µ�print2����
	return 0;
}
