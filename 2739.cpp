//2739번
#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    for(int i = 1; i < 10; i ++)
        cout << N << " * " << i << " = " << N * i << endl;
    return 0;
}