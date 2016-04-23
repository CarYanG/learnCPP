/* auther:carl
   date:2016.04.19*/

#include<iostream>
using namespace std;
namespace na
{
	namespace nb
	{
		namespace nc
		{
			int sum(int a,int b)
			{
				return a+b;
			}
		}
	}
}

namespace A=na::nb::nc;
int main()
{
	cout<<na::nb::nc::sum(5,11)<<endl;
	cout<<A::sum(6,12)<<endl;
	return 0;
}

