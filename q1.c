//wap to calculate the average of the first n number 
#include <stdio.h>
int main (){
    int n,i =1,sum =0;
    float avg =0.0;
    printf("\n Enter tha value of: n");
    scanf("\n%d",&n);
    do 
    {
        sum =sum +i;
        i= i +1;
    }while(i<=n);

    avg =(float) sum/n;
    printf("\nThe sum of first %d numbers = %d ",n,avg);
    printf("\n The averge of first %d number=%f" ,n,avg);
    return 0;
    

    


}