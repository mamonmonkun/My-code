#include <iostream>
using namespace std;
class Temperature_Converter {
public:
    float Celsius, Fahrenheit;
  
    float Convert_Celsius_to_Fahrenheit(){
    return Celsius * 32;
    }
    float Convert_Fahrenheit_to_Celsius(){
    return Fahrenheit / 32;
    }
};
int main() {

    Temperature_Converter temp;
    
    cout << "Enter Celsius: ";
    cin >> temp.Celsius;
    cout << "Enter Fahrenheit: ";
    cin >> temp.Fahrenheit;
    
    cout << temp.Celsius << " degree Celsius is equivalent to " 
    << temp.Convert_Celsius_to_Fahrenheit() 
    << " Fahrenheit " << endl;
   
    cout << temp.Fahrenheit << " is equivalent to "
    << temp.Convert_Fahrenheit_to_Celsius() 
    << " degree Celsius " << endl;
    
    return 0;
}    