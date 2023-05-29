#include <bits/stdc++.h>
using namespace std;

long long a[55][55]; 

int main() {
   int n,m;
   int x,i,j,h,k;
   long long ans=0, maxans=-1;
   
   cin>>n>>m;
   for (i=1;i<=n;i++) {
   	for (j=1;j<=m;j++) {
   		cin>>a[i][j];
	   }
   }
   

   
   for (i=1;i<=n;i++) {
   	for (j=1;j<=m;j++) {
   		 for (h=1;h<=n;h++) {
   		 	for (k=1;k<=m;k++) {
   		 		  //cout<<i<<" "<<j<<"v.s."<<h<<" "<<k<<endl;
   		 		  if (a[i][j]==a[h][k]) {
   		 		  		ans=abs(i-h)*abs(i-h) + abs(k-j)*abs(k-j);
   		 		  		if (ans!=0 && maxans<ans) maxans=ans;
					  }   		 		    
				}
			}
	   }
   }
   
   cout<<maxans;
   
   return 0; 
}
