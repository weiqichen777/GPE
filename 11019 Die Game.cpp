#include <bits/stdc++.h>

using namespace std;

int main(){

    /* init
    2
    1 | 4 | 6 | 3
    5
    */

    vector<vector<int> > v(3, vector<int>(4,0));
   

    int n;
    string s;
    while(cin >> n and n){

        v[0][0] = 2;
        v[1][0] = 1;
        v[1][1] = 4;
        v[1][2] = 6;
        v[1][3] = 3;
        v[2][0] = 5;

        int temp = 0;
        while(n--){

            cin >> s;
            if(s == "north"){
                temp = v[0][0];
                v[0][0] = v[1][0];
                v[1][0] = v[2][0];
                v[2][0] = v[1][2];
                v[1][2] = temp;
            }
            if(s == "south"){
                temp = v[0][0];
                v[0][0] = v[1][2];
                v[1][2] = v[2][0];
                v[2][0] = v[1][0];
                v[1][0] = temp;
            }
            if(s == "east"){
                temp = v[1][0];
                v[1][0] = v[1][3];
                v[1][3] = v[1][2];
                v[1][2] = v[1][1];
                v[1][1] = temp;
            }
            if(s == "west"){
                temp = v[1][0];
                v[1][0] = v[1][1];
                v[1][1] = v[1][2];
                v[1][2] = v[1][3];
                v[1][3] = temp;
            }

        }

        cout << v[1][0] << endl;

    }

    return 0;
}