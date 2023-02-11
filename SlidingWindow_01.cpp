#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	int i=0,j=0;
	int mx=-INT_MAX;
	int sum=0;

	while(j<n){
		sum+=a[j];

		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			mx=max(mx,sum);
			sum-=a[i];
			i++;
			j++;
		}
	}

	cout<<mx<<endl;

	return 0;
}