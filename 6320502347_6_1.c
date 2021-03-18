#include<stdio.h>
#include<string.h>
    int main(){
    int n,i;
    scanf("%d",&n);
    char word[n][1000],x[1000];
    for(i=0;i<n;i++){
        scanf("%s",word[i]);
        fflush(stdin);
        }
    for(i=1;i<n;i++){
        if(word[i][0]<word[i-1][0]){
            strcpy(x,word[i-1]);
            strcpy(word[i-1],word[i]);
            strcpy(word[i],x);
            }
        }
    for(i=0;i<n;i++){
        printf("%s\n",word[i]);
        }
}
