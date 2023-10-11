#include <stdio.h>
//definir la funcion de encontrar minimo 
int funcion_min(int arr[]){
    int size = sizeof(arr);
    //iniciar el valor inicial sea el indice 0 del array para compararlo recorriendo el array
    int min = arr[0];
    //recorrer el array de forma lienal
    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            //si encuentra un valor menor al que esta asignada la variable min se lo asigna de nuevo a la variable min
            min = arr[i];
        }

    }
    //devuelve el valor minimo del array
    return min;
}

//definir la funcion encontrar maximo
int funcion_max(int arr[]){
    int size = sizeof(arr);
    //iniciar el valor inicial sea el indice 0 del array para compararlo recorriendo el array
    int max = arr[0];
    //recorrer el array de forma lineal
    for (int i = 0; i < size; i++){
        if (arr[i] > max){
            //si encuentra un valor mayor al que se le asigno a la variable max se lo asigna sobreescribiendo la nueva variable max
            max = arr[i];
        }

    }
    return max;
}

void funcion_min_max(int *arreglo, int *min, int *max, int size){
    //se igualan los punteros para iniciarlos con el array para luego compararlos
    *max = *min = *arreglo;
    // se comparan los valores con un for
    for (int i = 1; i < size; i++) {
        //se compara el siguiente valor del arreglo con el maximo
        if (*(arreglo + i) > *max) {
            *max = *(arreglo + i);
        }
        //se compara el siguiente valor del arreglo con el minimo
        if (*(arreglo + i) < *min){
            *min = *(arreglo - i);
        }
        //muy parecida a una que se encontraba en la presentacion
    }
}

main(){
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    //llamar a las funciones en la main
    funcion_max(arreglo);
    funcion_min(arreglo);

    return 0

}