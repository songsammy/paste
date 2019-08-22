#include <cstdio>
using namespace std;
int n=6,k=3,nu[3];
void dfs(int used,int sta){
nu[used]=sta;
if (used==k-1) {
for (int i=0;i<k;i++) printf("%d ",nu[i]);
printf("\n");
return ;
}
for (int i=sta+1;i<=n;i++){
dfs(used+1,i);
}
return ;
}
int main(){
//scanf("%d %d",&n,&k);
dfs(-1,0);
return 0;
}
