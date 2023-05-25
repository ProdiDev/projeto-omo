#include <iostream> //Incluindo a BB input output
using namespace std;

void derivadas()
{
    
    float p_termo, termo_der, exp, g_exp; // criação das variaveis primeiro termo, termo derivado, expoente, guardar-expoente;
    char acomp_x;
    cout << "Seu termo vem acompanhado de X? y | n: ";
    cin >> acomp_x;


}

int main()
{

    char check;

    cout << "Deseja realizar derivadas? y | n: ";
    cin >> check;

    if (check == 'y')
    {
        derivadas(); // chamando a func derivada se check = y
    }
}