#include <iostream>
#include <thread>

using namespace std;

const int listSize = 4000000;


int Adding(int i)
{
	int sum = 0;
	for (int i; i < listSize; i + 2)
	{

	}
	return sum;
}

int main()
{
	int num[listSize];
	int value = 0;
	srand(time(NULL));

	for (int i = 0; i < listSize; i++)
	{
		num[i] = rand() % RAND_MAX;
	}

	thread t1 = thread(Adding, 0);
	thread t2 = thread(Adding, 1);

	cout << "Launching the threads!\n";

	t1.join();
	t2.join();

	return 0;
}