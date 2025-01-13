// #include <iostream>
// using namespace std;

// // Klasa bazowa: Animal
// class Animal
// {
// public:
//     // Czysto wirtualna metoda
//     virtual void makeSound() = 0;

//     // Wirtualny destruktor dla poprawnego zarządzania pamięcią
//     virtual ~Animal() {}
// };

// // Klasa pochodna: Dog
// class Dog : public Animal
// {
// public:
//     // Implementacja metody makeSound()
//     void makeSound() override
//     {
//         cout << "Hau!" << endl;
//     }
// };

// // Klasa pochodna: Cat
// class Cat : public Animal
// {
// public:
//     // Implementacja metody makeSound()
//     void makeSound() override
//     {
//         cout << "Meow!" << endl;
//     }
// };

// int main()
// {
//     // Tworzenie wskaźników na klasę bazową Animal
//     Animal *animal1 = new Dog(); // Obiekt klasy Dog
//     Animal *animal2 = new Cat(); // Obiekt klasy Cat
//     Animal *animal3 = new Dog(); // Kolejny obiekt klasy Dog

//     // Wywołanie metody makeSound() dla każdego zwierzęcia
//     animal1->makeSound(); // Wywołuje Dog::makeSound()
//     animal2->makeSound(); // Wywołuje Cat::makeSound()
//     animal3->makeSound(); // Wywołuje Dog::makeSound()

//     // Zwolnienie pamięci
//     delete animal1;
//     delete animal2;
//     delete animal3;

//     return 0;
// }





#include <iostream>
#include <cmath> // Biblioteka dla stałej M_PI
using namespace std;

// Abstrakcyjna klasa Shape (Figura geometryczna)
class Shape
{
public:
    // Czysto wirtualne metody
    virtual double calculateArea() = 0; // Obliczanie pola
    virtual void displayInfo() = 0;     // Wyświetlanie informacji

    
};

// Klasa pochodna: Rectangle (Prostokąt)
class Rectangle : public Shape
{
private:
    double width;  // Szerokość prostokąta
    double height; // Wysokość prostokąta

public:
    // Konstruktor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementacja metody do obliczenia pola
    double calculateArea() 
    {
        return width * height;
    }

    // Implementacja metody do wyświetlania informacji
    void displayInfo() 
    {
        cout << "Rectangle: Width = " << width << ", Height = " << height
             << ", Area = " << calculateArea() << endl;
    }
};

// Klasa pochodna: Circle (Koło)
class Circle : public Shape
{
private:
    double radius; // Promień koła

public:
    // Konstruktor
    Circle(double r) : radius(r) {}
    double pi = 3.14;
    // Implementacja metody do obliczenia pola
    double calculateArea() 
    {
        return pi * radius * radius; // π * r^2
    }

    // Implementacja metody do wyświetlania informacji
    void displayInfo() 
    {
        cout << "Circle: Radius = " << radius
             << ", Area = " << calculateArea() << endl;
    }
};

int main()
{
    // Dynamiczne tworzenie obiektu klasy Rectangle
    Shape* figura1 = new Rectangle(5, 10); // Szerokość = 5, Wysokość = 10
    // Dynamiczne tworzenie obiektu klasy Circle
    Shape* figura2 = new Circle(3); // Promień = 3

    // Wyświetlenie informacji o figurach
    figura1->displayInfo();
    figura2->displayInfo();

    // Zwolnienie pamięci
    delete figura1;
    delete figura2;

    return 0;
}