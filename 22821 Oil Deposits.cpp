#include <bits/stdc++.h>
using namespace std;

void check(vector<string> &map, bool visited[105][105], int i, int j){
    int m=map.size(), n=map[0].size();
    if(i>=0 && i<m && j>=0 && j<n && map[i][j] == '@'&& !visited[i][j]){
        visited[i][j] = true;
        check(map, visited, i-1, j-1);
        check(map, visited, i-1, j);
        check(map, visited, i-1, j+1);
        check(map, visited, i, j-1);
        check(map, visited, i, j+1);
        check(map, visited, i+1, j-1);
        check(map, visited, i+1, j);
        check(map, visited, i+1, j+1);
    }
    
}

int main() {

    int m, n;

    while(cin >> m >> n && m && n){
        vector<string> map(m);
        bool visited[105][105] = {0};
      
        for(int i = 0; i < m; i++){
          cin >> map[i];
        }

        int count = 0;
        for(int i = 0; i < m; i++){
          for(int j = 0; j < n; j++){
            
            if(map[i][j] == '@'&& !visited[i][j]){
              count++;
              check(map, visited, i, j);
            }
            

          }
        }

        cout << count << endl;
            
    }
  
    return 0;
}