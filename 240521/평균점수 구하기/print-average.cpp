#include <iostream>
using namespace std;
int main() {
    float score[8];
    float total = 0;
    float average;
    for (int i=0; i<8; i++){
        cin >> score[i];
        total += score[i];
    }
    cout << total / 8;
    return 0;
}