#include <iostream> 
using namespace std;    

// Define a class named 'movie'
class movie 
{
private:
    char namemovie;   // Stores the name of the movie (only one character — not ideal)
    int num;          // Stores the number of ratings
    float *rating;    // Dynamically allocated array to store ratings

public:     
    // Default constructor
    movie(){
        namemovie = ' ';
        num = 0;
        rating = new float[num]; // Allocates array of size 0 (not useful, just avoids nullptr)
    }

    // Parameterized constructor
    movie(char name, int number){
        namemovie = name;
        num = number;
        rating = new float[num]; // Allocate memory for the ratings
    }

    // Setter for movie name
    void setname(char name){
        namemovie = name;
    }

    // Setter for number of ratings, also allocates new memory for ratings
    void setnum(int number){
        num = number;
        rating = new float[num];
    }

    // Sets a rating at a specific index
    void setrating(float rate, int i){
        rating[i] = rate;
    }                           
    
    // Getter for movie name
    char getname(){
        return namemovie;
    }

    // Calculates and returns the average rating
    float getAvgRating(){
        float sum = 0;
        for(int i = 0; i < num; i++){
            sum += rating[i]; // Add each rating to the sum
        }
        return sum / num; // Return the average
    }

    // Destructor to free the allocated memory
    ~movie(){
        delete[] rating;
    }
};

int main(){
    char name;     // To store the name of the movie (only one character!)
    int number;    // To store the number of ratings

    // Get movie name and number of ratings from user
    cout << "Enter the name of the movie: ";
    cin >> name;
    cout << "Enter the number of ratings: ";
    cin >> number;

    movie m;             // Create a movie object using default constructor
    m.setname(name);     // Set the movie name
    m.setnum(number);    // Set the number of ratings and allocate memory

    float rate;
    // Loop to input all ratings
    for(int i = 0; i < number; i++){
        cout << "Enter rating " << i+1 << ": ";
        cin >> rate;
        m.setrating(rate, i); // Set each rating
    }    

    // Display the average rating
    cout << "Average rating: " << m.getAvgRating() << endl;     
}
