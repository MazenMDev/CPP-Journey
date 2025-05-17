#include <iostream>
using namespace std;

class ElectrocytCell {
    private:
        char loc;
        int nNeg;
        int nPos;
    public:
        ElectrocytCell(){
            loc = ' ';
            nNeg = 0;
            nPos = 0;
        }
        ElectrocytCell(char a,int b, int c){
            loc = a;
            nNeg = b;
            nPos = c;
        }

        void setLoc(char value){
            if(value == 'h' || value == 'b' || value == 't'){
                loc = value;
            }
        }
        void setnNeg(int value){
            if(value > 0){
                nNeg = value;
            }
        }
        void setnPos(int value){
            if(value > 0){
                nPos = value;
            }
        }

        char getloc(){
            return loc;
        }
        int getnNeg(){
            return nNeg;
        }
        int getnPos(){
            return nPos;
        }

        int WhatisYourState(){
            return 0;
        }

        int operator ==(ElectrocytCell another){
            if (this->loc == another.loc)
            {
                return 1;
            }
            return 0;
        }
