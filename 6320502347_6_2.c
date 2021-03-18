#include<stdio.h>
#include<math.h>
    int main(){
    int n,i,j,nub=0,position=0,a;
    scanf("%d",&n);
    int num1,num2,x[n],y[n];
    scanf("%d %d",&num1,&num2);
    for(i=0;i<n;i++){
        a=pow(10,n-i-1);
        x[i]=num1/a;
        y[i]=num2/a;
        num1=num1%a;
        num2=num2%a;
        }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i==j&&x[j]==y[i]){
                nub++;
                position++;
                }
            else if(y[i]==x[j]){
                nub++;
                }
                }
    printf("%d %d",position,nub-position);
    }
