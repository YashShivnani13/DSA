//ARRAY 

// #include <iostream>
// #include <array>                      //not used much
// using namespace std;

// int main(){
//     array<int,4> a = {8,9,6,7};

//     int size = a.size();

//     for(int i=0; i<size; i++){
//         cout<< a[i] << endl;
//     }

//     cout<< "Element at 2nd index is " << a.at(2) <<endl;

//     cout<< "Empty or not " << a.empty() << endl;

//     cout<< "First Element " << a.front() <<endl;
//     cout<< "Last Element " << a.back() << endl;

//     return 0;
// }







//VECTOR 


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> a(5,1);   //size of vector is 5 and initialize it with 1
//     vector <int> v;

//     cout<<"Capacity -> " << v.capacity() << endl;

//     v.push_back(1);
//     cout<<"Capacity -> " << v.capacity() << endl;

//     v.push_back(2);
//     cout<<"Capacity -> " << v.capacity() << endl;

//     v.push_back(7);
//     cout<<"Capacity -> " << v.capacity() << endl;      //shows total space/capacity in vector

//     cout<<"Size -> " << v.size() << endl;              //shows total elements in vector

//     cout << "Element at index 3 is " << v.at(2) <<endl;  //shows value at index


//     cout<< "First Element " << v.front() <<endl;      //shows first element
//     cout<< "Last Element " << v.back() << endl;      //shows last element

//     cout<<"before pop" << endl;
//     for(int i : v){          //for loop
//         cout<<i<<" ";
//     }
    

//     v.pop_back();          //pops last element
    
//     cout<<"after pop" << endl;
//     for(int i : v){         
//         cout<<i<<" ";
//     }

//     // Deleting element '2'
//   	// v.erase(find(v.begin(), v.end(), '2'));

//     v.clear();    //to empty the vector. size of vector goes to 0 but capacity remains same.
// }






//DEQUE


// #include <iostream>
// #include <deque>
// using namespace std;

// int main(){

//     deque <int> d;

//     d.push_back(6);      //pushes element in array
//     d.push_front(9);     //pushes element in front of array

//     for(int i : d){
//         cout << i << " ";
//     }
//     cout<<endl;

//     // d.pop_back();    //pops last element in array
//     // d.pop_front();   //pops first element in array

//     cout<< d.at(1) <<endl;

//     cout<< d.front() <<endl;

//     cout<<  d.back() <<endl;

//     cout<< d.empty() <<endl;

//    cout<< d.empty() <<endl;
   
//    d.erase(d.begin(), d.begin()+1); //range to erase  
// }   






//LIST


// #include <iostream>
// #include <list>
// using namespace std;

// int main(){
//     list <int> l;

//     l.push_back(6);      
//     l.push_front(9);     

//     for(int i : l){
//         cout << i << " ";
//     }
//     cout<<endl;

//     // l.pop_back();    
//     // l.pop_front();  

//     cout<< l.front() <<endl;

//     cout<<  l.back() <<endl;

//     cout<< l.empty() <<endl;
   
//    l.erase(l.begin());
// }






//STACK


// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){

//     stack <string> s;

//     s.push("Yash");
//     s.push("cpp");
//     s.push("dsa");

//     cout<< "Top element "<<s.top() << endl;

//     s.pop();

//     cout<< "Top element "<<s.top() << endl;

//     cout<<"Size "<<s.size()<<endl;
//     cout<<"empty or not "<<s.empty()<<endl;

// }




//QUEUE


// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){

//     queue<int> q;

//     q.push(7);
//     q.push(4);
//     q.push(3);

//     cout<< q.front() << endl;

//     q.pop();
//     cout<< q.front() << endl;

//     cout<< q.size() ;

// }





//PRIORITY QUEUE


// #include <iostream>
// #include <queue>

// using namespace std;

// int main(){

//     //max heap
//     priority_queue <int> maxi;

//     //min heap
//     priority_queue <int, vector<int>, greater<int>> mini;

//     maxi.push(2);
//     maxi.push(7);
//     maxi.push(3);
//     maxi.push(10);

//     int n = maxi.size();

//     for(int i=0; i<n; i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout<<endl;


//     mini.push(8);
//     mini.push(4);
//     mini.push(1);
//     mini.push(9);

//     int m = mini.size();

//     for(int i=0; i<m; i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
// }




//Set


// #include <iostream>
// #include <set>

// using namespace std;

// int main(){
//     set<int> s;

//     s.insert(6);
//     s.insert(1);
//     s.insert(7);
//     s.insert(3);
//     s.insert(0);
//     s.insert(6);
//     s.insert(6);

//     for(auto i : s){
//         cout<<i<<" ";
//     } cout<<endl;


//     set<int>::iterator it = s.begin();
//     it++;

    
//     s.erase(it);
//     for(auto i : s){
//         cout<<i<<" ";
//     } cout<<endl;

//     cout<<s.count(6)<<endl;   //checks if no. is there or not
// }




//MAP


// #include <iostream>
// #include <map>
// using namespace std;

// int main(){

//     map<int,string> m;

//     m[1] = {"Yash"};
//     m[13] = {"kon"};
//     m[2] = {"hai"};
//     m.insert({5,"oyeee"});

//     for(auto i:m){
//         cout<< i.first << " " << i.second << endl;
//     }

//     cout<< "finding 12 yes or no " << m.count(-12) <<endl;

//     m.erase(2);
//     for(auto i:m){
//         cout<< i.first << " " << i.second << endl;
//     }
// }











//ALGORITHM


// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int main(){

//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(5);
//     v.push_back(7);
//     v.push_back(10);

//     cout<<"Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;

//     cout<<"Lower bound-> " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
//     cout<<"Upper bound-> " << upper_bound(v.begin(), v.end(), 10)-v.begin() << endl;

//     // more algorithms
//     max(a,b);
//     min(a,b);
//     swap(a,b);
//     reverse(var.begin(), var.end());

//     rotate(v.begin(), v.end()+1, v.end());  //1 is how many elements u want to rotate

//     sort(v.begin(),v.end());
// }
