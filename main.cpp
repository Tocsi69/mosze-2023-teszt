#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibás változó
    std::cout << '1-100 ertekek duplazasa' //rossz szintaktika
    for (int i = 0;) //pontosvessző rossz helyen
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //rossz szintaktika
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //pontosvessző helyett vessző
    {
        atlag += b[i] //szintaktika hiba
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}