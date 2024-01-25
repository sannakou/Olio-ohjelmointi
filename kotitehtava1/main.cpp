#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {

    std::srand(static_cast<unsigned int>(std::time(0)));

    int arvottuLuku = std::rand() % maxnum + 1;

    int pelaajanArvaus = 0;
    int arvaustenMaara = 0;

    std::cout << "Tama on arvauspeli! Arvaappa luku valilta 1-." << maxnum << "." << std::endl;

    while (pelaajanArvaus != arvottuLuku) {

        std::cout << "Syota arvauksesi: ";
        std::cin >> pelaajanArvaus;

        arvaustenMaara++;

        if (pelaajanArvaus < arvottuLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (pelaajanArvaus > arvottuLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Oikea vastaus! Onneksi olkoon!" << std::endl;
        }
    }

    return arvaustenMaara;
}



int main() {

    int arvaustenMaara = game(40);

    std::cout << "Arvausten maara: " << arvaustenMaara << std::endl;

    return 0;
}
