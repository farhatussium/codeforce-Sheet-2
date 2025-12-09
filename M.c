#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int found=0;
    for (int i=a;i<=b;i++) {
     int n=i;
     int Lucky=1;
     while (n > 0) {
     int digit = n % 10;
     if (digit!=4 && digit!=7) {
     Lucky=0;
     break;
     }
     n/=10;
    }
    if(Lucky){
     printf("%d ",i);
     found=1;
     }
    }
    if (!found){
        printf("-1");
    }
    printf("\n");
    return 0;
}
