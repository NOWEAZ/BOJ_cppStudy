//5054번
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t, n, locate;
    int minIdx = 0, maxIdx = 0;
    vector<int> arrLoc;
    cin >> t;
    for(int i = 0; i < t; i++){//케이스 만큼 반복
        cin >> n;
        for(int j = 0; j < n; j++){//n개의 상점 locate 입력
            cin >> locate;
            arrLoc.push_back(locate);
        }
        for(int j = 0; j < arrLoc.size(); j++){//최소 최대 찾기
            if(arrLoc[j] > arrLoc[maxIdx])
                maxIdx = j;
            if(arrLoc[j] < arrLoc[minIdx])
                minIdx = j;
        }
        cout << 2 * (arrLoc[maxIdx] - arrLoc[minIdx]) << endl;
        arrLoc.clear();
    }
    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;    cin >> t;
    while(t--){
        int n, m, max = -1, min = 100;
        vector<int> shop;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> m;    shop.push_back(m);
            max = (shop[i] > max) ? shop[i] : max;
            min = (shop[i] < min) ? shop[i] : min;
        }
        cout << (max - min) * 2 << endl;
    }
    return 0;
}