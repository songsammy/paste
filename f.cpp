#include <cstdio>
using namespace std;
int main(){
int n=6,k=3,m,q;
int nu[n],ak[k];
for (int i=0;i<n;i++) nu[i]=i;
for (int i=0;i<k;i++) ak[i]=i;
while (ak[0]<n-k){
for (int i=0;i<k;i++) printf("%d ",nu[ak[i]]);
printf("\n");
for (int j=k-1;j>=0;j--){
if (ak[j]==n-k+j) continue;
else {
ak[j]++;m=ak[j];
for (int l=1;l+j<=k-1;l++) ak[l+j]=m+l;
}
}
}
}
