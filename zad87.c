#include <stdio.h>
 
 // Napi�i program pomocu kojeg ce korisnik izracunati dvostruku vrijednost ucitanog cijelog broja pomocu funkcije

// Funkcija za izracunavanje dvostruke vrijednosti.
int suma(int broj) 
{
    int suma;
 
    suma = broj + broj;   
 
    return suma;   
   
}
int main ()
{
    int broj, x;
 
    printf("Unesi broj: ");
    scanf("%d",&broj);
 	// Pozivanje funkcije
    x = suma(broj);
 	// Ispis rezultata.
    printf("%d + %d = %d ", broj, broj, x);
 
    return 0;
}

