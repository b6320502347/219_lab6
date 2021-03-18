#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int vote[n+1][2],score[n+1];
    for(i=1;i<=n;i++)
        scanf("%d %d",&vote[i][0],&vote[i][1]);
    for(i=1;i<=n;i++)
        score[i]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(vote[i][0]==j){
                score[j]++;
                }
            else if(vote[i][1]==j){
                score[j]++;
                }
    int maxper,minper,maxs,mins=0;
    for(i=1;i<=n;i++)
        if(i==1){
            maxper=i;
            maxs=score[i];
            }
        else if(score[i]>maxs){
            maxs=score[i];
            maxper=i;
    }
      for(i=1;i<=n;i++)
         if(mins==0&&(i==vote[maxper][0]||i==vote[maxper][1])){
            mins=score[i];
            minper=i;
            }
        else if(score[i]<mins&&(i==vote[maxper][0]||i==vote[maxper][1])){
            mins=score[i];
            minper=i;
        }
        printf("%d %d",maxper,minper);
    }
