//2490번
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> n;   sum += n;
        }
        if(sum == 1)
            cout << "C " << endl;
        else if(sum == 2)
            cout << "B" << endl;
        else if(sum == 3)
            cout << "A" << endl;
        else if(sum == 4)
            cout << "E" << endl;
        else if(sum == 0)
            cout << "D" << endl;
        else
            return 1;
        sum = 0;
    }
    return 0;
}