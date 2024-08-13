#include <iostream>

mutex addMutex;

int add(int a, int b)
{
	addMutex.lock();
	int sum = (a+b);
	addMutex.unlock();
	return sum;
}

int main()
{
	return 0;
}