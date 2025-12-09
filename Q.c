#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    while(N--){
        long long Num;
        scanf("%lld",&Num);
        if(Num==0){
            printf("0\n");
            continue;
        }
        while(Num>0){
            printf("%lld",Num%10);
            Num/=10;
            if(Num>0)
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
