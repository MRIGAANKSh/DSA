// apna college----
// lec4 pattern
#include <iostream>
using namespace std;
// pattern1 completed
//  int main()
//  {
//      int i, j, n;
//      cout << "enter n " << endl;
//      cin >> n;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < n; j++)
//          {
//              cout << j;
//          }
//          cout << "\n";
//      }
//      return 0;
//  }

int main()
{
    int i, j, n;
    cin >>n;
    
    for (int i = 0; i <n; i++)
    {
        for (int j =0; j<1; j++)
        {
          cout << " ";
        }
        for ( int k = 0; i < n-i; i++)
        {
           cout << (i+1);
        }
        
        cout << "\n";
    }
    return 0;
}

//reverse triangle 
