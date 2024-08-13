#include <iostream>

mutex addMutex;

mutex subMutex;

int add(int a, int b)
{
	addMutex.lock();
	int sum = (a+b);
	addMutex.unlock();
	return sum;
}

int subtract(int a, int b)
{
	subMutex.lock();
	int result = (a - b);
	subMutex.unlock();
	return result;
}

int main()
{
	return 0;
}