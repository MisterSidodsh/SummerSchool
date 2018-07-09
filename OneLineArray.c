#include <stdio.h>


int main(){
    int a[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int i=0,j=10,tmp =0;
     
    while(i<j){
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
for (int i=0; i<11; i++){
    printf("%d\n",a[i]);
    }

}

