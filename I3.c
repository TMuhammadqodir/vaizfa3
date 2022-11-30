#include <stdio.h>
void change(int *p){
      p--;
      *p=*(p+1)%10*10;
      *p=*p+*(p+1)/10;
      *++p=*(p-1);
}


int main(){
    int n;
    printf("ikki honali sonni kiriting --> ");
    scanf("%d",&n);
    if(n/10>0 && n/10<10){
    	change(&n);
    	printf("%d\n",n);
    }else{
        printf("ikki xonali emas\n");
    }

    return 0;
}
