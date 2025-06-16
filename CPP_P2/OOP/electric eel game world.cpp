#include <iostream>
usig namespace std;

class Elecroytcell{
    private:
    int loc;
    int nNeg;
    int nPos;
    


    public: 

    Elecroytcell(char a, int b, int c){
        loc = a;
        nNeg = b;
        nPos = c;
    }

    void SetLoc(char val){
        if(val == 'H' || val == 'B' || val == 'T'){
            loc = val;
        }
    }

    char GetLoc(){
        return loc;
    }


    void SetNumNeg(int val){
        if(val > 0){
            nNeg = val;
        }
    }
    void SetNumPos(int val){
            if(val > 0){
                nPos = val;
            }
        }

    void getNumNeg(){
        return nNeg;
    }
    void getNumPos(){
        return nPos;
    }
    
    int What_is_Your_State() {
        if (nPos > nNeg)
            return 1; // Active
        else if (nPos == nNeg)
            return 0; // Neutral
        else
            return -1; // Inactive
    }

    int operator==(ElectrocyteCell another){
        if(this->loc == another.loc){
            return 1;
        }
        else{
            return 0;
        }
    }
}


class EelFish{
    private:
    int length;
    int numCells;
    Elecroytcell *pcells;

    public:
    EelFish(){
        length = 0; 
        numCells = 0;
        pcells = NULL;
    }

    EelFish(int a, int b, Elecroytcell *P){
        length = a;
        numCells = b;
        pcells = new ElectrocyteCell[numCells];
        for(int i=0; i<numCells; i++){
            pcells[i] = P[i];
        }
    }

    EelFish(EelFish &s){
        this->length = s.length;
        this->numCells = s.numCells;
        this->pcells = new Elecroytcell[s.numCells];
        for(int i=0; i<s.numCells; i++){
            this->pcells[i] = s.pcells[i];
        }
    }

    void operator=(EelFish &s){
        this->length = s.length;
        this->numCells = s.numCells;    
        this->pcells = new Elecroytcell[s.numCells];
        for(int i=0; i<s.numCells; i++){
            this->pcells[i] = s.pcells[i];
        }
    }

    ~EelFish(){
        delete[] pcells;
    }

    void SetLength(int val){
        if(val > 0){
            length = val;
        }
    }
    int GetLength(){
        return length;
    }

    void SetNumCells(int val){
        if(val > 0){
            numCells = val;
            pcells = new Elecroytcell[numCells];
        }
    }
    int GetNumCells(){
        return numCells;
    }

    Elecroytcell Getsinglecell(int i){
        return pcells[i];
    }
    void SetSingleCell(int i, Elecroytcell val){
        if(i >= 0 && i < numCells){
            pcells[i]  = val;
        }
    }


    

}

