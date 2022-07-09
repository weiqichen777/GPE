#include <bits/stdc++.h>
using namespace std;

int check(int m, int mid, vector<int> v){

    int sum = 0, count = 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > mid)
            return INT_MAX;
        if(sum+v[i] > mid){
            sum = v[i];
            count++;
        }
        else{
            sum += v[i];
        }

    }

    return count;

}

int main(){

    int m, n;
    while(cin >> m >> n){

        vector<int> v(m);
        int sum = 0;
        int max = INT_MIN;
        for(int i = 0; i < v.size(); i++){
            cin >> v[i];
            sum += v[i];
            if(v[i] > max)
                max = v[i];
        }

        int l = max, r = sum;
        while(l < r){
           
            int mid = (l+r)/2;

            if(check(m, mid, v) > n)//表 l 太大
                l = mid + 1;
            else
                r = mid;

        }

        cout << l << endl;
    }

    return 0;
}