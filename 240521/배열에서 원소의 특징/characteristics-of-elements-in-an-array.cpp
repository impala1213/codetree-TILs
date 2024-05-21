#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    int index;
    for(int i = 0; i<10;i++){
        cin >> numbers[i];
        if(numbers[i] % 3 == 0){
            index = i;
            break;
        }

    }
    cout << numbers[index - 1];
    return 0;
}