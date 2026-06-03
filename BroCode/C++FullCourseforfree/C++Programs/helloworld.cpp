#include <iostream>
#include <vector>
#include <cmath>
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

int main(){

// This is a comment

/*
this
is
a
multi-line
comment
*/

  // std::cout << "I like pizza!" << '\n'; // std::endl
  // std::cout << "It's really good!" << '\n'; // std::endl
  // return 0;

  // Variable and basics data type

  // int x; // Declaration
  // x = 5; // Assignment

  // // int x = 5;

  // int y = 6;
  // int sum = x + y;
  // std::cout << x << '\n';
  // std::cout << y << '\n';
  // std::cout << sum << '\n';

  // Integer (whole number)

  // int age = 23;
  // int year = 2025;
  // int days = 7;

  // int days = 7.5; //Output will be 7 because it can't store .5

  // Double (number including decimal)
  // double price = 10.99;
  // double gpa = 2.5;
  // double temperature = 25.1;

  // std::cout << price;
  
  // Single Character
  
  // char grade = 'A';
  // char initial = 'B';
  // char currency = '$';
  
  // std::cout << price;

  // Boolean (True or False)
  // bool student = true;
  // bool power = false;
  // bool forSale = true;

  // String (objects that represent a sequence of text)
  // std::string name = "Save";
  // std::string day = "Tuesday";
  // std::string food = "Ramen";
  // std::string address = " 224 Somdet Chao Phraya";

  // std::cout << "Hello " << name << '\n';
  // std::cout << "You are " << age << " year old" << '\n';

  // Const

  // The const keyword specifies that a variable's value is constant
  // tells the compiler to prevent anything from modifying it
  // (read-only)

  // const double PI = 3.14159;
  // double radius = 10;
  // double circumference = 2 * PI * radius;

  // std::cout << circumference << "cm";

  // const int LIGHT_SPEED = 299792458;
  // const int WIDTH = 1920;
  // const int HEIGHT = 1080;

  // Namespaces
  // provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.

  // using namespace first;

  // int x = 0;

  // std::cout << x;
  // std::cout << second::x;

  // using namespace std::cout;
  // using namespace std::string;

  // string name = "Save";

  // cout << "Hello " << name;

  // Typedef and typealiases

  // typedef = reserved keyword used to create an additional name (alias) for another data type. New identifier for an existing type. Helps with readability and reduces typos. Use when there is a clear benefit. Replaced with 'using' (work better w/ templates)

  // std::vector<std::pair<std::string, int>> pairlist;
  // pairlist_t pairlist;

  // std::string firstName;
  // text_t firstName = "Save";
  // number_t age = 23;

  // std::cout << firstName << "\n";
  // std::cout << age << "\n";

  // Arithmetic Operators
  // Return the result of a specific arithmetic operation (+ - */)

  // int students = 20;

// students = students + 1;
// students += 1;
// students++;

// students = students - 1;
// students -= 1;
// students--;

// students = students * 2;
// students *= 2;

// students = students / 2;
// students /= 2;

// double students = 20;
// students /= 3;

  // int remainder = students % 3;

  // std::cout << remainder << "\n";

  // parenthesis
  // multiplication & division
  // addition & subtraction

  // int students = 6 - 5 + 4 * 3 / 2;
  // 6 - 5 + 12 / 2
  // 6 - 5 + 6
  // 1 + 6
  // 7

  // std::cout << students << "\n";

  // Type conversion
  // Conversion a value of one data type tp another data type.
  // Implicit = automatic
  // Explicit = Precede value with new data type (int)

// int x = 3.14;
// double x = (int) 3.14;

// std::cout << x;

// char x = 100;
// std::cout << x;

// std::cout << (char)100;

// int correct = 8;
// int questions = 10;
// double score = correct / (double)questions * 100;

// std::cout << score << "%";

//User Input
// cout << (insertion operator)
// cin >> (extraction operator)

// std::string name;
// int age;

// std::cout << "What's your age?: ";
// std::cin >> age;

// std::cout << "What's your full name?: ";
// std::cin >> name;
// std::getline(std::cin >> std::ws, name);

// std::cout << "Hello " << name << "\n";
// std::cout << "You are " << age << " years old";

// Useful math related functions
// https://www.cplusplus.com/reference/cmath/

// double x = 3;
// double y = 4;
// double z;

// z = std::max(x, y);
// z = std::min(x, y);
// z = pow(2, 4);
// z = sqrt(9);
// z = abs(-3);
// z = round(3.14);
// z = ceil(3.14);
// z = floor(3.99);

// std::cout << z;

return 0;
}