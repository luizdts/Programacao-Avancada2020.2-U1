# include <stdlib.h>
int main(){
  float *p1;
  int i, j, x, aux;
  x = 5;
  p1 = (float*) malloc(x*sizeof(float));

    for(i=0;i<x; i++){
      for(j=i;j<x;j++){
        if(p1[i]>p1[j]){
          aux = p1[i];
          p1[i] = p1[j];
          p1[j] = aux;
        }
      }
    }
  for(j=0;j<x;j++){
    if(j == x-1){
      printf("%.2f\n", p1[j]);
    } 
    else {
    printf("%.2f\n", p1[j]);
    }
  }
  free(p1);
  return 0;
}
