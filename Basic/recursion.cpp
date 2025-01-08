#include <iostream>
using namespace std;

// Function to print numbers recursively
int prit(int n) {
   
    if (n <= 0) return 1;
    else{
        return n*prit(n - 1);

    }
}

int main() {
    cout << "Enter n: "; // Prompt with a clear format
    int n;
    cin >> n;
    int su=0;
    su=prit(n); 
    cout << su;// Call the function
    return 0;
}
