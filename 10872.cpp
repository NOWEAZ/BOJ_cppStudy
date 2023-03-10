//10872번
#include <iostream>
using namespace std;
int main(){
    int N; cin >> N;
    int fac = 1;
    for (int i = 1; i <= N; i++){
        fac *= i;
    }
    cout << fac;
    return 0;
}