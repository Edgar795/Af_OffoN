#include <stdio.h>

int main() {
    int off=0, on=1, pulsar;

    while (1) {
        printf("Escribe on=1 para encender el foco o off=0 para apagarlo: ");
        scanf("%d", &pulsar);

        if (pulsar == on) {
            printf("El foco esta encendido.\n");
        } else if (pulsar == off) {
            printf("El foco esta apagado.\n");
        }else if(pulsar!=0 &&1){
			printf("valor incorrecto\n");
		}  
    }

    return 0;
}
