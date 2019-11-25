#include <iostream>
using namespace std;

int LISTSIZE = 50;

int main()  {
    
    for (int j = 0; j < 19; j++)    {
        for (int i = 0; i < LISTSIZE - 1; i++)    {
            cout << rand() % 131072 - 65536 << ", ";
        }
        cout << rand() % 131072 - 65536 << '\n';
    }
}