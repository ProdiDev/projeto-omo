#include <iostream> //Incluindo a BB input output
using namespace std;

void derivadas()
{

    float p_termo = 0, termo_der = 0, exp = 0, g_exp = 0, termo_der_2 = 0, der = 2; // criação das variaveis primeiro termo, termo derivado, expoente, guardar-expoente;
    char acomp_x, check_der_2;
    cout << "Seu termo vem acompanhado de X? y | n: ";
    cin >> acomp_x;

    cout << "Diga o termo a ser derivado em X: ";
    cin >> p_termo;

    cout << "Diga o expoente que acompanha o primeiro termo: ";
    cin >> exp;

    do // Código utilizado para a derivação;
    {
        if (acomp_x == 'y' && exp != 1)
        {
            termo_der = (p_termo * exp);
            g_exp = exp;
            exp = exp - 1;
            cout << "A derivada de " << p_termo << "X^" << g_exp << " eh igual a: " << termo_der << "X^" << exp << "." << endl;
        }
        else if (exp == 1 && acomp_x == 'y')
        {
            cout << "A derivada de" << p_termo << " em relacao a X eh igual a: " << p_termo << endl;
        }
        else if (acomp_x == 'n')
        {
            cout << "A derivada de" << p_termo << " em relacao a X eh igual a: 0" << endl;
        }

        cout << "Deseja encontrar a " << der << "ª derivada? y | n: ";
        der = der + 1; //Averiguar, Primeira, Segunda, Terceira.... Derivada.
        p_termo = termo_der;
    } while (check_der_2 == 'y'); // Fim
}

int main()
{

    char check;

    cout << "Deseja realizar derivadas? y | n: ";
    cin >> check;

    if (check == 'y')
    {
        do
        {
            derivadas(); // chamando a func derivada se check = y
            cout << "Deseja calcular derivada com um novo termo? y | n: ";
            cin >> check;

        } while (check == 'y');
    }
}