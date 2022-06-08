/*  Section 7
    Challenge
*/
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // your solution goes here
    
    // 1. two empty vectors
    vector <int> vector1;
    vector <int> vector2;
    
    // 2. Add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);
    
    // 3. Display the elements in vector1 using the at() method as well as its size using the size() method
    cout << vector1.at(0) << endl;   // 10 prints
    cout << vector1.at(1) << endl;     // this shows up as out of range?
    cout << vector1.size() << endl;
    
    // 4. Add 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);
    
    // 5. Display the elements in vector2 using the at() method as well as its size using the size() method
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;
    
    // 6. Declare an empty 2D vector called vector_2d. Remember, that a 2D vector is a vector of vector<int>
    vector < vector<int> > vector_2d;
    
    // 7. Add vector1 to vector_2d dynamically using push_back
    vector_2d.push_back(vector1);
    
    // 8. Add vector2 to vector_2d dynamically using push_back
    vector_2d.push_back(vector2);
   
    // 9. Display the elements in vector_2d using the at() method
    // vector 1: 10, 20
    // vector 2: 100, 200
    // vector 2d:  { 10,  20 }   vec 1
    //             { 100, 200}   vec 2
    
    cout << vector_2d.at(0).at(0) << endl;   // 10
    cout << vector_2d.at(0).at(1) << endl;   // 20
    cout << vector_2d.at(1).at(0) << endl;   
    cout << vector_2d.at(1).at(1) << endl; 
    
    // 10. Change vector1.at(0) to 1000
    vector1.at(0) = 1000;
    // vector_2d.at[0][0] = 1000;
    
    // 11. Display the elements in vector_2d again using the at() method
    cout << vector_2d.at(0).at(0) << endl;   // 10
    cout << vector_2d.at(0).at(1) << endl;   // 20
    cout << vector_2d.at(1).at(0) << endl;   // 1000
    cout << vector_2d.at(1).at(1) << endl;   // 200
    
    // 12. Display the elements in vector1 
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    // 13. What did you expect? Did you get what you expected? What do you think happended?
    
    // like i thought, editing vector 1 after it had been added to vector 2d didn't automatically update in vector 2d. 
    // to edit vector 1 within vector 2d we would have had to edit vector 2d directly 
    
    cout << endl;
    return 0;
}

