/* auther:carl
   date:2016.04.19*/

#include<iostream>
using namespace std;

namespace na
{
	namespace    //�������ֿռ�
	{
		int sum(int a,int b)
		{
			return a+b;
		}
	}
	
	int calc(int x,int y)
	{
		return sum(x,y);    //�ڲ����Ե����������ֿռ�ı�������
	} 
}

int main()
{
	 //cout << na::sum(5, 11) < < endl;  //��Ϊȱ����������֣������ⲿ���ܵ���
	cout<<na::calc(6,12)<<endl;
	return 0;
}
