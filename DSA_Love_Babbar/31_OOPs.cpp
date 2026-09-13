#include <iostream>
using namespace std;

class hero{

    //properties
    public:  //access modifiers
    int health;

    char getname(){           //getter
        return name;
    }

    void setname(char n){     //setter
        name = n;
    }

    private:
    char name;

    
};

int main(){

    //create object          //static allocation         
    hero h1;

    //dynamic allocation
    hero *h2 = new hero;

    //access class properties
    h1.health = 80;
    
    h1.setname('A');
    

    cout << "name is " << h1.getname() << endl;


    return 0;
}