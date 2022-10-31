#include<iostream>
using std::cout;
using std::cin;
using std::endl;


// GradeBook class definition
class GradeBook {
	
public: 
	// function that display a welcome message to the GradeBook user.
	void displayMessage(){
		cout << "Welcode to class"<<endl;
	}
	
	
};

int main (){
	
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook.
	myGradeBook.displayMessage(); // call object's displayMessage function.
	return 0; // indicate successful termination.
} // end main.
