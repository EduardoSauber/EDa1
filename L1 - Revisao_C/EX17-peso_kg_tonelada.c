#include <stdio.h>

int validaPeso(double pesoKG){
    if (pesoKG >= 0){
        return 1;
    }else{
        return 0;
    }
}

void fazTonelada(double pesoKG){
    printf("%.4lf\n",(pesoKG/1000));
}

void fazGrama(double pesoKG){
    printf("%.4lf\n",(pesoKG*1000));
}

/*
int main(){
    double peso = 355;
    printf("%d\n",validaPeso(peso));
    fazTonelada(peso);
    fazGrama(peso);

    return 0;
}
*/