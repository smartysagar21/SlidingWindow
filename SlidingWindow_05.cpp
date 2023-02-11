#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	int i=0,j=0;
	int sum=0;
	int ans=0;
	while(j<n){
		sum+=a[j];

		while(sum>k){
			sum-=a[i];
			i++;
		}

		if(sum<k){
			j++;
		}
		if(sum==k){
			ans=max(ans,j-i+1);
			j++;
		}

	}

	cout<<ans<<endl;

	return 0;
}