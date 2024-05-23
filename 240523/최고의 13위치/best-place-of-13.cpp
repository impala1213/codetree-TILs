#include <iostream>
using namespace std;
int main() {
    int size;
    cin >> size;
    int board[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin >> board[i][j];
        }
    }
    int coin = 0;
    int maxcoin = 0;
    for(int i=0; i < size;i++){
        for(int j=0;j<size-2;j++){
            if(board[i][j] == 1){
                coin += 1;
            }
            if(board[i][j+1] == 1){
                coin += 1;
            }
            if(board[i][j+2] == 1){
                coin += 1;
            }

            if(coin > maxcoin){
                maxcoin = coin;
            }
            coin = 0;
        }

    }
    cout << maxcoin;
    return 0;
}