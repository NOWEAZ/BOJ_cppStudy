//2562번
#include <iostream>
using namespace std;
int main(){
    int arr[9];
    int maxIndex = 0;
    for(int i = 0; i < 9; i++)
        cin >> arr[i];

    for(int i = 0; i < 9; i++){
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    cout << arr[maxIndex] << endl << maxIndex + 1 << endl;

    return 0;
}