#include <stdio.h>

int bin_prüfen(char number[])
{
    for (int i = 0; i <= strlength(number); i++)
    if (number[i] == '0')
    {
        return 1;
    }
    else if (number[i] == '1')
    {
        return 1;
    }
    else{
        return 0;
    }
}

int strlength(char number[]) // Funktion zu Ermittlung der Länge
{
    int i = 0;
    for (; number[i] != '\0'; i++)
    {}
    return i;
}

int power(int base, int exp) // Berechnung von Potenzen
{
    int erg;
    if (exp == 0) // Wenn exp ist 0 -> erg muss 1 sein
    {
        erg = 1;
    }
    else
    {
        for (; exp -1 > 0; exp--) // exp mal base*base
        {
            erg = base*base;
        }
    }
    return erg;
}

int main(int argc, char* argv[])
{
    char* bin = argv[1];

    if (argc == 2) // Überprüfen der Anzahl an Argumenten
    {
        if (bin_prüfen != 1)    // Prüfen ob nur 0 oder 1
        printf("Usage: bin <binary number");
        return -1;
        
        


    }
    else
    {
        printf("Usage: bin <binary number>");
        return -1;
    }
}