// print solid squre
    #include <stdio.h>
    int main(){
    //int m;
   //printf("enter the row :");
   // scanf("%d",&m);
    int n;
    printf("enter the side of squre :");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=n;i++){//rows
     for(int j=1; j<=n;j++){
        printf("* ");
    }
      printf("\n");
    }
    return 0;
}