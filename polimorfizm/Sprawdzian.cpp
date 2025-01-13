// Zadanie 1: Zwierzęta
// Napisz program, w którym:

// Istnieje abstrakcyjna klasa Animal z czysto wirtualną metodą makeSound().
// Klasy pochodne, takie jak Dog i Cat, implementują tę metodę.

//  wywołaj metodę makeSound() dla każdego zwierzęcia.
// Przykładowy wynik:

// Skopiuj kod
// Hau!
// Miau!

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Hau!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Miau!" << endl;
    }
};

int main()
{

    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    return 0;
}