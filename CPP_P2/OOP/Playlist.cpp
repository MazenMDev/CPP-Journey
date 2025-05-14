#include <iostream>
using namespace std;

class Playlist
{
private:
    int numtrack;
    int *duration;
public:
    Playlist(){
        numtrack = 0;
        duration = NULL;
    }

    Playlist(int num){
        numtrack = num;
        duration = new int[num]; // Allocate memory for the duration array
    }

    ~Playlist(){
        delete[] duration;
    }


    Playlist(const Playlist &p){
        numtrack = p.numtrack;
        duration = new int[numtrack]; // Allocate memory for the duration array
        for(int i=0; i<numtrack;i++){
            duration[i] = p.duration[i]; // Copy the values from the original array
        }
    }

    Playlist operator = (const Playlist &p){
        if(this != &p){
            delete[] duration;
            numtrack = p.numtrack;
            duration = new int[numtrack]; // Allocate memory for the duration array
            for(int i=0; i<numtrack;i++){
                duration[i] = p.duration[i]; // Copy the values from the original array
            }
        }
        return *this; // Return the current object
    }

    Playlist operator + (const Playlist &p){
        Playlist newplaylist;
        newplaylist.numtrack = numtrack + p.numtrack;
        newplaylist.duration = new int[newplaylist.numtrack]; // Allocate memory for the new duration array
        for(int i=0; i<numtrack ; i++){
            newplaylist.duration[i] = duration[i]; // Copy the values from the original array
        }
        for(int i=0; i<p.numtrack ; i++){
            newplaylist.duration[i+numtrack] = p.duration[i]; // Copy the values from the original array
        }
        return newplaylist;
    }


    void setnumtrack(int num){
        numtrack = num;
        delete[] duration;
        duration = new int[num]; // Allocate memory for the duration array
    }

    void setduration(int i, int dur){
        if (i < numtrack)
        {
            duration[i] = dur;
        }
    }

    int getnumtrack(){
        return numtrack;
    }

    int getduration(int i){
        if (i < numtrack)
        {
            return duration[i];
        }
    }
};



int main()
{
    Playlist p;

    int num;
    cout << "Enter the number of tracks: ";
    cin >> num;
    
    Playlist p1(num); // Create a Playlist object with the specified number of tracks
    for(int i=0; i<num; i++){
        int dur;
        cout << "Enter the duration of track " << i+1 << ": ";
        cin >> dur;
        p1.setduration(i, dur); // Set the duration for each track
    }
    Playlist p2 = p1;

    for(int i=0; i<p2.getnumtrack(); i++){
        cout << "Duration of track " << i+1 << ": " << p2.getduration(i) << endl; // Print the duration of each track
    }
    Playlist newplaylist = p1 + p2; // Create a new playlist by adding two playlists
    for(int i=0; i<newplaylist.getnumtrack(); i++){
        cout << "Duration of track " << i+1 << ": " << newplaylist.getduration(i) << endl; // Print the duration of each track
    }
    cout << "The end of the program." << endl;
    cout << "Press any key to continue..." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
