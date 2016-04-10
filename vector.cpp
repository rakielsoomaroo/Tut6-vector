
#include <iostream>

using namespace std;

template <typename T>
void push_back(T arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> "enter a value to add" >> arr[i] >> endl;

	}
}

int main()
{
	int arr[20];

	push_back(arr, 20);
	//sort(arr, 20);
}


