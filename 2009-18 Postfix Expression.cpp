#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int len = s.size();
    vector<int> v(len);

    int m, n;
    for(int i = 0; i < len; i++){

        if(isdigit(s[i])){
            v.push_back(s[i] - '0');
        }
        else{

            m = v.back();
            v.pop_back();
            n = v.back();
            v.pop_back();

            switch (s[i])
            {
            case '+':
                v.push_back(n+m);
                break;
            
            case '-':
                v.push_back(n-m);
                break;

            case '*':
                v.push_back(n*m);
                break;

            case '/':
                v.push_back(n/m);
                break;
            
            }
        }
    }

    int ans = v.back();

    cout << "ans: " << ans << endl;



    return 0;
}