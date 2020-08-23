#include<iostream>
using namespace std;


//值传递
//定义函数，实现两个数字进行交换函数
//如果函数不需要返回值，声明的时候可以写void
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
	//当我们做值传递的时候，函数的形参发生改变，并不会影响实参


	system("pause");
	return 0;
}