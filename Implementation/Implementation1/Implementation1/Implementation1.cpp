//이코테 예제 4-1 상하좌우 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 1, y = 1;
    string a;
    int input=0;
    cin >> input;
    cin.ignore();
   

    getline(cin,a);
  
    
    for (int i = 0; i < a.size(); i++)
    {
        char plan = a[i];
       
        switch (plan)
        {
        case 'L':
            if (y > 1)
            {
                y = y - 1;
            }
            else 
            {
                
            }
            break;
        case 'R':
           
            if (y < input)
            {
                y = y + 1;
            }
            else
            {
                
            }
            break;
        case 'U':
            if (x > 1)
            {
                x = x - 1;
            }
            else
            {
                
            }
            break;
        case 'D':
            if (x < input)
            {
                x = x + 1;
            }
            else
            {
                
            }
            break;

        default:
            break;
        }

    }

    cout << x << ' ' << y;

}

