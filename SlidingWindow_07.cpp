#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	string s;
	cin>>s;

	int i=0,j=0;
	map<char,int>m;
	int ans=0;
	while(j<n){
		m[s[j]]++;

		while(m.size()<j-i+1){
			m[s[i]]--;
			if(m[s[i]]==0){
				m.erase(s[i]);
			}
			i++;
		}

		if(m.size()==j-i+1){
			ans=max(ans,j-i+1);
			j++;
		}

	}

	cout<<ans<<endl;

	return 0;
}