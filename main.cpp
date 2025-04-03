// Un sistema que verifique si una cantidad de objetos puede dividirse en dos grupos iguales.

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero%2 == 0)
    {
        cout << "El numero se puede dividir en dos grupos iguales.";
    }
    else {
        cout << "El numero no se puede dividir en dos grupos iguales.";
    }

    return 0;

}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.