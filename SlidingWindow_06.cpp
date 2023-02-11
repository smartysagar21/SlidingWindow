#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	int i=0,j=0;
	map<char,int>m;
	int ans=0;
	while(j<n){
		m[s[j]]++;

		while(m.size()>k){
			m[s[i]]--;
			if(m[s[i]]==0){
				m.erase(s[i]);
			}
			i++;
		}

		if(m.size()<k){
			j++;
		}
		if(m.size()==k){
			ans=max(ans,j-i+1);
			j++;
		}

	}

	cout<<ans<<endl;

	return 0;
}