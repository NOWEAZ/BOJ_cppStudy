//2609번
#include <iostream>
using namespace std;
int main() {
    int a, b, i = 1;
    int GCD = 1, LCM = 1;
    cin >> a >> b;

    if (a != 1 && b != 1){
        if(i == 1)
            i++;
        while(i < a && i < b){
            if(a % i == 0 && b % i == 0){
                GCD *= i; 
                a = a / i; b = b / i;
                LCM = GCD * a * b;
            }
            else if(a % i > 0 || b % i >0) 
                i++;
        }
    }
    else{
        GCD = 1;
        LCM = a * b;
    }
    cout << GCD << endl << LCM << endl;
    return 0;
}
//서로수인 경우에 어떻게 판별할지