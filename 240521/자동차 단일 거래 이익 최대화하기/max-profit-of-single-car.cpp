#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    int price[year];
    int low,high = 0;
    for(int i = 0; i<year;i++){
        cin >> price[i];
    }
    low = price[0];
    high = price[0];
    for(int i = 1; i<year;i++){
        if(price[i] < low){
            low = price[i];
            high = low;
        }
        if(price[i]>high){
            high = price[i];
        }
    }
    if(high == low){
        cout << 0;
    }
    else{
        cout << high - low;
    }

    return 0;
}