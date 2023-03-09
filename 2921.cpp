//2921번
#include <iostream>
using namespace std;
int main(){
    int N, dots = 0;    cin >> N;
    for(int i = 1; i <= N; i++)
        dots += (i * (i+1) + (i * (i+1) / 2));
    cout << dots;
    return 0;
}