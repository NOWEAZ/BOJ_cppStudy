//5522번
#include <iostream>
using namespace std;
int main(){
    int score, total = 0;
    for(int i = 0; i < 5; i++){
        cin >> score;
        if(score < 0 || score > 100)
            return 1;
        total += score;
    }
    cout << total;
    return 0;
}