#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<string> v;
    string line;
    while(getline(cin, line) && line[0] != '0'){

        string word = "";
        
        for(int i = 0; i < line.size(); i++){
            if(isalpha(line[i])){
                word = "";
                while(isalpha(line[i])){
                    word += line[i];
                    i++;
                }
                i--;
                v.push_back(word);
                cout << word;
            }
            else if(isdigit(line[i])){
                int index = 0;
                while(isdigit(line[i])){
                    index = index*10 + (line[i]-'0');
                    i++;
                }
                i--;
                index = v.size() - index;
                word = v[index];
                v.erase(v.begin()+index);
                v.push_back(word);
                cout << word;
            }

            else{
                cout << line[i];
            }
        }

        cout << endl;
    }
  
    return 0;
}