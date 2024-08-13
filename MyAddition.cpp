#include <iostream>

mutex addMutex;

int add(int a, int b)
{
	addMutex.lock();
	int sum = (a+b);
	addMutex.unlock();
	return sum;
}

int subtract(int a, int b)
{
	return (a - b);
}

int main()
{
	return 0;
}