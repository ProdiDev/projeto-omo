#include <iostream> //Incluindo a BB input output
using namespace std;

void derivadas()
{

    float p_termo = 0, termo_der = 0, exp = 0, g_exp = 0, termo_der_2 = 0; // criação das variaveis primeiro termo, termo derivado, expoente, guardar-expoente;
    char acomp_x, check_der_2;
    cout << "Seu termo vem acompanhado de X? y | n: ";
    cin >> acomp_x;

    cout << "Diga o termo a ser derivado em X: ";
    cin >> p_termo;

    cout << "Diga o expoente que acompanha o primeiro termo: ";
    cin >> exp;

    if (acomp_x == 'y' && exp != 1)
    {
        termo_der = (p_termo * exp);
        g_exp = exp;
        exp = exp - 1;
        cout << "A derivada de " << p_termo << "X^" << g_exp << " eh igual a: " << termo_der << "X^" << exp << "." << endl;
    }
    else if (exp == 1)
    {
        cout << "A derivada de" << p_termo << " em relacao a X eh igual a: " <<p_termo << endl;
    }
    else if (acomp_x == 'n')
    {
        cout << "A derivada de" << p_termo << " em relacao a X eh igual a: 0" << endl;
    }

    cout << "Deseja encontrar a segunda derivada? y | n: "; // Realizar a criação de um laço WHILE para reduzir linhas e maior otimização.
    cin >> check_der_2;

    if (check_der_2 == 'y' && acomp_x == 'y')
    {
        termo_der_2 = (termo_der * exp);
        g_exp = exp;
        exp = exp - 1;
        cout << "A derivada de " << termo_der << "X^" << g_exp << " eh igual a: " << termo_der_2 << "X^" << exp << "." << endl;
    }
    else if (check_der_2 == 'y' && acomp_x == 'n')
    {
        cout << "O fato do resultado da primeira derivada ter sido igual a 0, tambem torna a segunda derivada igual a 0" << endl;
    }
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