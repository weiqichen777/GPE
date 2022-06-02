#include <bits/stdc++.h>
using namespace std;

void sol(string &s) {
	stringstream ss(s);
	int weight=0, sum=0;
	vector<int> v;
	while(ss >> weight) {
		v.push_back(weight);
		sum += weight;
	}

	vector<bool> dp(sum+1, false);
	if(sum%2 == 1) {
		cout << "NO" << endl;
		return;
	}
	else {
		dp[0] = true;
		for(int i=0; i<v.size(); ++i)
			for(int j=sum; j>=v[i]; --j)
				if(dp[j-v[i]])
					dp[j] = true;
	}
	if(dp[sum/2])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {

  int m;
  cin >> m;

  getchar();

  for(int i = 0; i < m; i++){
      string s = "";
      getline(cin, s);
      sol(s);
  }
  
	return 0;
}