// Programming.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>

using namespace std;



int main()
{
	const int size = 5;
	int arr[] = { 2,4,6,5,9 };
	int sum = 6;

	for (int i = 0;i < size; i++)
	{
		for (int j = i + 1; j<size ; j++)
		{
			if (arr[i]+arr[j] == sum)
			{
				cout << arr[i] << " " << arr[j] << endl;
			}
			
		}
	}

	return 0;
}