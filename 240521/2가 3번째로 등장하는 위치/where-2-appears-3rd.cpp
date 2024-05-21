#include <iostream>
using namespace std;
int main() {
    int count;
    cin >> count;
    int numbers[count];
    int two = 0;
    for(int i =0; i < count; i++){
        cin >> numbers[i];
    }
    for(int i = 0; i < count; i++) {
        if(numbers[i] == 2){
            two += 1;
        }
        if(two == 3){
            cout << i +1;
            break;
        }
    }
    return 0;
}