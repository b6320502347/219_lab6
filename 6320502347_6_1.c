#include<stdio.h>
#include<string.h>
    int main(){
    int n,i,j;
    scanf("%d",&n);
    char word[n][1000],x[1000];
    int nub[n],k;
    for(i=0;i<n;i++){
        scanf("%s",word[i]);
        fflush(stdin);
        }
     for(i=0;i<n;i++)
        if(word[i][0]>=97){
            nub[i]=word[i][0]-32;
            }
        else {nub[i]=word[i][0];
                }
    for(i=1;i<n;i++)
        for(j=1;j<n;j++)
                 if(nub[j]<nub[j-1]){
                    strcpy(x,word[j-1]);
                    strcpy(word[j-1],word[j]);
                    strcpy(word[j],x);
                    k=nub[j-1];
                    nub[j-1]=nub[j];
                    nub[j]=k;
                    }
    for(i=0;i<n;i++){
        printf("%s\n",word[i]);
        }
}
