    #include <iostream>
    #include <vector>

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
    //    cout << "Hello world!";
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

//    /**********************Character Type**************/        
//    char middle_initial {'A'};
//    cout << "My middle initial is "<< middle_initial << endl; 
//
//    /*******************Integer Type**********************/
//    unsigned short int exam_score {92};
//    cout << "My exam score was "<< exam_score << endl;
//
//    int countries_represented{65};
//    cout << "There were "<< countries_represented << " countries represented in my meeting"<< endl;
//
//    long florida_population{20610000};
//    cout << "Population of Florida is "<< florida_population << endl;
//
//    long long people_on_earth{10'000'000'000};
//
//    cout << "The population of the earth is approx. "<< people_on_earth << endl;
//
//    long long distance_to_alpha_centauri{9'461'000'000'000};
//    cout << "The distance to Alpha Centauri is "<< distance_to_alpha_centauri << " kilometers" << endl;
//
//    /********************Floating Point Type*******************/
//    
//    float car_payment{401.23};
//    cout << "My car payment is $"<< car_payment <<endl;
//    
//    double PI{3.14159};
//    cout << "PI number is "<< PI << endl;
//    
//    long double large_amount{2.7e120};
//    cout << large_amount << "is  a very big number" << endl;
//    
//    /*****************Boolean  Type*******************/
//    bool game_over{false};
//    cout << "The value of the Game Over is "<< game_over <<endl;
//
//<<<<<<< HEAD
//    /********************Overflow Example*******************/
//    short value1{30000};
//    short value2{1000};
//    short product{value1 * value2};
//    
//    cout<<"The sum of "<< value1 << " and " << value2 << " is " << product << endl; 

//     Declare 2 empty vectors of integers named
//     vector1 and vector 2, respectively.
    
    vector <int> vector1;
    vector <int> vector2;
    
//    Add 10 and 20 to vector1 dynamically using push_back

    vector1.push_back(10);
    vector1.push_back(20);
    
//    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

//    Add 100 and 200 to vector2 dynamically using push_back

    vector2.push_back(100);
    vector2.push_back(200);
    
//    Display the elements in vector2 using the at() method as well as its size using the size() method

    cout << "\nvector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements" << endl;

//   Declare an empty 2D vector called vector_2d
//   Remember, that a 2D vector is a vector of vector<int>

    vector <vector<int>> vector_2d;
    
//    Add vector1 to vector_2d dynamically using push_back
//    Add vector2 to vector_2d dynamically using push_back

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
//    Display the elements in vector_2d using the at() method

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

//   Change vector1.at(0) to 1000

    vector1.at(0) = 1000;
    
//    Display the elements in vector_2d again using the at() method

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

//    Display the elements in vector1 

    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

/*    
        What did you expect? 
        Did you expect to see the 1000 in the vector_2d after you changed vector1?

        Did you get what you expected? 
        
        What do you think happended?
        It looks like copies are being made, right? 

*/
    cout << endl;
    return 0;
    }


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
//  
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
    
//	return 0;
//}
