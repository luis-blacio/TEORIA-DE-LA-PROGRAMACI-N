//# Taller de Programación en C 


//1.- Suma de digitos de un numero

//a) `for`: `ejercicios/suma_digitos/for.c` 

#include <stdio.h>
int main() {

    int numero, suma = 0, digitos = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Contar el número de dígitos del número
    for (int temp = numero; temp != 0; temp /= 10) {
        digitos++;
    }

    // Calcular la suma de los dígitos
    for (int i = 0; i < digitos; i++) {
        suma += (numero % 10);
        numero /= 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}


// b) `while`: `ejercicios/suma_digitos/while.c` 

#include <stdio.h>
int main() {
    int numero, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}

// c) `do while`: `ejercicios/suma_digitos/do_while.c` 

#include <stdio.h>
int main() {
    int numero, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    do {
        suma += (numero % 10);
        numero /= 10;
    } while (numero != 0);

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}








//2.- Inverso de un número

// a) `for`: `ejercicios/Inverso_numero/for.c` 

#include <stdio.h>
int main() {
    int num, inverso = 0, resto;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    for (; num!= 0; num /= 10) {
        resto = num % 10;
        inverso = inverso * 10 + resto;
    }

    printf("El inverso del número es: %d\n", inverso);
    return 0;
}

// b) `while`: `ejercicios/Inverso_numero/while.c`

#include <stdio.h>
int main() {
    int num, inverso = 0, resto;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    while (num!= 0) {
        resto = num % 10;
        inverso = inverso * 10 + resto;
        num /= 10;
    }

    printf("El inverso del número es: %d\n", inverso);
    return 0;
}

// c) `do while`: `ejercicios/Inverso_numero/do_while.c` 

#include <stdio.h>
int main() {
    int num, inverso = 0, resto;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    do {
        resto = num % 10;
        inverso = inverso * 10 + resto;
        num /= 10;
    } while (num!= 0);

    printf("El inverso del número es: %d\n", inverso);
    return 0;
}







//3.- Potencia mediante sumas sucesivas

// a) `for`: `ejercicios/Potencia_Sumas/for.c` 

#include <stdio.h>
int main() {
    int base, exponente, resultado = 1;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    for (int i = 0; i < exponente; i++) {
        resultado += resultado * (base - 1);
    }

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}

// b) `while`: `ejercicios/Potencia_Sumas/while.c`

#include <stdio.h>
int main() {
    int base, exponente, resultado = 1, i = 0;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    while (i < exponente) {
        resultado += resultado * (base - 1);
        i++;
    }

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}

// c) `do while`: `ejercicios/Potencia_Sumas/do_while.c` 

#include <stdio.h>
int main() {
    int base, exponente, resultado = 1, i = 0;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    do {
        resultado += resultado * (base - 1);
        i++;
    } while (i < exponente);

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}








//4.- Radicación mediante restas sucesivas (RAICES CUBICAS)


// a) `for`: `ejercicios/Radicación_Restas/for.c`

#include <stdio.h>
int main() {
    int num, i, raiz;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    raiz = 0;
    for (i = 0; i * i * i <= num; i++) {
        raiz = i;
    }

    printf("La raíz cúbica de %d es %d\n", num, raiz);
    return 0;
}

// b) `while`: `ejercicios/Radicación_Restas/while.c`

#include <stdio.h>
int main() {
    int num, i, raiz;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    raiz = 0;
    i = 0;
    while (i * i * i <= num) {
        raiz = i;
        i++;
    }

    printf("La raíz cúbica de %d es %d\n", num, raiz);
    return 0;
}

// c) `do while`: `ejercicios/Radicación_Restas/do_while.c` 

#include <stdio.h>
int main() {
    int num, i, raiz;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    raiz = 0;
    i = 0;
    do {
        raiz = i;
        i++;
    } while (i * i * i <= num);

    printf("La raíz cúbica de %d es %d\n", num, raiz);
    return 0;
}








// 5.-Serie de Fibonacci


// a) `for`: `ejercicios/Serie_Fibonacci/for.c`

#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("La serie de Fibonacci es: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

// b) `while`: `ejercicios/Serie_Fibonacci/while.c`

#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 1;

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("La serie de Fibonacci es: ");

    while (i <= n) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    return 0;
}

