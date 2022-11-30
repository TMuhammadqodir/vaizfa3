#include <stdio.h>
 void check(int *p, int *pp, int *pt){
    for(int i=0; i<*pp; i++){
        if(*p%2){
           *pt=i;
           break;
        }
        p++;
    }

}

 void checkk(int *p1, int *pp1, int *pj){
    for(int i=0; i<*pp1; i++){
       if(!(*p1%2)){
          *pj=i;
          break;
       }
        p1++;
    }

}

int main(){
 int n, c,d;
 scanf("%d",&n);
 int a[n];
 for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
 }
 check(&a[0],&n,&c);
 checkk(&a[0],&n,&d);

 printf("Toq_index--> %d\nJuft_index--> %d\n",c,d);
 return 0;
}
