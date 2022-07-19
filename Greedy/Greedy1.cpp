// Greedy1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;


int main()
{
	int N, M, K;
	int a[1000];
	int max= 0;
	int result = 0;
	int second = 0;
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] != max)
		{
			if (second < a[i])
			{
				second = a[i];
			}
		}
	}

	while (M != 0)
	{
		for (int i = 0; i < K; i++)
		{
			result += max;
			--M;
		}
		if (max == second)
		{
			for (int i = 0; i < K; i++)
			{
				result += max;
				--M;
			}
		}
		
		else
		{
			result += second;
			--M;
		}
	}
	cout << result;
}
