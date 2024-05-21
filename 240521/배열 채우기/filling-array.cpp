#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int numbers[10];
    for (int i = 0; i<10;i++){
        cin >> numbers[i];
        if (numbers[i] == 0){
            for(i;i<10;i++){
                numbers[i] = 0;
            }
            break;
        }
    }
    for(int i = 9; i >= 0; i--){
        if(numbers[i] == 0){
            continue;
        }
        cout << numbers[i] << " ";
    }
    return 0;
}