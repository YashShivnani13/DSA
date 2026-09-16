// #include <iostream>
// using namespace std;

// class hero{

//     //properties
//     public:  //access modifiers
//     int health;

//     char getname(){           //getter
//         return name;
//     }

//     void setname(char n){     //setter
//         name = n;
//     }

//     private:
//     char name;

    
// };

// int main(){

    

//     //create object          //static allocation         
//     hero h1;

//     //access class properties
//     h1.health = 80;
    
//     cout<<"health is " << h1.health <<endl; 

//     //dynamic allocation
//     hero *h2 = new hero;

//     //access class properties
//     (*h2).health = 90;

//     cout<<"health is " << (*h2).health <<endl;
//     cout<<"health is " << h2->health <<endl;

    
//     h1.setname('A');
//     cout << "name is " << h1.getname() << endl;


//     return 0;
// }









//CONSTRUCTOR



#include <iostream>
#include <cstring>      // strlen(), strcpy()
using namespace std;


//CLASS

class Hero {

private:
    // Cannot be accessed directly from main()
    int health;
    
public:
    char *name;
    char level;

    // Static variable
    static int timeToComplete;


//DEFAULT CONSTRUCTOR


    Hero() {

        cout << "Default constructor called" << endl;

        // Dynamically create memory for name
        // We are creating space for 100 characters.
        name = new char[100];
    }


//PARAMETERIZED CONSTRUCTOR

    Hero(int health) {

        cout << "Parameterized constructor called" << endl;

        // 'this' points to the current object.
        this->health = health;

        // Since name is a pointer, we should initialize it before using it.
        name = new char[100];
    }

    //PARAMETERIZED CONSTRUCTOR - 2 PARAMETERS

    Hero(int health, char level) {

        cout << "2-parameter constructor called" << endl;

        this->health = health;
        this->level = level;

        // Allocate memory for name
        name = new char[100];
    }

    //COPY CONSTRUCTOR

    /*
        Copy constructor is called when we create a NEW object
        using an EXISTING object.

        Example:

        Hero hero1;
        Hero hero2(hero1);

        hero2 is created using hero1.

        Syntax:

        Hero(Hero& temp)
    */

    Hero(Hero& temp) {

        cout << "Copy constructor called" << endl;


        // Copy health
        this->health = temp.health;


        // Copy level


        this->level = temp.level;


        // DEEP COPY of name


        /*
            name is a pointer.

            If we simply did:

            this->name = temp.name;

            then both objects would point to the SAME memory.

            That is called SHALLOW COPY.

            Instead, we create NEW memory.
        */

        char *ch = new char[strlen(temp.name) + 1];

        // Copy the actual characters
        strcpy(ch, temp.name);

        // Store the new memory address in this object's name
        this->name = ch;
    }

    //PRINT

    void print() {

        cout << endl;

        cout << "Name   : " << this->name << endl;

        cout << "Health : " << this->health << endl;

        cout << "Level  : " << this->level << endl;

        cout << endl;
    }


    //GETTERS

    // Getter for health
    int getHealth() {
        return health;
    }


    // Getter for level
    char getLevel() {
        return level;
    }


    //SETTERS

    // Setter for health
    void setHealth(int h) {
        health = h;
    }


    // Setter for level
    void setLevel(char ch) {
        level = ch;
    }


    // Setter for name
    void setName(char name[]) {

        // Copy the given name into our dynamically
        // allocated memory.
        strcpy(this->name, name);
    }


    // STATIC FUNCTION


    /*
        Static functions belong to the CLASS, not to an object.

        Therefore we can call:

        Hero::random()

        without creating any Hero object.
    */

    static int random() {

        return timeToComplete;
    }


    // DESTRUCTOR

    /*
        Destructor is automatically called when an object
        is destroyed.

        For a static object:
            Destructor is called automatically when main()
            finishes.

        For a dynamic object:
            Destructor is called when we use delete.
    */

    ~Hero() {

        cout << "Destructor called" << endl;

        // IMPORTANT:
        //
        // name was created using:
        //
        // new char[100]
        //
        // So we must release that memory using:
        //
        delete[] name;
    }
};


// STATIC VARIABLE INITIALIZATION


