#include<iostream>
using namespace std;


//ֵ����
//���庯����ʵ���������ֽ��н�������
//�����������Ҫ����ֵ��������ʱ�����дvoid
void swap1(int num1, int num2)
{

	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

}


int main3() {

	int a = 10;
	int b = 20;
	swap(a, b);
	//��������ֵ���ݵ�ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��


	system("pause");
	return 0;
}