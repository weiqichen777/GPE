#include <bits/stdc++.h>
using namespace std;



int main(){

    vector<vector<int> > v(4, vector<int>());
    int region[4] = {10, 100, 1000, 10000};
    
    for(int i = 0; i < 10000; i ++){
        int sq = pow(i, 2);

        for(int j = 0; j < 4; j++){
            if(i < region[j]){
                int m = sq/region[j] + sq%region[j];
                if(m == i)
                    v[j].push_back(sq);
            }
        }
    }

    int n;
    while(cin >> n){
        
        int idx = n/2 - 1;
        for(int i = 0; i < v[idx].size(); i++)
            printf("%0*d\n", n, v[idx][i]);
    }

    return 0;
}