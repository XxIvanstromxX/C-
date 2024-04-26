#include <iostream>
#include <cmath>

using namespace std;

//Definicion de las funciones 

float media(float *v){
    system("clear");
    float suma=0.0,media;
    for (int i = 0; i < 10; i++)
    {
        suma+=*(v+i);
    }
    media=suma/10;
    cout<<"\nLa media es: "<<media;
    getchar();
    return(media);
}

void desviacion(float *v){
    system("clear");
    float desviacion=0.0;
    float vec=varianza(v);
    desviacion = sqrt(vec);
}

float varianza(float *v){
    system("clear");
    float suma=0;
    float m=media(v);
    float varianza;
    for (int i = 0; i < 10; i++)
    {
        suma+=pow(v[i]-m,2);
    }
    varianza=suma/(10-1);
    cout<<"La varianza es: "<<varianza;
    return(varianza);
    getchar();
}

void imprimirVector(float *v){
    system("clear");
    int contador=0;
    cout<<"Vector:";
    for (int i = 0; i < 10; i++)
    {
        ++contador;
        cout<<"\nElemento "<<contador<<": "<<v[i];
    }
    getchar();
}

void leerVector(float *v){
    system("clear");
    int contador=0;
    cout<<"Introduce el vector\n";
    for (int i = 0; i < 10; i++)
    {
        ++contador;
        cout<<"Elemento "<<contador<<": ";
        cin>>v[i]; cout<<"\n";
    }
    getchar();
}

void menu(void){
    float vector[10];
    int opc;
    do
    {
    getchar();
    system("clear");
    cout<<"\nMENU ESTADISTICA\n";
    cout<<"1. Leer vector\n";
    cout<<"2. imprimir vector\n";
    cout<<"3. Media\n";
    cout<<"4. Varianza\n";
    cout<<"5. Desviacion\n";
    cout<<"6. Salir\n";
    cout<<"Introduce la opcion deseada: ";
    cin>>opc;
    switch (opc)
    {
    case 1:
        leerVector(vector);
        break;
    case 2:
        imprimirVector(vector);
        break;
    case 3:
        cout<<"Media Vector";
        media(vector);
        break;
    case 4:
        cout<<"Varianza Vector";
        varianza(vector);
        break;
    case 5:
        cout<<"Desviacion Estandar";
        desviacion(vector);
    case 6:
        cout<<"Salir";
        getchar();
    default:
        break;
    }
    } while (opc!=6);
    getchar();
}

int main(){
    system("clear");
    menu();
    return 0;
}