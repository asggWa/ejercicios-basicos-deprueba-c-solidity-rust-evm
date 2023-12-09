#include <stdio.h>
#include <stdlib.h>
// evito c++ por el momento
//#include ...

int main (void){  /// Cuando analicemos el parametro de entrada lo suprimiremos por el void que recoge
    //::char*[] param vamos a definirlo local y seguimos.
    //podriamos defiir el char arriba del main. ESo sería usar variables globales.
    //ya veremos. Nosotros no adjuntamos variable GLOBAL ni constante.
    //se añadiran luego, cuando saquemos las funciones a la librería, pero para
    // entonces tendremos muchos warning y errores corregidos. Cuando lleguemos.
    
    
    
    int a=0; //creamos una serie de variables 
    int b=1;//para asignarlas ramidamente a los punteros
    int aux0=8;//cuando compile, gracias a esta práctica
    int aux1=32;// trendremos un apuntador que contendrá la 
    int aux2=128;// dirección de memoria que guarda el valor
    int aux3=1024;// en este caso es un entero de un mega, pero la dirección son 8 bits
    int *a=&a;// aquí puntero de entero de a se asigna al entero a definido arriba
    int *b=&b;// en sucesión b al entero 1
    int *aux0=&aux0;// sucesivamente y se puede hacer print, pero de momento
    int *aux1=&aux1;//una variable y su registro de memoria 
    int *aux2=&aux2;//y aunque ocupe memoria, es para
    int *aux3=&aux3;//practicar y es nuestro sistema.
    //happy hack¡¡¡
    


    //char[]*guarda =param//verificar cóo se define un char[] puntero que servirá para recorrer direcciones del array de char. Conocido como string. en otros lenguajes no y he visto como lo trata c++ a ese nivel.
    //asignamos para asegurar registro en el return,
    //estamos devolviendo int al main, pero estará en una función
    //el parámetro local lo asignamos en su creación
    // y la práctica consiste en asignar puntero de  [i] teniendo 
    printf("Hola mundo: Web3");
    // encuenta poder reocoger tanto la dirección coomo el contenido de su posiciñon
    //printf"\ntip: En c la dirección sería &param ---> ejemplo: podría dar error guarda[tampilla de llamda-1] =&param
    //podemos devolver un int pero trabajamos un array de puntero.");

    return 0; // devolvemos 0 al sistema cuando lleguemos a esta instrucción. Si compilas no llegará. Podremos arreglar rapidamente el código.

}