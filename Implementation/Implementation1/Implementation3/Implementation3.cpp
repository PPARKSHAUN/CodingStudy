//이코테 왕실의 나이트 문제
#include <iostream>
#include <string>
using namespace std;

int result = 0;

int main()
{
    string input;
    cin >> input;

        int x = input[0]-'a'+1;
        
        int y = input[1]-'0';
        
    
        if (x - 2 >= 1&&y-1>=1)
        {
            result++;
        }
        if (x - 2 >= 1 && y + 1 <= 8)
        {
            result++;
        }
        if (x + 2 <= 8 && y - 1 >= 1)
        {
            result++;
        }
        if (x + 2 <= 8 && y + 1 <= 8)
        {
            result++;
        }
        if (y - 2 >= 1 && x - 1 >= 1)
        {
            result++;
        }
        if (y + 2 <= 8 && x - 1 >= 1)
        {
            result++;
        }
        if (y - 2 >= 1 && x +1 <= 8)
        {
            result++;
        }
        if (y + 2 <= 8 && x + 1 <= 8)
        {
            result++;
        }
        cout << result;
}

