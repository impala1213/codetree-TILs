#include <iostream>
using namespace std;
int main() {
    int nexta;
    int preva;
    int a;
    cin >> preva;
    cin >> a;
    int numbers[10];
    numbers[0] = preva;
    numbers[1] = a;
    for(int i=2; i<10;i++){
        nexta = a + 2*preva;
        numbers[i] = nexta;
        preva = a;
        a = nexta;
        
    }
    for(int i = 0; i < 10; i++){
        cout << numbers[i] << " ";
    }
    return 0;
}