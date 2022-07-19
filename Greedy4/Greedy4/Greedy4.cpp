//백준 11399번:ATM

#include<iostream>
#include<algorithm>//sort 오름차순 정렬위해 선언 
using namespace std;
int main()
{
    int n;//사람의수 입력받고 
    int list[1000];//사람의수는 1000이하여서 배열크기설정
    int result = 0;//결과값
    cin >> n;//n입력
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];//사람의 수만큼 걸리는 시간 입력 
    }
    sort(list, list + n);//입력받은 숫자 오름차순 정렬 
    for (int i = 0; i < n; i++)
    {

        if (i == 0)//i 가 0이면 
        {
            result += list[i];//result 에 i[0] 더해주고 
        }
        else//i가 0이아니면 
        {
            int k = i;// int k와 i를 같게만들고 
            while (k >-1)//k가 -1보다 클때까지 무한루프니까 0까지 무한루프 
            {
                result += list[k];//result에 list[k]만큼 더해주고 
                k--;// k -1 이 -1이될때까지 무한루프 
                //k가 3이라면 list[3]+list[2]+list[1]+list[0] 이 되는거다 
            }
        }

    }
    cout << result; // 결과값 출력
}
