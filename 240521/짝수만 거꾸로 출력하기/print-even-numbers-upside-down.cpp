#include <iostream>
using namespace std;
int main() {
    int count = 0;
    cin >> count;
    int numbers = [count];
    for(int i=0; i<count; i++){
        cin >> count[i];
    }
    for(int i = count-1; i>=0;i--){
        if(count[i] % 2 == 0){
            cout << count[i];
        }
    }
    return 0;
}