#include <stdio.h>
#include <math.h>

//definir funcion para recorrer un array de forma lineal
int funcion_1(int num, int arr[], int size){
    //inicio el recorrido por el array
    for (int i = 0; i < size; i++){
        //comparar cada elemento del array con el elemento proporcionado por el usuario
        if (arr[i] == num) {
            //devuelve la posicion del elemento
            return i;
        }
        else {
            //devuelve el mensaje de error indicando que el elemento proporcionado no esta en el array
            return printf("El elemento no existe en el arreglo");
        }
    }
}
//funcion de busqueda binaria (no recursiva)
int funcion_2(int num, int arr[], int size){
    int min = 0;
    int max = size - 1;
    //se asigna la condicion para recorrer el array
    while (min <= max) {
        //se saca el numero del medio asignado del array y empieza a recorrer el array de manera no lineal
        int prom = floor((min + max)/2);
        //si la posicion del array es igual a la del numero asignado entonces rompe el ciclo y devuelve la posicion
        if (arr[prom] == num){
            return prom;
            break;
        }
        //si la posicion del medio en el array es menor en la que se encuentra el numero entonces se asigna un nuevo valor del minimo para volver a realizar la busqueda
        if (arr[prom] < num){
            min = prom + 1; 
        }
        //si la posicion del medio en el array es mayor en la que se encuentra el numero entonces se asigna un nuevo valor del maximo para volver a realizar la busqueda 
        if (arr[prom] > num){
            max = prom - 1;
        }
    }
    return printf("El elemento no se encuentra en el arreglo")
}
//se define la tercera funcion de manera recursiva, basicamente es igual a la funcion anterior con la unica diferencia de que se llama a si mismo
int funcion_3 (int num, int arr[], int min, int max){
    int prom = floor((min + max)/2);
    if (min > max){
        return printf("El elemento no se encuentra en el arreglo");
    }
    if (arr[prom] == num){
        return prom;
    }
    if (arr[prom] < num){
        min = prom + 1; 
    }
    if (arr[prom] > num){
        max = prom - 1;
    }
    //retorna un llamado a si misma haciendo a la funcion recursiva, hasta que no caiga en el caso 
    return funcion_3(num, arr, min, max);
}


int main() {
    int entrada, size;
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    size = sizeof(arreglo);
    int max_value = size - 1;
    int min_value = 0;

    printf("porfavor ingrese un numero entero: ");
    scanf("%d", entrada);
    funcion_1(entrada, arreglo, size);
    funcion_2(entrada, arreglo, size);
    funcion_3(entrada, arreglo, min_value, max_value);

    return 0;
}