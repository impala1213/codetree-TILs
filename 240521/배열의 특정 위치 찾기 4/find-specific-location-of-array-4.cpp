#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int numbers[10];
    int twocomplement = 0;
    int sum = 0;
    int count = 0;
    for(int i = 0; i<10; i++){
        cin >> numbers[i];
        if (numbers[i] == 0){
            break;
        }
        count +=1;
    }
    for(int i =0; i<count;i++){
        if(numbers[i]%2 == 0){
            twocomplement += 1;
            sum += numbers[i];
        }
    }
    cout << twocomplement << " " << sum;
    return 0;
}