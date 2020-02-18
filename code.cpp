#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n,x,sum=0;
	int a[10000],l[10000],r[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    l[0]=a[0];
    r[n-1]=a[n-1];
	for(int i=1;i<n;i++){

		if(a[i]>l[i-1]){
       l[i]=a[i];
		}
		else{
			l[i]=l[i-1];
		}
	}
	for(int i=n-2;i>=0;i--){
	 if(a[i]>r[i+1]){
       r[i]=a[i];
		}
		else{
			r[i]=r[i+1];
		}
	}
	for(int i=0;i<n;i++){
		x=min(l[i],r[i]);
		sum+= x-a[i];
		}
		cout<<sum;
	return 0;
}
