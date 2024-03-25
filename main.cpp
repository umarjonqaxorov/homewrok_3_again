#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;
int main() {
    cout << " problem 1" ;
    double consumption;
    cout << "Enter water consumption (cubic meters): ";
    cin >> consumption;
    double totalCost = (consumption);
    const double fixed_cost = 13.0;
    const double tier1_rate = 0.4;
    const double tier2_rate = 0.12;
    const double tier3_rate = 1.4;
    const double tier1_limit = 30.0;
    const double tier2_limit = 50.0;
    double cost = fixed_cost;
    if (consumption <= tier1_limit) {
        float  whoct =  cost + consumption * tier1_rate;
        cout << "The whole cost is " << whoct << endl;
    } else if (consumption <= tier2_limit) {
      float  whocst1 = cost + tier1_limit * tier1_rate + (consumption - tier1_limit) * tier2_rate;
        cout << "The whole cost is " << whocst1 << endl;
    } else if (consumption <= tier2_limit + 10.0) {
       float whcost2= cost + tier1_limit * tier1_rate + (tier2_limit - tier1_limit) * tier2_rate + (consumption - tier2_limit) * tier3_rate;
        cout << "The whole cost is " <<whcost2 << endl;
    } else {
       float whcost3 = cost + tier1_limit * tier1_rate + (tier2_limit - tier1_limit) * tier2_rate + 10.0 * tier3_rate + (consumption - tier2_limit - 10.0) * 1.5;
        cout << "The whole cost is " << whcost3<< endl;

    }
    cout << " problem 2" ;
    double price1, price2, price3;

    cout << "Enter the prices of three products: ";
    cin >> price1 >> price2 >> price3;

    // Find the highest price using nested ternary operators
    double highestPrice = (price1 >= price2) ? (price1 >= price3 ? price1 : price3) : (price2 >= price3 ? price2 : price3);

    cout << "The maximum number is " << highestPrice << endl;


    cout << " problem 3" ;
    char gen;
    float height ;
    std:: cout << " Enter the gender ( male or female ):  " ;
    std::cin >> gen ;
    std::cout << " Enter the height:  " ;
    std:: cin >> height ;
    if ( gen == 'M') {
        if ( height < 1.70) {
            std::cout << " Short" << endl ;
        } else if ( height >= 1.70 && height < 1.85 ) {
            std::cout << "Normal "<< endl;
        } else  {
            cout << " Tall" ;
        }
    } else if ( gen == 'F') {
        if ( height < 1.60) {
            cout << " Short" << endl; ;
        } else if ( height >= 1.60 && height < 1.75) {
            cout << " Normal" << endl;
        } else {
            cout << " Tall" << endl;
        }

    } else {
        cout << " Unkown number" << endl ;
    }
    cout << " problem 4" ;
    char macAddress[18];
    cout << "Enter the MAC address (in x:x:x:x:x:x format): ";
    cin >> macAddress;
    int firstOctet;
    stringstream ss;
    ss << hex << macAddress[0] << macAddress[1];
    ss >> firstOctet;
    string addressType;
    if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else {
        addressType = "Multicast";
    }
    cout << "Type of MAC address: " << addressType << endl;
    cout << " problem 5" ;
    float n1, n2, result;
    char op;

    cout << "Enter first number, operator (+, -, *, /), and second number: ";
    cin >> n1 >> op >> n2;

    switch(op) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                cout << "Error: Division by zero." << endl;
                return 1; // Exit the program with error status
            }
            break;

        default:

            cout << "Error: Invalid operator." << endl;
            return 1; // Exit the program with error status
    }

    cout << "Output: " << result << endl;

    return 0 ;
}

