#include <bits/stdc++.h>

using namespace std;

int main() {
	string s,t;
	cin>>s>>t;

	int i=0,j=0;

	map<char,int>m;
	for(int i=0; i<t.size(); i++){
		m[t[i]]++;
	}

	int count=m.size();
	int ans=0;

	while(j<s.size()){
		m[s[j]]--;
		if(m[s[j]]==0)count--;

		if(j-i+1<t.size()){
			j++;
		}
		else if(j-i+1==t.size()){
			if(count==0)ans++;

			if(m[s[i]]==0){
				m[s[i]]++;
				count++;
			}
			else if(m[s[i]]>0) m[s[i]]++;
			i++;
			j++;
		}
	}

	cout<<ans<<endl;

	return 0;
}