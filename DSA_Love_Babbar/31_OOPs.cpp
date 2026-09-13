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