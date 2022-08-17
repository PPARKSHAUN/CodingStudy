
#include <iostream>
using namespace std;
int main()
{
    int n, m;//입력받을 n,m 선언 
    cin >> n >> m;// n,m 을 공백을 두고 입력을 받고 
    int list[100];// n은 100이하의 자연수 이기때문에 최대 100까지가능해서 배열 100 개설정
    int result = 0;// 행열최소값중 제일큰값 찾기위해 result 선언 
    for (int i = 0; i < n; i++)//입력받은 n만큼 돌려주고 
    {
        
        int min = 10001;//int min 은 계속 10001로 초기화
        for (int j = 0; j < m; j++)//입력받은 m 만큼 돌려주고
        {
            int input;//입력받을 값 
            cin >> input;// 입력
            if (min > input)//처음에는 10001 이지만 다음은 처음입력한값보다 다음입력값이 작으면
            {
                min = input;//그 입력값이 최소 입력값 
            }
          
        }
        list[i] = min;//list에 min을 넣어주고 
       
    }

    for (int i = 0; i < n; i++)// 최소값들 비교 for 
    {
        if (result < list[i])// 첫번째 값이 들어가고 다음값과 비교하여 큰수가 result 대입 
            result = list[i];
    }
    cout << result; // result 출력 
    

    
}
