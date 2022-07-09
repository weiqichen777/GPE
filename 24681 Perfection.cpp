#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "PERFECTION OUTPUT" << endl;

    int n;
    while(cin >> n){

        vector<int> v;

        if(n == 0)
            cout << "END OF OUTPUT" << endl;
        
        else{
            
            int sum = 0;
            for(int i = 1; i < n; i++){
                if(n%i == 0){
                    v.push_back(i);
                    sum += i;
                }   
            }
            if(sum == n)
                cout << setw(5) << n << "  PERFECT" << endl;
            else if(sum < n)
                cout << setw(5) << n << "  DEFICIENT" << endl;
            else
                cout << setw(5) << n << "  ABUNDANT" << endl;

            
        }

    }
    return 0;
}