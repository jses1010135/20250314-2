#include<iostream>
#include<vector>
using namespace std;
//解方程式
float f(float x)
{
	return (3*x * x+5*x-1);
}
float df(float x)
{
	return (6 * x+5);
}
int main()
{
	float x = 0;
	while (f(x) > 0.001 || f(x) < -0.001)
	{
		x = x - f(x) / df(x);
		cout << "x=" << x << " f(x)=" << f(x) << endl;
	}
	return 0;
}
//積分
//int main()
//{
//	float e = 2;
//	float k = 1;
//	for (int i = 2; i < 10; i++)
//	{
//		k = k * i;
//		e += 1/k;
//	}
//	cout << "sum=" << e << endl;
//	return 0; 
//	log();
//}

//float log()
//{
//	float sum = 0, a = 3, b = 5, n = 10000;
//
//	for (int i = 0; i <= n; i++)
//	{
//		float x = a + i * (b - a) / n;
//		sum += f(x);
//		
//
//	}
//	cout << "f(x)的積分值為：" << sum * (b - a) / n << endl;
//	return log;
//
//}