/*
    Static variables must be defined outside the class.

    There is only ONE timeToComplete for the entire class.
*/

int Hero::timeToComplete = 5;


int main() {
    //1. STATIC VARIABLE
   

    /*
        We don't need an object to access a static variable.

        Use:

        ClassName::variableName
    */

    cout << "Time to complete: "
         << Hero::timeToComplete
         << endl;


    // We can also access it through the static function.

    cout << "Random: "
         << Hero::random()
         << endl;


    //2. STATIC OBJECT
   

    /*
        This creates an object in stack memory.

        Default constructor will be called.
    */

    Hero hero1;


    // Set values using setters

    hero1.setHealth(80);

    hero1.setLevel('A');


    // Character array for name

    char name[10] = "Babbar";


    // Set name

    hero1.setName(name);


    // Print hero1

    cout << "\nHero 1:" << endl;

    hero1.print();


    // 3. COPY CONSTRUCTOR
  

    /*
        Now we create hero2 using hero1.

        This calls the COPY CONSTRUCTOR.

        Hero hero2(hero1);

        Another way of writing the same thing:

        Hero hero2 = hero1;

        Both call the copy constructor.
    */

    Hero hero2(hero1);


    cout << "\nHero 2 after copying:" << endl;

    hero2.print();



    //4. DEEP COPY

    /*
        Our copy constructor performs DEEP COPY.

        That means:

        hero1.name ---> [Babbar]
                          ^
                          |
                          |
        hero2.name ---> [Babbar]

        But these are TWO DIFFERENT memory locations.

        Let's check their addresses.
    */

    cout << "Address of hero1.name: "
         << (void*)hero1.name
         << endl;

    cout << "Address of hero2.name: "
         << (void*)hero2.name
         << endl;


    /*
        The addresses should be DIFFERENT.

        This proves that we have created two separate
        memory blocks.
    */



    // ========================================================
    //             5. TESTING DEEP COPY
    // ========================================================

    /*
        Let's change hero1's name.

        Because we performed DEEP COPY,
        hero2's name should NOT change.
    */

    hero1.name[0] = 'G';


    cout << "\nAfter changing hero1 name:" << endl;


    cout << "Hero 1:" << endl;

    hero1.print();


    cout << "Hero 2:" << endl;

    hero2.print();


    /*
        Expected:

        Hero 1:
        Name : Gabbar

        Hero 2:
        Name : Babbar

        Why?

        Because hero1 and hero2 have separate memory.
    */



    // ========================================================
    //                  6. SHALLOW COPY
    // ========================================================

    /*
        IMPORTANT:

        Our copy constructor above performs DEEP COPY.

        If we instead wrote:

        Hero(Hero& temp) {

            this->health = temp.health;
            this->level = temp.level;

            this->name = temp.name;
        }

        then it would be SHALLOW COPY.

        In shallow copy:

        hero1.name --------┐
                           |
                           ↓
                        [Babbar]
                           ↑
                           |
        hero2.name --------┘

        Both pointers point to the SAME memory.

        Therefore:

        hero1.name[0] = 'G';

        would ALSO change hero2.name.

        Another problem:

        Both destructors would try to delete the SAME
        memory, which can cause DOUBLE DELETE.

        That's why we use DEEP COPY when our class owns
        dynamically allocated memory.
    */



    // ========================================================
    //                  7. DYNAMIC OBJECT
    // ========================================================

    /*
        'new' creates an object dynamically on the heap.

        The constructor is called here.
    */

    Hero *hero3 = new Hero(90, 'B');


    // Since hero3 is a pointer, use ->

    hero3->setName(name);


    cout << "\nHero 3:" << endl;

    hero3->print();


    /*
        IMPORTANT:

        hero3 was created using:

        new Hero(...)

        Therefore we MUST manually destroy it:

        delete hero3;

        This will:

        1. Call destructor
        2. Release the memory
    */

    delete hero3;



    // ========================================================
    //                       END
    // ========================================================

    /*
        hero1 and hero2 were static objects.

        Therefore their destructors will automatically
        be called when main() ends.

        Since we have:

        delete[] name;

        inside the destructor, their dynamically allocated
        name memory will also be released.
    */


    return 0;
}