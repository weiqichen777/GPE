#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int sol(vector<vector<char>>v, int x, int y){

    int r = v.size();
    int c = v[0].size();
    char target = v[x][y];


    bool flag = true;
    int ans = 1, k = 1;
    while(flag){

        for(int i = 0; i < 8; i++){
            int X = x + k*dx[i];
            int Y = y + k*dy[i];

            if(X>=0 and X<r and Y>=0 and Y<c and v[X][Y]==target)
                flag = true;
            else{
                flag = false;
                break;
            }
        }

        if(flag){
            ans += 2; //！！！
            k++;
        }
    }

    return ans;

}

int main(){

    int c;
    cin >> c;

    while(c--){

        int row, col, n;
        cin >> row >> col >> n;
        printf("%d %d %d\n", row, col, n);

        vector<vector<char>>v(row, vector<char>(col, '@'));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> v[i][j];
            }
            getchar();
        }

        int x, y, ans;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            ans = sol(v, x, y);
            cout << ans << endl;
        }
    }

    return 0;
}