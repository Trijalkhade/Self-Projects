#include<iostream>
using namespace std;

class student {
  private:
    string name;
    int marks[100]; 
    int total;
    int num_marks; 

  public:
    // Assign Marks of student
    void assign(int i) {
      num_marks = i;  
      cout << "Enter the name of the Student: ";
      cin >> name;
      for (int j = 0; j < num_marks; j++) {
        cout << "Enter mark " << j + 1 << ": ";
        cin >> marks[j];
      }
    }

    // Display the Marks and Total marks on screen
    void disp() {
      cout << "Marks of " << name << ":\n";
      for (int j = 0; j < num_marks; j++) {
        cout << j + 1 << ". " << marks[j] << endl;
      }
      cout << "Total: " << total << endl;
    }

    // Calculate the Total marks
    void compute() {
      total = 0;
      for (int j = 0; j < num_marks; j++) {
        total += marks[j];
      }
    }
};

int main() {
  int num, n;
  cout << "Enter the number of students: ";
  cin >> num;
  

  // Check if the number of marks is too large
   do {
    cout << "Enter the total number of marks to be entered for each student: ";
    cin >> n;
    cout << "Error: The maximum number of marks per student is 100.\n";
  }while (n > 100);

  student* s = new student[num];  // Dynamically allocate an array of student objects

  for (int k = 0; k < num; k++) {
    cout << "\nEnter details for student " << k + 1 << ":\n";
    s[k].assign(n); 
    s[k].compute(); 
    s[k].disp();    
  }

  delete[] s;  // Free the dynamically allocated memory

  return 0;
}

