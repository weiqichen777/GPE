#include <bits/stdc++.h>
#include <map>

using namespace std;

vector<map<string, int>> dir;

void getDFS(int node, int space){
    for(auto it : dir[node]){
        for(int j = 0; j < space; j++)
            cout << ' ';
        cout << it.first << endl;
        getDFS(it.second, space+1);
    }
}

int main(){

    int n = 0;
    cin >> n;
    string line = "";

    
    getchar();
        
    int next = 1;
    dir.push_back(map<string, int>());
    
    for(int i = 0; i < n; i++){
        getline(cin, line);
        line += '\\';
            
        string word = "";
        int level = 0;
        for(int j = 0; j < line.size(); j++){
                
            if(line[j] == '\\'){
                    
                if(!dir[level].count(word)){
                    
                    dir[level].insert(make_pair(word, next));
                    dir.push_back(map<string, int>());
                    next++;
                }
                    
                level = dir[level][word];
                word = "";
        
            }   
            else 
                word += line[j];

        }
    }
    getDFS(0, 0);
        

    return 0;

}

