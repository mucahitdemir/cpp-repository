#include <iostream>
#include <climits>

using namespace std;

int main()
{
//	std::cout<<"Hello world"<<std::endl;
//    
//    int favorite_number;
//    
//    std::cout<<"Enter your favorite number from 1-100:";
//    std::cin >> favorite_number;
//    std::cout <<"Amazing! that's my favorite number!"<< std::endl;
    
       // cout << "Hello world!";
//    int num1;
//    int num2;
//    double num3;

//    cout << "Hello";
//    cout << "World" << endl;

//    cout << "Hello world!" << endl;
//    cout << "Hello" << " world!" << endl;
//    cout << "Hello" << " world!\n";
//    cout << "Hello\nOut\nThere\n";

//    int num1;
//    int num2;
//    double num3;

//    cout <<  "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;

//    cout << "Enter a first integer: ";
//    cin >> num1;
//    
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    
//    cout << "You entered " << num1 << " and " << num2 << endl;
    
    
//    cout << "Enter 2 integers separated with a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;



//    cout << "Enter a double: ";
//    cin >> num3;
//    
//    cout << "You entered : " << num3 << endl;

   
//    cout << "Enter an integer: ";
//    cin >> num1;
//    
//    cout << "Enter a double: ";
//    cin >> num3;
//    
//    cout << "The integer is: " << num1 << endl;
//    cout << "And the double is " << num3 << endl;
  
//    cout << "float: " << sizeof(float) << endl; // float: 4
//    cout << "double: " << sizeof(double) << endl;// double: 8
//
//    int x, y;
//    int sum;
//    cout << "Type a number: ";
//    cin >> x;
//    cout << "Type another number: ";
//    cin >> y;
//    sum = x + y;
//    cout << "Sum is: " << sum;
//
///**Character Type**/
//
//    char middle_initial{'A'};
//    cout << "My middle initial is "<< middle_initial << endl;
//    
//
///* Integer Type*****/
//    unsigned short int my_exam_score{87};
//    cout << "My exam score is "<< my_exam_score << endl;
//    int country_number{65};
//    cout << "I know more than "<< country_number <<" country names"<< endl;
//    
//    long istanbul_population{20'000'000};
//    cout << "The population of Istanbul is around "<< istanbul_population << " millions" << endl;
//    
//    long long Alpha_centauri_distance{9'461'000'000'000};
//    cout << "The distance for the Alpha Centauri is " << Alpha_centauri_distance <<" km" << endl;
//    
///****Floating Point Types****/
//    float discount{15.5};
//    cout <<"Discount is around "<< discount<< endl;
//
///*Sizeof variable*/
//    cout << "Size of char: " << sizeof(char) << " byte" << endl;
//    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
//    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
//    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
//    
///*Minimum Values*/
//    
//    cout << "Minimum values: "<< endl;
//    cout << "char: "<< CHAR_MIN << endl;
//    cout << "int: "<< INT_MIN << endl;



/****************Section 8 Statements and Operators***************/
//CHALLENGE 

const int dollar_value{100};
const int quarter_value{25};
const int dime_value{10};
const int nickel_value{5};

int entered_amount{};

cout << "Enter an amount int cents: ";

cin >> entered_amount;

int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

/*SOLUTION WITHOUT USING MODULO OPERATOR*/

//dollars = entered_amount / dollar_value;
//balance =  entered_amount - (dollars * dollar_value);
//
//quarters = balance / quarter_value;
//balance -= quarters * quarter_value;
//
//dimes = balance / dime_value;
//balance -= dimes * dime_value;
//
//nickels = balance / nickel_value;
//balance -= nickels * nickel_value;
//
//pennies = balance;

/*MODULO*/

dollars = entered_amount / dollar_value;
balance =  entered_amount % dollar_value;

quarters = balance / quarter_value;
balance %= quarter_value;

dimes = balance / dime_value;
balance %= dime_value;

nickels = balance / nickel_value;
balance %= nickel_value;

pennies = balance;

cout << "Dollars: " << dollars << endl;
cout << "Quarters: " << quarters << endl;
cout << "Dimes: " << dimes << endl;
cout << "Nickels: "<< nickels << endl;
cout << "Pennies: "<< pennies << endl; 

	return 0;
}