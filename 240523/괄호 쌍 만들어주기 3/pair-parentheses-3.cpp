#include <iostream>
#include <string>

using namespace std;

string str;

int main() {
    cin >> str;
    int n = (int) str.size();
    
    // 모든 쌍을 다 잡아봅니다.
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(str[i] == '(' && str[j] == ')')
                cnt++;
    
    cout << cnt;
    return 0;
}