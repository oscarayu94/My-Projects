

// Un boolen peut prendre deux valeurs, true or false
// 0 is flase, tout autre nombre est "vrai".

// Es conveniente declarar las cosas de esta forma : if (potato) {} ; que no if (potato == true) {}.
// Parece ser que el ordenador lo entiende igual... Para negacion, if (!potato) {};

// malloc y free ya no se usan, son new y delete en su lugar


int *variable = NULL;

variable = new int; // allocation dinamique

delete variable; // Liberation de memoire

//alocation dinamique de un tableau

int main()
{
    int *tableau = NULL;

    tableau = new int[20];

    delete[] tableau;

    return 0;
}


