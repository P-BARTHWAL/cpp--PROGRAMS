#include <iostream>
using namespace std;

int main() {
   // Write studentID here 
  int studentID ;
  cout << " Enter student id : "  ;
  cin >> studentID;

  // Write score here
  double score ;
  cout << " Enter student score : "  ;
  cin >> score;

  // Write grade here
  char grade ;
  cout << " Enter student grade : "  ;
  cin >> grade;
  
  cout << "Student ID is : " <<  studentID << endl;
  cout << "Student score is : " << score << endl;
  cout << "Student grade is : " << grade ;
  return 0;
}