// c) `do while`: `ejercicios/Serie_Fibonacci/do_while.c` 

#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 1;

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("La serie de Fibonacci es: ");

    do {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    } while (i <= n);

    return 0;
}









// 6.- El Factorial de un numero

// a) `for`: `ejercicios/Factorial_numero/for.c`

#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es %d\n", num, factorial);
    return 0;
}

// b) `while`: `ejercicios/Factorial_numero/while.c`

#include <stdio.h>
int main() {
    int num, factorial = 1, i = 1;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("El factorial de %d es %d\n", num, factorial);
    return 0;
}

// c) `do while`: `ejercicios/Factorial_numero/do_while.c` 

#include <stdio.h>
int main() {
    int num, factorial = 1, i = 1;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    do {
        factorial *= i;
        i++;
    } while (i <= num);

    printf("El factorial de %d es %d\n", num, factorial);
    return 0;
}









// 7.- Suma de una serie aritmética

// a) `for`: `ejercicios/Suma_serieA/for.c`

#include <stdio.h>
int main() {
    int n, suma = 0;

    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    printf("La serie es: ");
    for (int i = 1; i <= n; i++) {
        suma += i;
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\n");

    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}

// b) `while`: `ejercicios/Suma_serieA/while.c`

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;

    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    printf("La serie es: ");
    while (i <= n) {
        suma += i;
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
        i++;
    }
    printf("\n");

    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}

// c) `do while`: `ejercicios/Suma_serieA/do_while.c` 

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;

    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    printf("La serie es: ");
    do {
        suma += i;
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
        i++;
    } while (i <= n);
    printf("\n");

    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}








// 8.-Producto de una serie geométrica

// a) `for`: `ejercicios/Producto_serieA/for.c`

#include <stdio.h>
#include <math.h>
int main() {
    int n, r, producto = 1;
    printf("Ingrese el número de términos (n): ");
    scanf("%d", &n);
    printf("Ingrese la razón (r): ");
    scanf("%d", &r);

    printf("Serie geométrica: ");
    for (int i = 0; i < n; i++) {
        int termino = r * (int) pow(2, i);
        printf("%d ", termino);
        producto *= termino;
    }
    printf("\nProducto de la serie geométrica: %d\n", producto);

    return 0;
}

// b) `while`: `ejercicios/Producto_serieA/while.c`

#include <stdio.h>
#include <math.h>
int main() {
    int n, r, producto = 1, i = 0;
    printf("Ingrese el número de términos (n): ");
    scanf("%d", &n);
    printf("Ingrese la razón (r): ");
    scanf("%d", &r);

    printf("Serie geométrica: ");
    while (i < n) {
        int termino = r * (int)pow(2, i);
        printf("%d ", termino);
        producto *= termino;
        i++;
    }
    printf("\nProducto de la serie geométrica: %d\n", producto);

    return 0;
}

// c) `do while`: `ejercicios/Producto_serieA/do_while.c`

#include <stdio.h>
#include <math.h>
int main() {
    int n, r, producto = 1, i = 0;
    printf("Ingrese el número de términos (n): ");
    scanf("%d", &n);
    printf("Ingrese la razón (r): ");
    scanf("%d", &r);

    printf("Serie geométrica: ");
    do {
        int termino = r * (int)pow(2, i);
        printf("%d ", termino);
        producto *= termino;
        i++;
    } while (i < n);
    printf("\nProducto de la serie geométrica: %d\n", producto);

    return 0;
}








// 9.- Número de dígitos de un número

// a) `for`: `ejercicios/Numero_digitosN/for.c`

#include <stdio.h>
int contarDigitosFor(int num) {
    int contador = 0;
    for (; num!= 0; num /= 10) {
        contador++;
    }
    return contador;
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El número de dígitos es: %d\n", contarDigitosFor(num));
    return 0;
}

// b) `while`: `ejercicios/Numero_digitosN/while.c`

#include <stdio.h>
int contarDigitosWhile(int num) {
    int contador = 0;
    while (num!= 0) {
        num /= 10;
        contador++;
    }
    return contador;
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El número de dígitos es: %d\n", contarDigitosWhile(num));
    return 0;
}

// c) `do while`: `ejercicios/Numero_digitosN/do_while.c` 

