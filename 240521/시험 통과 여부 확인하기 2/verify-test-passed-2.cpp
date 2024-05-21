#include <iostream>
using namespace std;
int main() {
    int student = 0;
    cin >> student;
    int score[student][4];
    int passnum = 0;
    for(int i =0; i<student;i++){
        int total = 0;
        for(int j=0; j < 4; j++){
            cin >> score[i][j];
            total += score[i][j];
        }
        if(total >= 240){
            cout << "pass" << endl;
            passnum += 1;
        }
        else{
            cout << "fail" << endl;
        }
    }
    cout << passnum;
    return 0;
}