//10773번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k, n, ans = 0;
    vector<int> arr;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> n;
        if(n != 0)
            arr.push_back(n);
        else if(n == 0)
            arr.pop_back();
    }
    for(int i = 0; i < arr.size(); i++)
        ans += arr[i];
    cout << ans << endl;
    return 0;
}