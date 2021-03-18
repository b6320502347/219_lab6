#include<stdio.h>
#include<string.h>
    int main(){
    int n,i,j;
    scanf("%d",&n);
    char word[n][1000],x[1000];
    for(i=0;i<n;i++){
        scanf("%s",word[i]);
        fflush(stdin);
        }
    for(i=1;i<n;i++)
    for(j=1;j<n;j++){
        if(word[j][0]<word[j-1][0]){
            strcpy(x,word[j-1]);
            strcpy(word[j-1],word[j]);
            strcpy(word[j],x);
            }
        }
    for(i=0;i<n;i++){
        printf("%s\n",word[i]);
        }
}
