#include <iostream>
using namespace std;
int main() {
    int total = 0;
    int count = 0;
    int numbers[10];
    for (int i = 0; i<10;i++){
        cin >> numbers[i];
        count += 1;
        if (numbers[i] == 0){
            for(i;i<10;i++){
                numbers[i] = 0;

            }
            break;
        }
    }
    for(int i = count; i >= 0; i--){
        if(numbers[i] == 0){
            continue;
        }
        total += numbers[i];
    }
    cout << fixed;
    cout.precision(1);
    count -= 1;
    cout << total << " " << float(total / count);
    return 0;
}