#include <stdio.h>
int contarDigitosDoWhile(int num) {
    int contador = 0;
    do {
        num /= 10;
        contador++;
    } while (num!= 0);
    return contador;
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El número de dígitos es: %d\n", contarDigitosDoWhile(num));
    return 0;
}






// 10.- Verificar si un número es primo

// a) `for`: `ejercicios/Verificar_primo/for.c`

#include <stdio.h>
int es_primo_for(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // no es primo
        }
    }
    return 1; // es primo
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (es_primo_for(num)) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }
    return 0;
}

// b) `while`: `ejercicios/Verificar_primo/while.c`

#include <stdio.h>
int es_primo_while(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return 0; // no es primo
        }
        i++;
    }
    return 1; // es primo
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (es_primo_while(num)) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }
    return 0;
}

// c) `do while`: `ejercicios/Verificar_primo/do_while.c` 

#include <stdio.h>
int es_primo_do_while(int n) {
    int i = 2;
    do {
        if (n % i == 0) {
            return 0; // no es primo
        }
        i++;
    } while (i * i <= n);
    return 1; // es primo
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (es_primo_do_while(num)) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }
    return 0;
}








// 11.- Encontrar el MCD (Máximo Común Divisor)

// a) `for`: `ejercicios/Encontrar_MCD/for.c`

#include <stdio.h>
int mcd_for(int a, int b) {
    int i, mcd = 1;
    for (i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }
    return mcd;
}
int main() {
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("El MCD de %d y %d es %d\n", a, b, mcd_for(a, b));
    return 0;
}

// b) `while`: `ejercicios/Encontrar_MCD/while.c`

#include <stdio.h>
int mcd_while(int a, int b) {
    int i = 2, mcd = 1;
    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
        i++;
    }
    return mcd;
}
int main() {
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("El MCD de %d y %d es %d\n", a, b, mcd_while(a, b));
    return 0;
}

// c) `do while`: `ejercicios/Encontrar_MCD/do_while.c` 

#include <stdio.h>
int mcd_do_while(int a, int b) {
    int i = 2, mcd = 1;
    do {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
        i++;
    } while (i <= a && i <= b);
    return mcd;
}
int main() {
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("El MCD de %d y %d es %d\n", a, b, mcd_do_while(a, b));
    return 0;
}










// 12.- Sumar los números impares hasta n

// a) `for`: `ejercicios/Sumar_impares/for.c`

#include <stdio.h>
int main() {
    int n, suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2!= 0) {
            suma += i;
            printf("%d + ", i);
        }
    }
    printf("\nLa suma de los números impares es: %d\n", suma);

    return 0;
}

// b) `while`: `ejercicios/Sumar_impares/while.c`

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2!= 0) {
            suma += i;
            printf("%d + ", i);
        }
        i++;
    }
    printf("\nLa suma de los números impares es: %d\n", suma);

    return 0;
}

// c) `do while`: `ejercicios/Sumar_impares/do_while.c` 

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    do {
        if (i % 2!= 0) {
            suma += i;
            printf("%d + ", i);
        }
        i++;
    } while (i <= n);
    printf("\nLa suma de los números impares es: %d\n", suma);

    return 0;
}





//13.- Sumar los números pares hasta n

// a) `for`: `ejercicios/Sumar_pares/for.c`

#include <stdio.h>
int main() {
    int n, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        suma += i;
        printf("%d + ", i);
    }

    printf("\nLa suma de los números pares es: %d\n", suma);

    return 0;
}

// b) `while`: `ejercicios/Sumar_pares/while.c`

#include <stdio.h>
int main() {
    int n, suma = 0, i = 2;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i;
        printf("%d + ", i);
        i += 2;
    }

    printf("\nLa suma de los números pares es: %d\n", suma);

    return 0;
}

// c) `do while`: `ejercicios/Sumar_pares/do_while.c` 

#include <stdio.h>
int main() {
    int n, suma = 0, i = 2;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    do {
        suma += i;
        printf("%d + ", i);
        i += 2;
    } while (i <= n);

    printf("\nLa suma de los números pares es: %d\n", suma);

    return 0;
}








// 14.- Suma de los cuadrados de los primeros n números

// a) `for`: `ejercicios/Sumar_cuadrados/for.c`

#include <stdio.h>
int main() {
    int n, suma = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i;
        printf("%d^2 + ", i);
    }
    printf("\b\b = %d\n", suma);

    return 0;
}

