//백준 2839 : 설탕배달

#include <iostream>
using namespace std;

int n;
int result = 0;
int main()
{
	cin >> n;//배달해야할 설탕 kg 
	while (n > 0)// n이 0이될때까지 
	{
		if (n % 5 == 0)//n%5==0일때 -5 result++
		{
			n = n - 5;
			result++;
		}
		else if (n % 3 == 0)//n%5==0이아니라면 n%3==0이면 3을빼주고 result++
		{
			n = n - 3;
			result++;
		}
		else if (n > 5)// n%5,n%3 둘다 0이아니라면 n 이 5보다 크다면 5를 먼저빼고 위에 식 다시실행 
		{
			n = n - 5;
			result++;
		}
		else// 위에식 중에 하나라도 true가 되지않으면 result에 -1 대입후 wihle문 탈출 
		{
			result = -1;
			break;
		}

	}
	cout << result;
}