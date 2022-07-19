
#include <iostream>
using namespace std;
int main()
{
    
    int n, k;
    cin >> n >> k; //n 과 k 가 공백을 두고 입력을 받고
    int result = 0;//결과를 위해 선언 
    
    while (n!=1)//n이 1이될때까지 무한반복 
    {
        if (n % k == 0) // n/k로 나눠지면 나머지는 0 이기 때문에 true 이면 
        {
            n=n / k; // n/k
            result++; // result 1 증가
        }
        else//안 나눠지면 
        {
            --n; // n 1감소
            result ++; // result 1 증가 
        }
        
        
    }
    cout << result;//결과
}

