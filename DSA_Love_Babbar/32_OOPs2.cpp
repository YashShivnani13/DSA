//ENCAPSULATION


// #include <iostream>
// using namespace std;

// class student{
//     private:
//         string name;
//         int age;
//         int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };

// int main(){
//     student first;

//     return 0;
// }





//INHERITANCE


// #include <iostream>
// using namespace std;

// //parent class
// class human{
//     public:
//         int height;
//         int weight;
//         int age;

//     public:
//     int getage(){
//         return this->age;
//     }

//     void setweight(int w){
//         this->weight = w;
//     }
// };

// //child class
// class Male : public human{
    
//     public:
//         string color;
    
//     void sleep(){
//         cout << "Male sleeping" << endl;
//     }
// };


// int main(){

//     Male obj1;

//     obj1.age = 22;
//     obj1.weight = 52;

//     cout << obj1.age << endl;
//     cout << obj1.weight << endl;
//     cout << obj1.height << endl;

//     cout << obj1.color << endl;

//     obj1.setweight(72);
//     cout << obj1.weight << endl;

//     obj1.sleep();

//     return 0;
// }