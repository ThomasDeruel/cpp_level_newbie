#include <iostream>
#include <ctime>
#include <cstdlib>

std::string response;
int yes_or_no = 0;

int main()
{
    srand(time(NULL));

    // getline
    // -> lit tous les caractères d'un flux d'entrée et le place dans un stringl
    while (std::cout << "Youhou, je suis la voyante, pose moi une question je répondrai par [OUI] ou par [NON]: " && std::getline(std::cin, response))
    {
        if (response == "partir" || response == "bye")
        {
            std::cout << "Ok byeeee hyehyehyehye" << std::endl;
            break;
        }

        yes_or_no = rand() % 2;
        // if not found
        // npos: no-position
        // -> est une valeur STATIC valant -1;
        // ou if (response.empty())
        if (response.find("?") == std::string::npos || !std::cin)
        {
            std::cout << "Je n'ai pas compris votre question !" << std::endl;
            continue;
        }

        if (yes_or_no == 0)
        {
            std::cout << "Euuhhhh non." << std::endl;
        }
        else
        {
            std::cout << "Oui bien sûr !" << std::endl;
        }
    }
    return 0;
}
