#include <stdio.h>
void add_square(int *p){
    *p=*p**p;
}

int main(){
    int n;
    scanf("%d",&n);

    printf("last n=%d\n",n);

    add_square(&n);

    printf("now n=%d\n",n);

    return 0;
}
