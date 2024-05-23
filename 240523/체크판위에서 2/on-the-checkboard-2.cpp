#include <iostream>
#include <vector>
using namespace std;

int findnext(int x, int y, int x_size, int y_size, char color, const vector<vector<char>>& board){
    int count = 0;
    for(int i = x+1; i < x_size-1; i++){
        for(int j = y+1; j < y_size-1; j++){
            if(board[i][j] != color){
                count += 1;
            }
        }
    }
    return count;
}

int main() {
    int x_size, y_size;
    cin >> x_size >> y_size;
    vector<vector<char>> board(x_size, vector<char>(y_size));
    for(int i=0; i<x_size ;i++){
        for(int j=0; j<y_size; j++){
            cin >> board[i][j];
        }
    }
    int count = 0;
    char color = board[0][0];
    for(int i=0; i<x_size-1; i++){
        for(int j=0; j<y_size-1; j++){
            if(board[i][j] != color){
                color = board[i][j];
                count += findnext(i, j, x_size, y_size, color, board);
            }
        }
    }
    cout << count;

    return 0;
}