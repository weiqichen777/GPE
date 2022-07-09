#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    int map[20] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7,
                7, 8, 4, 7, 3, 8, 4, 1, 5, 4};

    string s;
    while(cin >> s and s[0]-'0' != 0){

        int len = s.size();
        int value = s[len-1] - '0';

        if(len > 1)
            value += (s[len-2] - '0') * 10;

        cout << (map[value%20] + 4*(value/20))%10 << endl;
    }

    return 0;
}