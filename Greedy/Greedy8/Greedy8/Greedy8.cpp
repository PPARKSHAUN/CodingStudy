//백준 11047번 동전0

#include <iostream>
using namespace std;
int n;
int k;
int a[1000000];
int result;
int main()
{
    cin >> n >> k; //n k 입력을 받고 
    

    for (int i = 0; i < n; i++)//n만큼 a배열에 입력 
    {
        cin >> a[i];
    }
    while (k > 0)//k원이 0이될때까지 반복 
    {
        if (k - a[n-1] >=0 )//n-1한이유는 배열은 0부터 시작하기때문에 1이적어서 k-배열값>=0보다 크거나 같을때만 
        {
            k = k - a[n-1];// 배열값빼주고 
            result++;//결과값 증감 
        }
        else
        {
            n--;//아닌경우 n-- 인이유는 오름차순으로 입력이되기때문에 끝에값부터 검토를해야 최솟값을 구할수있다 
        }
      
    }
    cout << result;
}
