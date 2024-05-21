#include <iostream>
using namespace std;
int main() {
    int total = 0;
    int count = 0;
    float average = 0;
    int numbers[10];
    for (int i = 0; i<10;i++){
        cin >> numbers[i];
        if (numbers[i] == 0){
            break;
        }
        count += 1;
    }
    for(int i = count; i >= 0; i--){
        if(numbers[i] == 0){
            continue;
        }
        total += numbers[i];
    }
    cout << fixed;
    cout.precision(1);
    average = float(total)/count;
    cout << total << " " << average;
    return 0;
}