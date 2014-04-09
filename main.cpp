#include <iostream>

using namespace std;
class Animal{
public:
    virtual void animalSound(){
    cout<<"Rawr!!!"<<endl;
    }
};


class Kitty : public Animal{
public:
    void animalSound(){
    cout<<"Meow meow"<<endl;
    }
};

class Doggy : public Animal{
public:
    void animalSound(){
    cout<<"Woof woof"<<endl;
    }
};

int main()
{
    Animal something;
    Kitty cat;
    Doggy dog;
    cout<< "Some animal goes: ";
    something.animalSound();
    cout<<"Kitty goes: ";
    cat.animalSound();
    cout<<"Doggy goes: ";
    dog.animalSound();

    Animal *pointAnimal;
    cout<<"And now again with pointers :)"<<endl;
    pointAnimal=&something;
    pointAnimal->animalSound();
    pointAnimal=&cat;
    pointAnimal->animalSound();
    pointAnimal=&dog;
    pointAnimal->animalSound();

    return 0;
}
