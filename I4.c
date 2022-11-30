#include <stdio.h>
void change(int *p1, int *p2){
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
}


int main(){
    int a,b;
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    change(&a,&b);
    puts("");
    printf("a=%d\n",a); 
    printf("b=%d\n",b); 

    return 0;
}
