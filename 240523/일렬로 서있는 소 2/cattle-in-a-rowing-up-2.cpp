#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    int cows[number];
    for (int i =0; i<number;i++){
        cin >> cows[i];
    }
    int count = 0;
    for(int i=0; i<number-2;i++){
        for(int j=i+1;j<number-1;j++){
            for(int k =j+1;k<number;k++){
                if((cows[i] <= cows[j]) && (cows[j] <= cows[k])){
                    count += 1;
                }
            }

        }
    }
    cout << count;
    return 0;
}