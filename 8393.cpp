//8393번
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for(int i = n; i > 0; i--)
        sum += i;
    cout << sum;
    return 0;
}