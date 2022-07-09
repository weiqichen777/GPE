#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> p;
    vector<bool> f(10005, true);
    for(int i = 2; i <= 100; i++){

        if(f[i] == true){
            for(int j = i*i; j <= 10000; j+=i){
                f[j] = false;
            }
        }
    }
    for(int i = 2; i <= f.size(); i++){
        if(f[i] == true)
            p.push_back(i);
    }

    int n;
    while(cin >> n and n){

        int count = 0;

        for(int i = 0; i < p.size(); i++){
            
            int sum = 0;
            
            for(int j = i; j < p.size(); j++){
                sum += p[j];
                if(sum == n)
                    count++;
            }
        }

        cout << count << endl;
    }


    return 0;

}