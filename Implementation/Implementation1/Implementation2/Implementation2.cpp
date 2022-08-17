//이코테 예제 4-2 구현문제
#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;
	int count = 0;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				if (i % 10 == 3 || j / 10 == 3 || j % 10 == 3 || k / 10 == 3 || k % 10 == 3)
				{
					count++;
				}
			}
		}
	}
	cout << count;
}
