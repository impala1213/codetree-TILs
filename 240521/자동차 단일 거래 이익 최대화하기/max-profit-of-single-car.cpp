#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    int price[year];
    int low,high = 0;
    int profit = 0;
    for(int i = 0; i<year;i++){
        cin >> price[i];
    }
    low = price[0];
    for(int i = 1; i<year;i++){
        high = price[i];
        if(low > price[i]){
            low = price[i];
            high = price[i];
        }
        if(high - low > profit){
            profit = high - low;
        }
    }
    cout << profit;

    return 0;
}