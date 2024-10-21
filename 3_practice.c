#include <stdio.h>
int main(){
    int a[5];
    int *ptr = a;
    for(int i = 0; i<5; i++){
        scanf("%d", ptr+i);
    }
    printf("%d %d %d", ptr[0], ptr[2], ptr[4]);
}