//使用蒙特卡洛算法估算圆周率
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
double Pi( const long i)
{
	srand(time(NULL));
	double x = 0.0, y = 0.0;
	long sum = 0;
	for (long j=1; j < i; j++)
	{
		x = (double)(rand()) / (double)RAND_MAX;
		y = (double)(rand()) / (double)RAND_MAX;
		if (x*x + y*y <= 1)
		{
			sum++;
		}
	}
	return 4.0*((double)sum / (double)i);
}
int main()
{
	int i;
	while (1){
		cout << "please input a number:";
		cin >> i;
		if (i <= 0)
		{
			cout << "Wrong! " << endl;
			exit(1);
		}
		double  pi = Pi(i);
		cout.precision(50);
		cout << "模拟" << i << "次，pi = " << pi << endl;
	}
		return 0;
}
