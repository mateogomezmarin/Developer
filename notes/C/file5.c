#include "file5.h"
#include <stdio.h>
int main(int argc, char **argv){
struct complex number;
number.real = 5.0;
number.imag = 6.0;
printf("My number: %f %f\n",number.real,number.imag);
struct complex array_c[TAM];
for (int i=0; i<TAM;i++){
array_c[i].real = 5*i;
array_c[i].imag = 5;
}
for (int i=0; i<TAM;i++){
printf("%f %f\n",array_c[i].real,array_c[i].imag);
}
return 0;
}