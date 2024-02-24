#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxepnoibot(int a[], int n, int b[100][100], int &idx){
	for(int i=0; i<n; i++){
		bool check = false;
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				check = true;
				swap(a[j], a[j+1]);
			}
		}
		if(check){
			++idx;
			for(int j=0; j<n; j++) b[idx][j]=a[j];
		}
		else break;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i]; 
		int b[100][100], idx=0;
		sapxepnoibot(a,n,b,idx);
		for(int i=idx; i>0; i--){
			cout<<"Buoc "<<i<<": ";
			in(b[i],n);
		}
	
	}
	return 0;
}

