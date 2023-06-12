//5176번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int K, P, M, num, ans = 0;
    cin >> K;
    while(K--){
        cin >> P >> M;
        vector<int> arr(M, 0);
        for(int i = 0; i < P; i++){
            cin >> num;
            if(arr[num-1] == 0)
                arr[num - 1]++;
            else if(arr[num -1] == 1){
                ans++; arr[num -1] = 1;
            }
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}