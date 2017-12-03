#include <stdio.h>
void main(){
    printf("Nombre d'octets:\n");
    printf("int:%d octets\n",sizeof(int));
    printf("char:%d byte\n",sizeof(char));
    printf("short:%d octets\n",sizeof(short));
    printf("long:%d octets\n",sizeof(long));
    printf("float:%d octets\n",sizeof(float));
    printf("double:%d octets\n",sizeof(double));
    printf("long double:%d octets\n",sizeof(long double));
    getchar();

}
