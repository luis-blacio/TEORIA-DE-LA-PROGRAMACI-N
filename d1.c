//El primer que se debe realizar es por dar comienzo al algoritmo en este caso con el lenguaje C
#include <stdio.h>
//Comenzamos a declarar variables
int main(){
    //Declaro la variable entera
    int diaN;
    //Declaro la variable con decimales
    float PesoKg;
    // Declaro la variable con un caracter 
    char Apeli;

    //Damos la bienvenida al usuario
    printf("BIENVENIDO QUERIDO USUARIO A ESTE PEQUEÑA RECOPILACIÓN DE DATOS RANDOM\n" ) ;

    //Pedimos amablemente que el usuario ingrese su dia de nacimiento 
    printf("POR FAVOR, ESCRIBA SU DIA DE NACIMIENTO\n") ;

    //Uso el declarador ampersand en  "scanf" como indicador de que se esta pasando la direccion de memoria de una variable en lugar de un valor
    scanf("%d", &diaN) ;

    //Volvemos a pedir amablemente al usuario que en este caso ingrese su peso exacto en Kg 
    printf("POR FAVOR, EN ESTE CASO ESCRIBA SU PESO EXACTO EN KG (KILOGRAMOS) .....  (Usar el el punto como separador decimal (.) \n");

    // //Uso el declarador ampersand en  "scanf" como indicador de que se esta pasando la direccion de memoria de una variable en lugar de un valor
    scanf("%f", &PesoKg) ;

    //Por ultima vez le volvemos a pedir al usuario que en este caso ingrese la inicial de su apellido
    printf("POR FAVOR, EN ESTE CASO ESCRIBA LA INCIAL DE SU APELLIDO\n");

     
     //Genero a traves de la funcion mientras (while) para el salto de linea antes de que el programa lea la inicial
     while ((getchar()) != '\n');
     
      //Uso el declarador ampersand en  "scanf" como indicador de que se esta pasando la direccion de memoria de una variable en lugar de un valor
     scanf("%c", &Apeli) ;
     
      // Uso pritf para que el usuario reciba los datos que el escribio
    printf("SU DIA DE NACIMIENTO FUE EL DIA = %d .\n", diaN) ;

    // Se tuvo  que usar el %.2f para que solo me presente los valores decimales solo cuando el usuario utiliza el punto punto, se lo podria considerar un formato decimal en si //
    printf("SU PESO ES DE  = %.2f KILOGRAMOS.\n", PesoKg) ;
    printf("LA INICIAL DE SU APELLIDO es = %c \n", Apeli) ;
    return 0 ;
}
