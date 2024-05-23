#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int number;
    cin >> number;
    int* people = new int[number];
    
    for(int i = 0; i < number; i++){
        cin >> people[i];
    }

    int mindistance = INT_MAX;

    for(int i = 0; i < number; i++){
        int distance = 0; // 각 i마다 distance 초기화
        for(int j = 0; j < number; j++){
            distance += people[j] * abs(i - j);
        }
        
        if (distance < mindistance){
            mindistance = distance;
        }
    }
    
    cout << mindistance << endl;

    delete[] people; 
    return 0;
}