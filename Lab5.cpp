#include <iostream>  
#include <locale>    

using namespace std;

// Funci�n para Programa 1: Determinar si un n�mero es positivo o negativo
void programa1() {
    int numero;
    do {
        cout << "Ingrese un n�mero (0 para finalizar): ";
        cin >> numero;
        if (numero > 0) {
            cout << "El n�mero es positivo." << endl;
        } else if (numero < 0) {
            cout << "El n�mero es negativo." << endl;
        } else {
            cout << "Programa finalizado." << endl;
        }
    } while (numero != 0);
}

// Funci�n para Programa 2: Clasificar piezas seg�n el peso
void programa2() {
    double peso;
    char respuesta;
    int piezasEntre9_8y10_2 = 0, piezasMas10_2 = 0, piezasMenos9_8 = 0, totalPiezas = 0;

    do {
        cout << "Ingrese el peso de la pieza (en kilogramos): ";
        cin >> peso;
        if (peso >= 9.8 && peso <= 10.2) {
            piezasEntre9_8y10_2++;
        } else if (peso > 10.2) {
            piezasMas10_2++;
        } else {
            piezasMenos9_8++;
        }
        totalPiezas++;
        cout << "�Desea ingresar otra pieza? (S/N): ";
        cin >> respuesta;
        respuesta = tolower(respuesta);
    } while (respuesta == 's');

    cout << "Cantidad de piezas entre 9.8 Kg y 10.2 Kg: " << piezasEntre9_8y10_2 << endl;
    cout << "Cantidad de piezas con m�s de 10.2 Kg: " << piezasMas10_2 << endl;
    cout << "Cantidad de piezas con menos de 9.8 Kg: " << piezasMenos9_8 << endl;
    cout << "Cantidad total de piezas procesadas: " << totalPiezas << endl;
}

// Funci�n para Programa 3: Determinar cu�ntos d�gitos tiene un n�mero
void programa3() {
    int numero;
    do {
        cout << "Ingrese un n�mero entre 0 y 999 (0 para finalizar): ";
        cin >> numero;
        if (numero == 0) {
            cout << "Programa finalizado." << endl;
            break;
        } else if (numero < 0 || numero > 999) {
            cout << "N�mero fuera del rango permitido. Intente nuevamente." << endl;
        } else {
            if (numero < 10) {
                cout << "El n�mero tiene 1 d�gito." << endl;
            } else if (numero < 100) {
                cout << "El n�mero tiene 2 d�gitos." << endl;
            } else {
                cout << "El n�mero tiene 3 d�gitos." << endl;
            }
        }
    } while (numero != 0);
}

// Funci�n para Programa 4: Contar n�meros pares e impares
void programa4() {
    int cantidad, numero, pares = 0, impares = 0;
    cout << "Ingrese la cantidad de n�meros a procesar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese un n�mero: ";
        cin >> numero;
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Cantidad de n�meros pares: " << pares << endl;
    cout << "Cantidad de n�meros impares: " << impares << endl;
}

// Funci�n para Programa 5: Contar notas mayores o iguales a 7
void programa5() {
    int nota, mayores = 0, menores = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota del alumno " << (i + 1) << ": ";
        cin >> nota;
        if (nota >= 7) {
            mayores++;
        } else {
            menores++;
        }
    }

    cout << "Cantidad de alumnos con notas mayores o iguales a 7: " << mayores << endl;
    cout << "Cantidad de alumnos con notas menores a 7: " << menores << endl;
}

// Funci�n para Programa 6: Ingresar sueldos de empleados y clasificarlos
void programa6() {
    int cantidadEmpleados;
    int sueldosMayoresIguales7000 = 0, sueldosMenores7000 = 0;

    cout << "Ingrese la cantidad de empleados: ";
    cin >> cantidadEmpleados;

    for (int i = 1; i <= cantidadEmpleados; i++) {
        double sueldo;
        cout << "Ingrese el sueldo del empleado " << i << ": ";
        cin >> sueldo;
        if (sueldo >= 7000) {
            sueldosMayoresIguales7000++;
        } else {
            sueldosMenores7000++;
        }
    }

    cout << "Cantidad de sueldos mayores o iguales a 7000: " << sueldosMayoresIguales7000 << endl;
    cout << "Cantidad de sueldos menores a 7000: " << sueldosMenores7000 << endl;
}