// b) `while`: `ejercicios/Sumar_cuadrados/while.c`

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i * i;
        printf("%d^2 + ", i);
        i++;
    }
    printf("\b\b = %d\n", suma);

    return 0;
}

// c) `do while`: `ejercicios/Sumar_cuadrados/do_while.c` 

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        suma += i * i;
        printf("%d^2 + ", i);
        i++;
    } while (i <= n);
    printf("\b\b = %d\n", suma);

    return 0;
}





// 15.- Suma del cubo de los primeros n números

// a) `for`: `ejercicios/Sumar_cubos/for.c`

#include <stdio.h>
int main() {
    int n, suma = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
        printf("%d^3 + ", i);
    }
    printf("\b\b = %d\n", suma);

    return 0;
}

// b) `while`: `ejercicios/Sumar_cubos/while.c`

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i * i * i;
        printf("%d^3 + ", i);
        i++;
    }
    printf("\b\b = %d\n", suma);

    return 0;
}

// c) `do while`: `ejercicios/Sumar_cubos/do_while.c` 

#include <stdio.h>
int main() {
    int n, suma = 0, i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        suma += i * i * i;
        printf("%d^3 + ", i);
        i++;
    } while (i <= n);
    printf("\b\b = %d\n", suma);

    return 0;
}









// 16.- Suma de una serie de números fraccionarios

