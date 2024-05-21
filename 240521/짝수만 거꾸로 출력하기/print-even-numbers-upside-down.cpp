#include <iostream>
using namespace std;
int main() {
    int count = 0;
    cin >> count;
    int numbers[count];
    for(int i=0; i<count; i++){
        cin >> numbers[i];
    }
    for(int i = count-1; i>=0;i--){
        if(numbers[i] % 2 == 0){
            cout << numbers[i] << " ";
        }
    }
    return 0;
}