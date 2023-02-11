#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	string s,t;
	cin>>s>>t;

	vector<bool>flag(26,0);
	vector<int>v(26);
	for(int i=0; i<k; i++){
		flag[t[i]-'a']=1;
		v[t[i]-'a']++;
	}
	int ct=0;
	for(int i=0; i<26; i++){
		if(flag[i])ct++;
	}

	int i=0,j=0;
	int ans=n;
	while(j<n){
		if(ct>0){
			if(flag[s[j]-'a']){
				v[s[j]-'a']--;
				if(v[s[j]-'a']==0)ct--;
			}
		}
		while(ct==0){
			ans=min(ans,j-i+1);
			if(flag[s[i]-'a']){
				v[s[i]-'a']++;
				if(v[s[i]-'a']>0)ct++;
			}
			i++;
		}
		j++;

	}
	cout<<ans<<endl;

	return 0;
}