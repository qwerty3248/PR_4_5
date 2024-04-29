#include <cmath>
#include <iostream>

using namespace std;





#define TAM 10


void imprimirLaberinto(int laberinto[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", laberinto[i][j]);
        }
        printf("\n");
    }
}

void generarLaberinto(int laberinto[TAM][TAM]) {
    // Inicializar todo el laberinto como muros (1)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            laberinto[i][j] = 1;
        }
    }

    // Establecer entrada en la esquina superior izquierda
    laberinto[0][0] = 0;

    // Crear dos caminos hacia la salida (esquina inferior derecha)
    for (int i = 1; i < TAM; i++) {
        laberinto[i][1] = 0;
    }
    for (int i = 1; i < TAM - 1; i++) {
        laberinto[TAM - 2][i] = 0;
    }
}



int main (void){
    
  cout << "La pos de inicio es (0,0) y la pos final es la (TAM-1,TAM-1)\n";
  cout << "El tamano siempre sera un laberinto de 10*10\n";
  
  //Se da por hecho de que la posicion inicial  y la posicion final estara
  //dentro de la matriz además de que la matriz tendra un tamaño valido
  
  int laberinto[TAM][TAM];
  generarLaberinto(laberinto);
  laberinto[0][TAM-9] = 0;
  //comientzo en 3,1 acabo en 3,8
  for (int i = 1; i <= TAM-2; i++ ){
  	laberinto[3][i] = 0;
  }
  //de la fila 3 a la 8
  for (int i = 3; i <= TAM-3; i++){
  	laberinto[i][TAM-2] = 0;
  }
  laberinto[TAM-2][TAM-1]= 0;
  laberinto[TAM-1][TAM-1]= 0;
  laberinto[9][1]=1;
  cout << endl;
  imprimirLaberinto(laberinto);
  cout << endl;
  cout << "Este es el laberinto\n";
  
  
  //Este sera el laberinto con el cual se va a probar el 
  //algortimo
  
                           
  				;	
  
  
  
  





}

