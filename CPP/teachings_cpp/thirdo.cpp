

// References

// La referencia no se debe confundir con el pointer, a pesar de que usan el mismo simbolo (&).
// Al usar el pointer se le dice que quieres obtener la direccion de memoria de una variable,
// pero crear una referencia es diferente

// Para crear una referencia hay que escribirlo sobre la propia variable, de esta forma

int &referenciaDeAlgo;

// Una referencia debe ser inciada tal cual ser declarada
// Una vez iniciada, una referencia no puede ser modificada

// Ejemplo

int Tage = 21;
int &TreferenceSurAge = age;

// Como utlizar uan referencia

int main()
{
    int age = 21;
    int &referenceSurAge = age;

    cout << referenceSurAge << endl;
    cout << age << endl;

    referenceSurAge = 40;

    cout << referenceSurAge << endl;
    cout << age << endl;

    return 0;
}

// Nota: En C++ se siguen utilizando los puntadores, ya que una referencia no puede hacer alusion a una
// nueva variable una vez que ha sido iniciada. 
