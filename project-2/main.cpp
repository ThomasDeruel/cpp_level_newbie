#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int devine_nb;
int tentative = 1;

int sum(vector<int> nums)
{
    int sum;
    for (const int num : nums)
    {
        sum += num;
    }
    return sum;
};

void cin_nb(int &nb)
{
    cout << "Merci de choisir un nombre entre 1 et 100: ";

    while (!(cin >> nb))
    {
        if (devine_nb < 0 || devine_nb > 100 || cin.fail())
        {
            cout << "Merci d'entrer un nombre valide: ";
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void devine(int nb, int my_nb)
{
    cin_nb(nb);
    while (nb != my_nb)
    {
        cout << "nombre choisi: " << nb << ". Le nombre à deviner est ";
        if (nb > my_nb)
        {
            cout << "inférieur à votre nombre" << endl;
        }
        else if (nb < my_nb)
        {
            cout << "supérieur à votre nombre" << endl;
        }
        cin_nb(nb);
        ++tentative;
    }
    cout << "Vous avez trouver le nombre (" << tentative << " tentative(s)). GG" << endl;
};

int main()
{
    srand(time(NULL));
    int my_nb = rand() % 100 + 1;

    devine(devine_nb, my_nb);
    return 0;
}
