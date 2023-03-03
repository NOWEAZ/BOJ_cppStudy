//2609번
#include <iostream>
using namespace std;
int GCD(int a, int b){
    int c = a % b;
    while(c != 0){
        a = b;  b = c;  c = a % b;
    }
    return b;
}
int LCM(int a, int b){
    return (a * b) / GCD(a, b);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl << LCM(a, b);
    return 0;
    }