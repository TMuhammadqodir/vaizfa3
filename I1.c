#include <stdio.h>
void adress(int *adres){
    printf("%p\n", adres);
}

int main(){
    int n;
    adress(&n);

    return 0;
}
