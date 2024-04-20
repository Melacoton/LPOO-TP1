Ejercicio 8 
muy dificil
#include <stdio.h>
int N=0, i, j;
int main(){
    printf("\nIngrese las casillas totales del vector: ");
    scanf("%d", & N);
    int vector[N], aux, basura[N];
    for(i=0; i<N; i++){
        printf("\ningrese los valores del vector");
        scanf("%d", & vector[i]);
    }
    for(i=0; i<N; i++){
        if(vector[i]<2){
            basura[i]=vector[i];
        }
        for(i=2;i<=vector[i]/2;i++){
            if(vector[i]%i==0){
                basura[i]=vector[i];
            }
        }
    }
   
    for(i=0;i<N;i++){
       
        for(j=0;j<N;j++){
        if(vector[j]> vector[j+1]){
        aux=vector[j];
        vector[j]= vector[j+1];
        vector[j+1]= aux;
        }
    }
    for(i=0;i<N;i++){
        printf("%d", vector[i]);
    }
}
/*vector[i]>=aux[i]
    for(i=0;i<N;i++){
        if(vector[i] % 2 ==0){
            contp++;
        }
        else{
            contnp=contnp+1;
        }
    }
    printf("\n%d", contp);
    printf("\n%d", contnp);
    */


}
