#include <iostream>
#include <locale.h>
using namespace std;

void derivadas()
{
    setlocale(LC_ALL, "Portuguese");
    float p_termo = 0, termo_der = 0, exp = 0, g_exp = 0, termo_der_2 = 0, der = 2;
    char acomp_x, check_der_2, rel_t;
    string rel_t_d, rel_t_d_g, rel_t_d_r;

    cout << "Seu termo vem acompanhado de X? y | n: ";
    cin >> acomp_x;

    cout << "Este termo é uma relação trigonométrica? y | n: ";
    cin >> rel_t;

    if (rel_t == 'n')
    {
        cout << "Diga o termo a ser derivado em X: ";
        cin >> p_termo;
        cout << "Diga o expoente que acompanha o primeiro termo: ";
        cin >> exp;
    }
    else if (rel_t == 'y')
    {
        cout << "Qual relação trigonométrica deseja derivar? sen | cos | tg | sec | cosec | cotg: ";
        cin >> rel_t_d;
    }

    if (rel_t == 'n')
    {
        do
        {
            if (acomp_x == 'y' && exp != 1)
            {
                termo_der = (p_termo * exp);
                g_exp = exp;
                exp = exp - 1;
                cout << "A derivada de " << p_termo << "X^" << g_exp << " é igual a: " << termo_der << "X^" << exp << "." << endl;
            }
            else if (exp == 1 && acomp_x == 'y')
            {
                cout << "A derivada de " << p_termo << " em relação a X é igual a: " << p_termo << endl;
            }
            else if (acomp_x == 'n')
            {
                cout << "A derivada de " << p_termo << " em relação a X é igual a: 0" << endl;
            }

            cout << "Deseja encontrar a " << der << "ª derivada? y | n: ";
            cin >> check_der_2;
            der = der + 1;
            p_termo = termo_der;
        } while (check_der_2 == 'y');
    }
    else if (rel_t == 'y')
    {
        do
        {
            rel_t_d_g = rel_t_d;
            if (acomp_x == 'y')
            {
                if (rel_t_d == "sen")
                {
                    rel_t_d_r = "cosX";
                }
                else if (rel_t_d == "cos")
                {
                    rel_t_d_r = "-senX";
                }
                else if (rel_t_d == "tg")
                {
                    rel_t_d_r = "sec^2X";
                }
                else if (rel_t_d == "sec")
                {
                    rel_t_d_r = "tgX . secX";
                }
                else if (rel_t_d == "cosec")
                {
                    rel_t_d_r = "cotgX . cosecX";
                }
                else if (rel_t_d == "cotg")
                {
                    rel_t_d_r = "cosec^2X";
                }
            }
            else if (acomp_x == 'n')
            {
                if (rel_t_d == "sen")
                {
                    rel_t_d_r = "cos";
                }
                else if (rel_t_d == "cos")
                {
                    rel_t_d_r = "-sen";
                }
                else if (rel_t_d == "tg")
                {
                    rel_t_d_r = "sec^2";
                }
                else if (rel_t_d == "sec")
                {
                    rel_t_d_r = "tg . sec";
                }
                else if (rel_t_d == "cosec")
                {
                    rel_t_d_r = "cotg . cosec";
                }
                else if (rel_t_d == "cotg")
                {
                    rel_t_d_r = "cosec^2";
                }
            }

            cout << "A derivada da relacao trigonometrica: " <<rel_t_d << " é igual a: " << rel_t_d_r << endl;

            cout << "Deseja encontrar a " << der << "ª derivada? y | n: ";
            cin >> check_der_2;
            der = der + 1;
            rel_t_d = rel_t_d_r;
        } while (check_der_2 == 'y');
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char check;

    cout << "Deseja realizar derivadas? y | n: ";
    cin >> check;

    if (check == 'y')
    {
        do
        {
            derivadas();
            cout << "Deseja calcular derivada com um novo termo? y | n: ";
            cin >> check;

        } while (check == 'y');
    }

    return 0;
}
