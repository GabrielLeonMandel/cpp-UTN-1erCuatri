#include <iostream>

struct Alumno {
    int legajo;
    std::string nombre;
};

void quienesPrograman(const Alumno programacion[], int tamProg, const Alumno laboratorio[], int tamLab, Alumno resultado[], int& tamResultado) {
    int i = 0;  // Índice para recorrer el arreglo de programación
    int j = 0;  // Índice para recorrer el arreglo de laboratorio
    int k = 0;  // Índice para llenar el arreglo resultado
    
    while (i < tamProg && j < tamLab) {
        // Comparar los legajos de los alumnos en las dos materias
        if (programacion[i].legajo < laboratorio[j].legajo) {
            resultado[k] = programacion[i];
            i++;
        } else if (programacion[i].legajo > laboratorio[j].legajo) {
            resultado[k] = laboratorio[j];
            j++;
        } else {
            // Si los legajos son iguales, solo se agrega el alumno una vez al resultado
            resultado[k] = programacion[i];
            i++;
            j++;
        }
        k++;
    }
    
    // Agregar los alumnos restantes en el arreglo de programación
    for (; i < tamProg; i++) {
        resultado[k] = programacion[i];
        k++;
    }
    
    // Agregar los alumnos restantes en el arreglo de laboratorio
    for (; j < tamLab; j++) {
        resultado[k] = laboratorio[j];
        k++;
    }
    
    // Actualizar el tamaño del arreglo resultado
    tamResultado = k;
}

int main() {
    // Arreglos de ejemplo
    Alumno programacion[] = {
        {12345678, "Juan"},
        {23456789, "María"},
        {34567890, "Pedro"}
    };
    int tamProg = sizeof(programacion) / sizeof(programacion[0]);
    
    Alumno laboratorio[] = {
        {23456789, "María"},
        {34567890, "Pedro"},
        {45678901, "Laura"}
    };
    int tamLab = sizeof(laboratorio) / sizeof(laboratorio[0]);
    
    Alumno resultado[100];  // Tamaño máximo del arreglo resultado
    int tamResultado = 0;
    
    quienesPrograman(programacion, tamProg, laboratorio, tamLab, resultado, tamResultado);
    
    // Imprimir el resultado
    std::cout << "Alumnos que cursan Programación o Laboratorio:\n";
    for (int i = 0; i < tamResultado; i++) {
        std::cout << "Legajo: " << resultado[i].legajo << ", Nombre: " << resultado[i].nombre << std::endl;
    }
    
    return 0;
}