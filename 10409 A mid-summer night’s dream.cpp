#include <bits/stdc++.h>

using namespace std;

int main(){

    int n = 0;

    while(cin >> n and n){

        vector<int> v;
        int input;
        for(int i = 0; i < n; i++){
            cin >> input;
            v.push_back(input);
        }
        

        sort(v.begin(), v.end());

        int left = (n-1)/2; //!!!
        int right = n/2;
        int count = 0;

        cout << v[left] << " ";
        
        for(int i = 0; i < n; i++){
            if(v[i] == v[left] or v[i] == v[right])
                count++;
        }
        cout << count << " ";

        cout << v[right] - v[left] + 1 << endl;


    }

    return 0;
}