// Funci�n para Programa 7: Sumar n�meros ingresados por el usuario hasta que ingrese 0
void programa7() {
    int numero, suma = 0;
    do {
        cout << "Ingrese un n�mero (0 para finalizar): ";
        cin >> numero;
        suma += numero;
    } while (numero != 0);

    cout << "La suma de los n�meros ingresados es: " << suma << endl;
}

// Funci�n para Programa 8: Encontrar el mayor y menor de una serie de n�meros
void programa8() {
    int cantidad, numero, mayor, menor;
    cout << "Ingrese la cantidad de n�meros a procesar: ";
    cin >> cantidad;

    cout << "Ingrese un n�mero: ";
    cin >> numero;
    mayor = menor = numero;

    for (int i = 1; i < cantidad; i++) {
        cout << "Ingrese un n�mero: ";
        cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El n�mero mayor es: " << mayor << endl;
    cout << "El n�mero menor es: " << menor << endl;
}

// Funci�n para Programa 9: Calcular promedio de n n�meros
void programa9() {
    int cantidad;
    double numero, suma = 0;
    cout << "Ingrese la cantidad de n�meros a promediar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese un n�mero: ";
        cin >> numero;
        suma += numero;
    }

    cout << "El promedio es: " << suma / cantidad << endl;
}

// Funci�n para Programa 10: Contar cu�ntos n�meros son positivos, negativos o ceros
void programa10() {
    int cantidad, numero, positivos = 0, negativos = 0, ceros = 0;
    cout << "Ingrese la cantidad de n�meros a procesar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese un n�mero: ";
        cin >> numero;
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    cout << "Cantidad de n�meros positivos: " << positivos << endl;
    cout << "Cantidad de n�meros negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;
}

// Funci�n principal que muestra el men� de opciones
int main() {
    setlocale(LC_ALL, "");  // Configura la localizaci�n para el uso de caracteres especiales
    int opcion;

    do {
        // Muestra el men� de opciones
        cout << "\nMen� de Opciones:" << endl;
        cout << "1. Determinar si un n�mero es positivo o negativo" << endl;
        cout << "2. Clasificar piezas seg�n el peso" << endl;
        cout << "3. Determinar cu�ntos d�gitos tiene un n�mero" << endl;
        cout << "4. Contar n�meros pares e impares" << endl;
        cout << "5. Contar notas mayores o iguales a 7" << endl;
        cout << "6. Ingresar sueldos de empleados y clasificarlos" << endl;
        cout << "7. Sumar n�meros ingresados por el usuario hasta que ingrese 0" << endl;
        cout << "8. Encontrar el mayor y menor de una serie de n�meros" << endl;
        cout << "9. Calcular promedio de n n�meros" << endl;
        cout << "10. Contar cu�ntos n�meros son positivos, negativos o ceros" << endl;
        cout << "11. Salir" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        // Utiliza la estructura switch para seleccionar la opci�n
        switch (opcion) {
            case 1:
                programa1();
                break;
            case 2:
                programa2();
                break;
            case 3:
                programa3();
                break;
            case 4:
                programa4();
                break;
            case 5:
                programa5();
                break;
            case 6:
                programa6();
                break;
            case 7:
                programa7();
                break;
            case 8:
                programa8();
                break;
            case 9:
                programa9();
                break;
            case 10:
                programa10();
                break;
            case 11:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opci�n no v�lida. Intente nuevamente." << endl;
        }

    } while (opcion != 11);  // Repite el men� hasta que el usuario seleccione salir

    return 0;
}
