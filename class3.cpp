/* auther:carl
   date:2016.04.23*/

/*
����ʵ����3�ַ���

�˽�����ʵ�������ַ�����ϸ΢�����Ǻ���Ҫ�ģ�
����Ϊ������
�����������ƣ�
����Ϊָ�벢��̬���ɡ�

ע�⣺ָ��ĳ�Ա�á�->���������á�.����
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{ 
	string strA("���"); //ֱ�ӵ��ù��캯������ʵ��
	cout<<strA<<"     "<<strA.length()<<endl;
	
	string strB;     //�ȵ��ù��캯�����ɿ��ַ���ʵ��
	strB=string("��Ҳ��");   //�ٵ��ù��캯����������ʵ����Ȼ���Ƹ�strBʵ��������ʵ����������
	cout<<strB<<"     "<<strB.length()<<endl;  //�������ٵķ����Ľ����ͬ
	
	string *strC;  //�ȶ���һ��ָ�룬��δ����ռ�
	cout<<strC<<endl;
	cout<<&strC<<endl;
	strC=new string("Hello world");  //��̬���ù��캯������ʵ�����ٽ�ʵ����ַ����ָ�����
	cout<<strC<<endl;   
	cout<<&strC<<endl;
	cout<<*strC<<"     "<<strC->length()<<endl; 
	delete strC; //ǧ��Ҫ�����ͷ�
	
	return 0;
}

