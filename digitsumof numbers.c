#include <stdio.h>
    int sod(int n){
       return(n%9!=0)?n%9:9;
    }
    int main(){
        int a[100],n,i,d;
        int sum=0;
        printf("Enter the total number of data\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=sod(a[i]);
        }
        printf("Sum:%d",sum);



    return 0;
}
