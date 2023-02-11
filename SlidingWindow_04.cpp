#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	int i=0,j=0;
	list<int>l;
	vector<int>v;

	while(j<n){
		while(l.size()>0 && l.back()<=a[j]){
			l.pop_back();
		}
		l.push_back(a[j]);

		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			v.push_back(l.front());
			if(l.front()==a[i])l.pop_front();
			i++;
			j++;
		}
	}

	for(auto i:v){
		cout<<i<<" ";
	}

	return 0;
}