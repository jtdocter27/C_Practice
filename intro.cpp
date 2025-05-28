// This is an introductory program for C++. The goal here is to have one script of all the base commands. 

#include <iostream> //python equivalent of import library, called a pre-processor directive. 

int main() { //for starts, // is the python equivalent of #. int main decalres the main function, 
const double tempk = 324.0; //const makes the variable nonchangeable. 
double temp = 13.14; // double is the same thing as a float 
int temp2 = (int) temp; // changing datatypes from double to int. 
// std::cout << temp2; 


double tempf; //this declares the variable with nothing in it. 
std::cout << "Enter Temp in F: "; 
std::cin >> tempf; // >> are used for input and output operations; = is used for variable assignment
if (tempf > 32) {
    std::cout << "Above freezing";
}
double tempc = 0; 
tempc = (tempf - 32) / 1.8; 
// std::cout << "The temp is " << tempc << " degrees Celsius.\n"; // has to be double quotes. 

return 0; //return statement ends the function, 0 states that the code ran successfully.
}

/* this is a 
multiline comment
see the multiple lines? Pretty Neat*/

