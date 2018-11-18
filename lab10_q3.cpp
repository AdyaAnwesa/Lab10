/* Q3. Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
*/


#include <iostream>
using namespace std;

class Rectangle {
	public:
	
	//Declaring Length and Breadth of Rectangles
	double length , breadth;
               
	//Declarating Member functions
	double Area(void);
      	double Perimeter(void);
};

//Member functions definitions
double Rectangle::Area(void) {
   	return length*breadth;
}

//Member functions definitions
double Rectangle::Perimeter(void) {
   	return 2*(length+breadth);
}

//Driver function
int main() {
	double length,breadth;
	//Declaring rect1 and rect2 which are 1st and 2nd rectangles respectively
  	Rectangle rect1; Rectangle rect2; 

   	//Asking user to input the values 
   	cout<<"Please enter the length of 1st Rectangle here " << endl;
   	cin>>rect1.length;
    	cout<<"Please enter the breadth of 1st Rectangle here " << endl;
   	cin>>rect1.breadth;

   	//Area of 1st Rectangle
   	double area1 = rect1.Area();
   	cout << "Area of the 1st Rectangle is " << area1 <<endl;
      	//Perimeter of 1st Rectangle
  	double perimeter1 = rect1.Perimeter();
   	cout << "Perimeter of the 1st Rectangle is " << perimeter1 <<endl;
   
	//Asking the user to input values
   	cout<<"Please enter the length of 2nd Rectangle here " << endl;
   	cin>>rect2.length;
    	cout<<"Please enter the breadth of 2nd Rectangle here " << endl;
   	cin>>rect2.breadth;
 
   	//Area of 2nd Rectangle	
   	double area2 = rect2.Area();
   	cout << "Area of the 2nd Rectangle is " << area2 <<endl;
   	//Perimeter of 2nd Rectangle
   	double perimeter2 = rect2.Perimeter();
   	cout << "Perimeter of the 2nd Rectangle is " << perimeter2 <<endl;
   
   	//To compare the area of both rectangles 
   	if(area1>area2){
       		cout<<"Area of 1st rectangle is greater than that of 2nd "<<endl;
   	}
   	else if(area1<area2){
       		cout<<"Area of 2nd rectangle is greater than that of 1st"<<endl;
   	}
   	else{
       		cout<<"Area of both the rectangles is equal."<<endl;
   	}
   
   	//To compare the Perimeter of both rectangles
   	if(perimeter1>perimeter2){
       		cout<<"Perimeter of 1st rectangle is greater than that of 2nd"<<endl;
   	}
   	else if(perimeter1<perimeter2){
       		cout<<"Perimeter of 2nd rectangle is greater than that of 1st"<<endl;
   	}
   	else{
       		cout<<"Perimeter of both the rectangles is equal."<<endl;
   	}

   	return 3;
}
