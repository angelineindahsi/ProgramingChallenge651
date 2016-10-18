#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 50;

struct movieData
{
    char title[SIZE];
    char director[SIZE];
    int year;
    int runningTime;
};

void movieInfo (movieData&, movieData&);
void movieDisplay(movieData, movieData);

int main ()
{
    movieData movie1, movie2;
    
    movieInfo(movie1, movie2);
    movieDisplay(movie1, movie2);
    return 0;
}

void movieInfo(movieData &movie1, movieData &movie2)
{
    cout << "Movie 1" << endl;
    cout << "Enter the title of the movie: ";
    cin.ignore();
    cin.getline(movie1.title,SIZE);
    
    cout << "Enter the name of the director: ";
    cin.ignore();
    cin.getline(movie1.title, SIZE);
    
    cout << "Enter the movie's release year: ";
    cin >> movie1.year;
    
    cout << "Enter the movie's running time (in minutes): ";
    cin >> movie1.runningTime;
    
    cout << "Movie 2" << endl;
    cout << "Enter the title of the movie: ";
    cin.ignore();
    cin.getline(movie2.title,SIZE);
    
    cout << "Enter the name of the director: ";
    cin.ignore();
    cin.getline(movie2.title, SIZE);
    
    cout << "Enter the movie's release year: ";
    cin >> movie2.year;
    
    cout << "Enter the movie's running time (in minutes): ";
    cin >> movie2.runningTime;
}

    void movieDisplay(movieData movie1, movieData movie2)
    {
        cout << "First Movie" << endl;
        cout << "Movie Title: " << movie1.title << endl;
        cout << "Director: " << movie1.director << endl;
        cout << "Year Released: " << movie1.year << endl;
        cout << "Running time: " << movie1.runningTime << endl;
        
        cout << "Second Movie" << endl;
        cout << "Movie Title: " << movie2.title << endl;
        cout << "Director: " << movie2.director << endl;
        cout << "Year Released: " << movie2.year << endl;
        cout << "Running time: " << movie2.runningTime << endl;
    }
