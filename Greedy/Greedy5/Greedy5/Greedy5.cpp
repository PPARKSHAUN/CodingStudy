//백준 5585 번 
#include <iostream>
using namespace std;

int a;//입력받을 숫자
int b[] = { 500,100,50,10,5,1 }; // 잔돈
int result = 0;//결과값
int i = 0;//증감식이용
int main()
{
    
    cin >> a;
    a = 1000 - a;//a 잔돈대입 
    while(a>0)//a==0이 되면 멈추게 
    {
        
        if (a / b[i] >=1)//만약 a/b[i] 값이 1보다 크거나 같다면
        {
           
            a =a-b[i];//a에서 잔돈만큼 빼주고 
            result++;//결과값 ++
        }
        else// a/b[i]값이 1보다 작으면 
        {
            i++;//잔돈 다음값 넘기기위해 증감 
        }
      
    }
    cout << result;
}

