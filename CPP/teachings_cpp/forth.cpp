

// Si se hace una referencia a una estructura, se tendra que utilizar el simbolo "." y no "->"

struct Coordonnees
{
    int x;
    int y;
};

int main ()
{
    Coordonees point;
    Coordonnees &referenceSurPoint = point;

    referenceSurPoint.x = 10;
    referenceSurPoint.y = 5;

    cout << "x : " << referenceSurPoint.x << endl;
    cout << "y : " << referenceSurPoint.x << endl;

    return 0;
}

//Ejemplo pragamtico de como usar referencias

struct Coordones
{
    int x;
    int y;
};

void remiseAZero(Coordonnes &pointAModifier);

int main()
{
    Coordonnees point;

    remiseAZero(point);

    return 0;
}

void remiseAZero(Coordonnees &pointAModifier)
{
    pointAModifier.x = 0;
    pointAModifier.y = 0;
}
