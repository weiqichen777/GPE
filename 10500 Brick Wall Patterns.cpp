#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(51, 0);
    v[1] = 1;
    v[2] = 2;

    for(int i = 3; i <=50; i++)
        v[i] = v[i-1] + v[i-2];

    int n = 0;
    while(cin >> n and n){
        cout << v[n] << endl;
    }
    


    return 0;
}