// a) `for`: `ejercicios/Sumar_Fraccionarios/for.c`
#include <stdio.h>
int main() {
    int n;
    float suma = 0.0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    printf("La suma de la serie es: ");
    for(int i = 1; i <= n; i++) {
        printf("1/%d + ", i);
    }
    printf("\nResultado decimal: %.2f\n", suma);

    int denominador = 1;
    for(int i = 1; i <= n; i++) {
        denominador *= i;
    }

    int numerador = (int) (suma * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}

// b) `while`: `ejercicios/Sumar_Fraccionarios/while.c`
#include <stdio.h>
int main() {
    int n, i = 1;
    float suma = 0.0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    while(i <= n) {
        suma += 1.0 / i;
        i++;
    }

    printf("La suma de la serie es: ");
    i = 1;
    while(i <= n) {
        printf("1/%d + ", i);
        i++;
    }
    printf("\nResultado decimal: %.2f\n", suma);

    int denominador = 1;
    i = 1;
    while(i <= n) {
        denominador *= i;
        i++;
    }

    int numerador = (int) (suma * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}

// c) `do while`: `ejercicios/Sumar_Fraccionarios/do_while.c`
#include <stdio.h>
int main() {
    int n, i = 1;
    float suma = 0.0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        suma += 1.0 / i;
        i++;
    } while(i <= n);

    printf("La suma de la serie es: ");
    i = 1;
    do {
        printf("1/%d + ", i);
        i++;
    } while(i <= n);
    printf("\nResultado decimal: %.2f\n", suma);

    int denominador = 1;
    i = 1;
    do {
        denominador *= i;
        i++;
    } while(i <= n);

    int numerador = (int) (suma * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}








// 17.- Producto de una serie de números fraccionarios

// a) `for`: `ejercicios/producto_Fraccionarios/for.c`

#include <stdio.h>
int main() {
    int n;
    float producto = 1.0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    printf("La serie del producto es: ");
    for(int i = 1; i <= n; i++) {
        printf("1/%d * ", i);
    }
    printf("\nResultado decimal: %.2f\n", producto);

    int denominador = 1;
    for(int i = 1; i <= n; i++) {
        denominador *= i;
    }

    int numerador = (int) (producto * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}

// b) `while`: `ejercicios/producto_Fraccionarios/while.c`

#include <stdio.h>
int main() {
    int n, i = 1;
    float producto = 1.0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    while(i <= n) {
        producto *= 1.0 / i;
        i++;
    }

    printf("La serie del producto es: ");
    i = 1;
    while(i <= n) {
        printf("1/%d * ", i);
        i++;
    }
    printf("\nResultado decimal: %.2f\n", producto);

    int denominador = 1;
    i = 1;
    while(i <= n) {
        denominador *= i;
        i++;
    }

    int numerador = (int) (producto * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}

// c) `do while`: `ejercicios/producto_Fraccionarios/do_while.c`

#include <stdio.h>
int main() {
    int n, i = 1;
    float producto = 1.0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        producto *= 1.0 / i;
        i++;
    } while(i <= n);

    printf("La serie del producto es: ");
    i = 1;
    do {
        printf("1/%d * ", i);
        i++;
    } while(i <= n);
    printf("\nResultado decimal: %.2f\n", producto);

    int denominador = 1;
    i = 1;
    do {
        denominador *= i;
        i++;
    } while(i <= n);

    int numerador = (int) (producto * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}








// 18.- Contar los números primos hasta n

// a) `for`: `ejercicios/contador_primos/for.c`

#include <stdio.h>
int main() {
    int n, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    printf("Los números primos hasta %d son: ", n);
    for (int i = 2; i <= n; i++) {
        int es_primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                es_primo = 0;
                break;
            }
        }
        if (es_primo) {
            printf("%d ", i);
            contador++;
        }
    }
    printf("\nHay %d números primos hasta %d.\n", contador, n);
    return 0;
}

// b) `while`: `ejercicios/contador_primos/while.c`

#include <stdio.h>
int main() {
    int n, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    int i = 2;
    printf("Los números primos hasta %d son: ", n);
    while (i <= n) {
        int es_primo = 1;
        int j = 2;
        while (j * j <= i) {
            if (i % j == 0) {
                es_primo = 0;
                break;
            }
            j++;
        }
        if (es_primo) {
            printf("%d ", i);
            contador++;
        }
        i++;
    }
    printf("\nHay %d números primos hasta %d.\n", contador, n);
    return 0;
}

// c) `do while`: `ejercicios/contador_primos/do_while.c`

#include <stdio.h>
int main() {
    int n, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    int i = 2;
    printf("Los números primos hasta %d son: ", n);
    do {
        int es_primo = 1;
        int j = 2;
        do {
            if (i % j == 0) {
                es_primo = 0;
                break;
            }
            j++;
        } while (j * j <= i);
        if (es_primo) {
            printf("%d ", i);
            contador++;
        }
        i++;
    } while (i <= n);
    printf("\nHay %d números primos hasta %d.\n", contador, n);
    return 0;
}







// 19.- Calcular el n-ésimo número triangular

// a) `for`: `ejercicios/contador_primos/for.c`

#include <stdio.h>
int main() {
    int n, triangular = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        triangular += i;
        printf("%d ", i);
    }
    printf("\nEl %d-ésimo número triangular es: %d\n", n, triangular);

    return 0;
}

// b) `while`: `ejercicios/contador_primos/while.c`

#include <stdio.h>
int main() {
    int n, triangular = 0, i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    while (i <= n) {
        triangular += i;
        printf("%d ", i);
        i++;
    }
    printf("\nEl %d-ésimo número triangular es: %d\n", n, triangular);

    return 0;
}

// c) `do while`: `ejercicios/contador_primos/do_while.c`

#include <stdio.h>
int main() {
    int n, triangular = 0, i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        triangular += i;
        printf("%d ", i);
        i++;
    } while (i <= n);
    printf("\nEl %d-ésimo número triangular es: %d\n", n, triangular);

    return 0;
}








// 20.- Calcular la suma de los factoriales de los primeros n números

// a) `for`: `ejercicios/Suma_Factoriales/for.c`

#include <stdio.h>
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
        printf("%d! + ", i);
    }
    printf("\nLa suma de los factoriales es: %d\n", suma);

    return 0;
}

// b) `while`: `ejercicios/Suma_Factoriales/while.c`

#include <stdio.h>
int factorial(int n) {
    int resultado = 1;
    int i = 1;
    while (i <= n) {
        resultado *= i;
        i++;
    }
    return resultado;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma += factorial(i);
        printf("%d! + ", i);
        i++;
    }
    printf("\nLa suma de los factoriales es: %d\n", suma);

    return 0;
}

// c) `do while`: `ejercicios/Suma_Factoriales/do_while.c`

#include <stdio.h>
int factorial(int n) {
    int resultado = 1;
    int i = 1;
    do {
        resultado *= i;
        i++;
    } while (i <= n);
    return resultado;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = 0;
    int i = 1;
    do {
        suma += factorial(i);
        printf("%d! + ", i);
        i++;
    } while (i <= n);
    printf("\nLa suma de los factoriales es: %d\n", suma);

    return 0;
}