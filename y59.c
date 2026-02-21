// combination and permutation
 #include <stdio.h>
 #include <math.h>
 int fact(int n){
    int f= 1;
    for(int i=1 ;i<=n;i++){
    f *=i;//f=f*i
    }
    return f;
 }
 int ncr(int n, int r){
  if(r>n) return 0;
    return fact(n)/(fact(r)*fact(n-r));


    
 }
 int main(){
    int n ,r;
    printf("enter the value  n :");
    scanf("%d",&n);
    printf("enter the vaule r");
    scanf("%d",&r);

    printf("value of combination of ncr =%d",ncr(n,r));
    return 0;
   
     }