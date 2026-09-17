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






//SINGLE INHERITANCE


// #include <iostream>
// using namespace std;

// class Animal{

//     public:
//         string name;
//         int age;


//     public:
//     void speak(){
//         cout<<"Speaking " <<endl;
//     }
// };


// class dog: public Animal{

// };

// int main(){
//     dog d;
//     d.speak();
//     cout << d.age << endl;

//     return 0;
// }





//MULTI-LEVEL INHERITANCE 


// #include <iostream>
// using namespace std;

// class Animal{

//     public:
//         string name;
//         int age;


//     public:
//     void speak(){
//         cout<<"Speaking " <<endl;
//     }
// };


// class dog: public Animal{

// };


// class bark : public dog{
    
// };


// int main(){
//     dog d;
//     d.speak();
//     cout << d.age << endl;

//     bark b;
//     b.speak();

//     return 0;
// }






//MULTIPLE INHERITANCE 



// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//         string name;
//         int age;


//     public:
//     void speak(){
//         cout<<"Speaking " <<endl;
//     }
// };


// class dog{
//     public:
//     void bark(){
//         cout<<"barking "<<endl;
//     }

// };



// class play : public dog , public Animal{
    
// };


// int main(){
    
//     play p;

//     p.speak();
//     p.bark();

//     return 0;
// }







//HEIRARCHICAL INHERITANCE


// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//         string name;
//         int age;


//     public:
//     void speak(){
//         cout<<"Speaking " <<endl;
//     }
// };


// class dog : public Animal{
    
// };



// class play : public Animal{
    
// };


// int main(){
    
//     play p;

//     p.speak();

//     return 0;
// }








//INHERITANCE AMBIGUITY


// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void func(){
//         cout << "I am A "<<endl;
//     }
// };


// class B{
//     public:
//     void func(){
//         cout << "I am B "<<endl;
//     }
// };


// class C : public A, public B{

// };

// int main(){

//     C obj;

//     obj.A::func();

//     obj.B::func();

//     return 0;
// }












//POLYMORPHISM

//cards on the table
//function overloading

// #include <iostream>
// using namespace std;

// class a{
//     public:
//     void sayhello(){
//         cout<< " hi " <<endl;
//     }

//     void sayhello(string name){
//         cout<< " hi " <<name << endl;
//     }
// };

// int main(){
//     a obj;
//     obj.sayhello();

//     return 0;
// } 



//operator overloading

