#include <iostream> 
using namespace std;    

class movie 
{
private:
    char namemovie;
    int num;
    float *rating;

public:     
    movie(){
        namemovie = ' ';
        num = 0;
        rating = new float[num];
    }

    movie(char name, int number){
        namemovie = name;
        num = number;
        rating = new float[num];
    }

    void setname(char name){
        namemovie = name;
    }
    void setnum(int number){
        num = number;
        rating = new float[num];
    }
    void setrating(float rate, int i){
        rating[i] = rate;
    }                           
    
    char getname(){
        return namemovie;
    }
    float getAvgRating(){
        float sum = 0;
        for(int i = 0; i < num; i++){
            sum += rating[i];
        }
        return sum / num;
    }

    ~movie(){
        delete[] rating;
    }
};


int main(){
    char name;
    int number; 
    cout << "Enter the name of the movie: ";
    cin >> name;
    cout << "Enter the number of ratings: ";
    cin >> number;
    movie m;
    m.setname(name);
    m.setnum(number);   
    
    float rate;
    for(int i=0 ;i<number; i++){
        cout << "Enter rating " << i+1 << ": ";
        cin >> rate;
        m.setrating(rate, i);
    }    
    cout << "Average rating: " << m.getAvgRating() << endl;     
}