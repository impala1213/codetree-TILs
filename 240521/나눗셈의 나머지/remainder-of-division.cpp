#include <iostream>
using namespace std;
int main() {
    int a , b;
    int remainder;
    int list_remainder[10];
    int total = 0;
    for(int i = 0; i<10;i++){
        list_remainder[i] = 0;
    }
    cin >> a;
    cin >> b;
    while(a>1){
        remainder = a%b;
        a = a/b;
        list_remainder[remainder] += 1;
    }
    for(int i = 0; i<10; i++){
        
        total += list_remainder[i] * list_remainder[i];
    }
    cout << total;
    return 0;
}