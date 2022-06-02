#include <bits/stdc++.h>

using namespace std;

int main(){

    int n = 0;

    while(cin >> n){

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

        cout << v[left] << endl;
        
        for(int i = left; i < n; i++){
            if(v[i] == v[left])
                count++;
            else
                break;
        }
        cout << count << endl;

        cout << v[right] - v[left] + 1 << endl;


    }

    return 0;
}