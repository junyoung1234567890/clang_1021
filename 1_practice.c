#include <stdio.h>
int main(){
    int b;
    int *ptr = &b;
    scanf("%d", ptr);
    printf("%d...%d", *ptr/10, *ptr%10);
}