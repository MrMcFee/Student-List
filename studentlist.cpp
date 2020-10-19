#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

class newClass{};

//struct for student
struct Student {
  char firstName[15];
  char lastName[15];
  int id;
  float gpa;
};

void newStudent(vector<Student> temp, Student *s);
void printList();
void deleteStudent();

/*TODO: Point newStudent() to vector, storing student info in it. After that, work on making printList and deleteStudent, which should be easy once i figure out how to point to vector with add. 
*/
bool running = true;
int main() {
  vector<vector<Student> >list;
  vector<Student> temp;
  Student *s;
  //runs the main loop, runs functions when prompted.
  while(running == true) {
    cout << "Enter 'a' to add a new student, 'p' to print out all existing students, 'd' to delete an existing student, or 'c' to exit the program: " << endl;
    char input;
    cin >> input;
    if(input == 'a') {
      newStudent(temp, s);
    }
    else if(input == 'p') {
      printList();
    }
    else if(input == 'd') {
      deleteStudent();
    }
    else if(input == 'c') {
      return false;
    }
    else {
      cout << "Enter one of the four main commands: " << endl;
    }
  }
  return 0;
}
  //creates new student, reads in temp vector along with student pointer and assigns the inputs to Student. Didn't get around to pushing back student into parent vector.
void newStudent(vector<Student> temp, Student *s) {
  Student name;
  //Student = *s;
  //vector<Student> temp;
  cout << "Enter your first name: ";
  cin >> name.firstName;
  temp.push_back(*s);
  cout << "Enter your last name: ";
  cin >> name.lastName;
  temp.push_back(*s);
  cout << "Enter your ID Number: ";
  cin >> name.id;
  temp.push_back(*s);
  cout << "Enter your GPA: ";
  cin >> name.gpa;
  temp.push_back(*s);
  cout << endl << "Student first name: " << name.firstName << endl << "Student last name: " << name.lastName << endl << "ID: " << name.id << endl << "GPA: " << printf("%.2f", name.gpa) << endl;
  //list.push_back(temp);
  return;
}
//prints list, iterator straight up does not work. I created a separate program and went through a step by step process on a website and it simply returns a whole slew of errors.
void printList(vector<Student> temp) {
  vector<Student>::iterator ptr;
  for (ptr = temp.begin(); ptr < temp.end(); ptr++) {
    cout << "HI" << endl;
  }
  return;
}
//did not get to deleteStudent. I would prompt for student name, then find that student in my vector and use Student.erase() function.
void deleteStudent() {

  return;
}
