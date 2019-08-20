#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
scanf("%d %d",&n,&k);
int nu[n],ak[k];
for (int i=0;i<n;i++) nu[i]=i;
for (int i=0;i<k;i++) ak[i]=i;
while(ak[0]<=n-k){
for (int i=0;i<k;i++) printf("%d",nu[ak[i]]);
printf("\n");
for(int i=k-1;i>=0;i++){
if(ak[i]==n-k+i) continue;
else {ak[i]++;break;}
return 0;
}
}
}
