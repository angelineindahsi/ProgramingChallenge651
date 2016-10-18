#include <iostream>
#include <iomanip>
using namespace std;

struct corpData {
    string name;
    double firstQuarter, secondQuarter, thirdQuarter, fourthQuarter, totalAnnual, average;
} north, south, east, west;

int main () {
    double northTotal, southTotal, eastTotal, westTotal;
    double northAverage, southAverage, eastAverage, westAverage;
    
    cout << "North Division" << endl;
    cout << "Enter first quarter sale: ";
    cin >> north.firstQuarter;
    cout << "Enter second quarter sale: ";
    cin >> north.secondQuarter;
    cout << "Enter third quarter sale: ";
    cin >> north.thirdQuarter;
    cout << "Enter fourth quarter sale: ";
    cin >> north.fourthQuarter;
    
    cout << "East Division" << endl;
    cout << "Enter first quarter sale: ";
    cin >> east.firstQuarter;
    cout << "Enter second quarter sale: ";
    cin >> east.secondQuarter;
    cout << "Enter third quarter sale: ";
    cin >> east.thirdQuarter;
    cout << "Enter fourth quarter sale: ";
    cin >> east.fourthQuarter;
    
    cout << "South Division" << endl;
    cout << "Enter first quarter sale: ";
    cin >> south.firstQuarter;
    cout << "Enter second quarter sale: ";
    cin >> south.secondQuarter;
    cout << "Enter third quarter sale: ";
    cin >> south.thirdQuarter;
    cout << "Enter fourth quarter sale: ";
    cin >> south.fourthQuarter;
    
    cout << "West Division" << endl;
    cout << "Enter first quarter sale: ";
    cin >> west.firstQuarter;
    cout << "Enter second quarter sale: ";
    cin >> west.secondQuarter;
    cout << "Enter third quarter sale: ";
    cin >> west.thirdQuarter;
    cout << "Enter fourth quarter sale: ";
    cin >> west.fourthQuarter;
    
    northTotal = north.firstQuarter + north.secondQuarter + north.thirdQuarter + north.fourthQuarter;
    southTotal = south.firstQuarter + south.secondQuarter + south.thirdQuarter + south.fourthQuarter;
    eastTotal = east.firstQuarter + east.secondQuarter + east.thirdQuarter + east.fourthQuarter;
    westTotal = west.firstQuarter + west.secondQuarter + west.thirdQuarter + west.fourthQuarter;
    
    northAverage = northTotal / 4;
    southAverage = southTotal / 4;
    eastAverage = eastTotal / 4;
    westAverage = westTotal /4;
    
    cout << setw(10) << "Division" << setw(14) << "\tAnnual Total" << setw(18) << "\tAnnual Average\n";
    cout << setw(10) << "\t\nNorth \t" << setw(14) << northTotal << "\t" << setw(18) << northAverage << endl;
    cout << setw(10) << "\t\nSouth \t" << setw(14) << southTotal << "\t" << setw(18) << southAverage << endl;
    cout << setw(10) << "\t\nEast \t" << setw(14) << eastTotal << "\t" << setw(18) << eastAverage << endl;
    cout << setw(10) << "\t\nWest \t" << setw(14) << westTotal << "\t" << setw(18) << westAverage << endl ;
    
    return 0;
}
