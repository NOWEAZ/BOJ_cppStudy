//2609번
#include <iostream>
using namespace std;
int main() {
    int a, b;
    int GCD = 1, LCM = 1;
    cin >> a >> b;

    for(int i = 2; i <= a || i <= b; i++) {
        if(a / i != 0 && b / i != 0) {
            GCD *= i;
            LCM = GCD * (a/i) * (b/i); 
            i = 2;
            a = a/i;  b = b/i;
        }
    }
    cout << GCD << endl << LCM << endl;
    return 0;
}