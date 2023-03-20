//2506번
#include <iostream>
using namespace std;
int main(){
    int N;  cin >> N;
    int ans, count = 0, score = 0;
    for(int i = 0 ; i < N; i++){
        cin >> ans;
        if(ans == 0)
            count = 0;
        else if(ans == 1)
            count++;
        score += count;
    }
    cout << score << endl;
    return 0;
}