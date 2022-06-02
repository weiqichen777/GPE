#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> v(22, vector<char>(22, '@'));

void BFS(int i, int j, char target){

    int row = v.size()-2;
    int col = v[0].size()-2;

    if(i>=1 and i<=row and j>=1 and j<=col and v[i][j]==target){

        v[i][j] = '@';

        BFS(i-1, j, target);
        BFS(i+1, j, target);
        BFS(i, j-1, target);
        BFS(i, j+1, target);
    }

}


int main(){

    int c = 0;
    int row = 0, col = 0;
    cin >> c;
    for(int k = 1; k <= c; k++){

        cin >> row >> col;
        
        
        for(int i = 1; i <= row; i++)
            for(int j = 1; j <= col; j++)
                cin >> v[i][j];
        
        
        map<char, int> letter;
        vector<char> order;
        char target;
        for(int i = 1; i <= row; i++)
            for(int j = 1; j <= col; j++){
                
                target = v[i][j];
                if(target == '@')
                    continue;
                
                if(letter.find(target) == letter.end()){
                    letter[target] = 1;
                    order.push_back(target);
                }
                    
                else
                    letter[target]++;

                BFS(i, j, target);
                
            }

        vector<pair<char, int>> output;
        for(int i = 0; i < order.size(); i++){
            pair<char, int> p = make_pair(order[i], letter[order[i]]);
            output.push_back(p);
        }
        cout << "World #" << k << endl;
        for(auto e: output)
            printf("%c: %d\n", e.first, e.second);
        
    }

    return 0;
}