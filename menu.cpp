#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <clocale>

void sqrtNum();
void power();
void inverse();

int main() {

    char option;

    /// Idioma español y color verde
    setlocale(LC_CTYPE, "spanish");
    system("cls");
    system("color 02");

    std::cout<<"\t"<<"##     ## ######## ##    ## ##     ##"<<std::endl;
    std::cout<<"\t"<<"###   ### ##       ###   ## ##     ##"<<std::endl;
    std::cout<<"\t"<<"#### #### ##       ####  ## ##     ##"<<std::endl;
    std::cout<<"\t"<<"## ### ## ######   ## ## ## ##     ##"<<std::endl;
    std::cout<<"\t"<<"##     ## ##       ##  #### ##     ##"<<std::endl;
    std::cout<<"\t"<<"##     ## ##       ##   ### ##     ##"<<std::endl;
    std::cout<<"\t"<<"##     ## ######## ##    ##  #######"<<std::endl;

    std::cout<<"\t"<<"*************************************"<<std::endl;
    std::cout<<"\t"<<"***   1) o A) RAÍZ CUADRADA       ***"<<std::endl;
    std::cout<<"\t"<<"***   2) o B) INVERSO             ***"<<std::endl;
    std::cout<<"\t"<<"***   3) o C) POTENCIA            ***"<<std::endl;
    std::cout<<"\t"<<"***   0) o S) SALIR               ***"<<std::endl;
    std::cout<<"\t"<<"*************************************"<<std::endl;


    do {
        std::cout<<"\t"<<"Ingrese la opción ---> ";
        std::cin>>option;
        if (isalnum(option)) {
            if (isalpha(option)) {
                option = toupper(option);
                break;
            }
            break;
        }else {
            std::cout<<"Error en la entrada...\n";
            std::cin.clear();
            continue;
        }
    }while(true);

    switch (option) {
        case '1': case 'A':
            sqrtNum();
            break;
        case '2': case 'B':
            inverse();
            break;
        case '3': case 'C':
            power();
            break;
        case '0': case 'S':
            printf("Good Bye!!\n");
            system("pause");
            break;
        default:
            std::cout<<std::endl;
            printf("Opción incorrecta!!! \n Favor de revisar las opciones del menú...\n");
            system("pause");
            break;
    }
    return 0;
}

void sqrtNum() {
    double num;

    do {
        printf("Introduzca el número: ");

        if (!(std::cin >> num) || num < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            std::cout << "Error en la entrada, por favor verifíquela..."<<std::endl;
            continue;
        } else break;
    } while(true);

    printf("Raíz cuadrada de %lf: %.2lf\n", num, sqrt(num));
    system("pause");
}

void power() {
    double num;
    double exp;

    do {
        printf("Introduzca la base: ");

        if (!(std::cin >> num)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            std::cout << "Error en la entrada, por favor verifíquela..."<<std::endl;
            continue;
        } else break;
    } while(true);

    do {
        printf("Introduzca el exponente: ");

        if (!(std::cin >> exp)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            std::cout << "Error en la entrada, por favor verifíquela..."<<std::endl;
            continue;
        } else break;
    } while(true);

    printf("Potencia %lf, de %lf: %lf\n", exp, num, pow(num, exp));
    system("pause");
}

void inverse() {
    double num;

    do {
        printf("Introduzca el número: ");

        if (!(std::cin >> num) || num == 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            std::cout << "Error en la entrada, por favor verifíquela..."<<std::endl;
            continue;
        } else break;
    } while(true);

    printf("Inverso: 1/%lf\n", num);
    system("pause");
}
