// #include <iostream>
// using namespace std;


// int main(){

//     int n;
//     cout<< "Enter the no. of students" << endl;
//     cin>> n;

//     for (int i=0; i<n; i++){
//         string name;
//         int marks[5];
//         int sum=0;
//         float percentage;
//         cout << "enter name of student" << endl;
//         cin >> name;

//         cout << "enter marks for five subjects" <<endl;
//         for (int j = 0; j < 5; j++) {
//             cin >> marks[j];
//             sum += marks[j];
               
//         }
//         percentage = (float)sum/5 ;
//         char grade;
//         if (percentage >= 90) {
//             grade = 'A';
//         } else if (percentage >= 75) {
//             grade = 'B';
//         } else if (percentage >= 50) {
//             grade = 'C';
//         } else {
//             grade = 'F';
//         }

//         cout << "Total marks" << endl <<  sum << endl;
//         cout << "Percentage" << endl <<  percentage << endl;
//         cout << "Grade" << endl << grade << endl;
        

//     }
    
    
//     return 0;
// }






#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no. of employees: " <<endl;
    cin>> n;

    for (int i=0; i<n; i++){
        string name;
        int sal;
        float HRA;
        float DA;
        float gross;

        cout<< "Enter the name of employee: ";
        cin >> name;

        cout << "Enter your Salary: ";
        cin >> sal;

        cout << "House Rent Allowance : ";
        HRA = (float)sal/100 *20 ; 
        cout << HRA << endl;

        cout << "Dearness Allowance : ";
        DA = (float)sal/100 *50 ; 
        cout << DA << endl;

        cout << "Gross Salary : ";
        gross = sal + HRA + DA ;
        cout << gross << endl;
    }
}



