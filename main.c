/*
el 4 pero con menu que lea numero entero y numero real
    1in = 2.54cm    ||1ft = 30.48   ||1ft = 12in
    0.- cm --> in
    1.- cm --> ft
    2.- in --> cm
    3.- in --> ft
    4.- ft --> cm
    5.- ft --> in
*/
#include<stdio.h>

void Menu();
double FN_0_cm_in(float);
double FN_1_cm_ft(float);
double FN_2_in_cm(float);
double FN_3_in_ft(float);
double FN_4_ft_cm(float);
double FN_5_ft_in(float);
double Validar_menu(int, float);

int main(){
    int opcion;
    float valor;
    double resultado;

    Menu();
    scanf("%d %f", &opcion, &valor);
    resultado = Validar_menu(opcion, valor);
    printf("=============================================================\n");
    printf("el resultado de su ocnversion es: %.2f", resultado);

    return 0;
}


//funcion solo para mostrar menu
void Menu(){
    printf("seleccione un numero dependiendo de la operacion que desee realizar (conversion de medidas)\n");
    printf("ingresar en forma opcion, valor\n");
    printf("0.- cm a in\n");
    printf("1.- cm a ft\n");
    printf("2.- in a cm\n");
    printf("3.- in a ft\n");
    printf("4.- ft a cm\n");
    printf("5.- ft a in\n");
    printf("=============================================================\n");
}


//ingresamos una longitut inicial en centimetros
//nos regresa la exprecion que convierte a pulgadas
double FN_0_cm_in(float longcm){return longcm/2.54;}

//ingresamos la longitud en cm
//nos regresa la exprecion que lo convierte a ft
double FN_1_cm_ft(float longcm){return longcm/30.48;}

//ingresa una longitud en pulgadas
//regresa una ecprecion con la operacion que la convierte a cm
double FN_2_in_cm(float longin){return longin*2.54;}

//ingresa una longitud en pulgadas
//regresa la exprecion que la convierte a ft
double FN_3_in_ft(float longin){return longin/12;}

//ingresa una longitud en ft
//nos regresa la longitud en cm
double FN_4_ft_cm(float longft){return longft*30.48;}

//ingresa una longitud en ft
//nos regresa la longitud en in
double FN_5_ft_in(float longft){return longft*12;}

//esta funcion valida la operacion y ejecuta la operacion
//regresa el resultado de la operacion
double Validar_menu(int opc, float longitud){
    if((opc >= 0 && opc <= 5 ) && (longitud >= 0) ){
        switch (opc)
        {
        case 0:
            return FN_0_cm_in(longitud);
            break;
        case 1:
            return FN_1_cm_ft(longitud);
            break;
        case 2:
            return FN_2_in_cm(longitud);
            break;
        case 3:
            return FN_3_in_ft(longitud);
            break;
        case 4:
            return FN_4_ft_cm(longitud);
            break;
        case 5:
            return FN_5_ft_in(longitud);
            break;
        default:
            break;
        }
    } else {
        printf("datos no validos");
    }
}
