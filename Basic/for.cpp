#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int j = 0; j < 10; j++)
    {
        cout << n * j << endl;
    }

    return 0;
}