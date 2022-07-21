//백준 10162번 보물

#include <iostream>

using namespace std;
int n;//입력받을 요리시간 
int t[] = {300,60,10};// 5분 1분 10초 를 초단위로 배열
int result[] ={0,0,0};//abc번을 각각 몇번눌러줘야할지 계산
int i = 0;//증감
int main()
{
   
	cin >> n;//요리시간을 입력받고 
	if (n % 10 == 0)// n 이 10으로 나눴을때 나머지가 0이면 코드실행 아니면 -1이 나온다 
	{
		while (n > 0)//0이면 바로 while문 종료 
		{

			if (n - t[i] >= 0)//n에서 배열값을 뺏을때 0보다크면 진행 아니라면 다음 배열 가져오기위해 증감 
			{
				n = n - t[i];
				result[i] = result[i] + 1;//result i번째 증감 
			}
			else
			{
				i++;
			}
		}
		for (int i = 0; i < 3; i++)//답이 3개가 나와야하기때문에 for문 돌려서 cout
		{
			cout << result[i] << " ";
		}
	}
	else

	{
		cout << "-1";
	}

}

