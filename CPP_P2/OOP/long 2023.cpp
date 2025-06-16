#include <iostream> 
using namespace std;

class RaceDriver{

    private:
    char name;
    char counrty;
    int age;
    int rate;

    public:
    RaceDriver(){
        name = ' ';
        counry = ' ';
        age = 0;
        rate = 0;
    }
    RaceDriver(char a, char b, int c, int d){
        name = a;
        counry = b;
        age = c;
        rate = d;
    }
    
    void set(char a, char b, int c, int d){
        name = a;
        counry = b;
        age = c;
        rate = d;
    }
    void getname() return name;
    void getcounry() return counrty;
    void getage() return age;
    void getrate() return rate;

    int operator < (RaceDriver &another){
        if (this->age < another.age && this->rate == another.age)
        {
            return 1;
        }
        else return 0;
        
    }
}

class RaceTeam{
    private:
    char name;
    int number;
    RaceDriver * RD;

    public:
    RaceTeam(){
        name = ' ';
        number = 0;
        RD = NULL;
    }
    RaceTeam(char n, int num, RaceDriver * d){
        name = n;
        number = num;
        RD = new RaceDriver[number];
        for(int i=0; i<number; i++){
            RD[i] = d[i]; 
        }
    }


    RaceTeam(RaceTeam &S){
        name = S.name;
        number = S.number;
        RD = new RaceDriver[number];
        for(int i=0; i<number; i++){
            RD[i] = S.RD[i];
        }
    }

    void oprator = (RaceTeam &S){
        name = S.name;
        number = S.number;
        RD = new RaceDriver[number];
        for(int i=0; i<number; i++){
            RD[i] = S.RD[i];
        }
    }

    ~RaceTeam(){
        delete[] RD;
    }


    void Setname(char na){
        name = na;
    }
    int getname() return name;
    void setnumber(int num){
        number = num;
    }
    int getnumber() return number;

    void Setsingledriver(RaceDriver driver, int i){
        if (i >= 0 && ii < number)
        {
            RD[i] = driver;
        }
    }
    RaceDriver GetSignledriver(int i){
        return RD[i];
    }

    int HMDA(int diver_age){
        int count = 0;
        for(int i=0; i<number; i++){
            if (diver_age == RD->getage)
            {
                count++;
        
            }
        }
        return count;
    }

    int DOY(){
        int min = 99999;
        int max = -99999;
        for(int i=0; i<number; i++){
            int age = RD[i].getage;
            if (min > age)
            {
                min = age;
            }
            if (max < age)
            {
                max = age;
            }
        }
        return max - min;
    }

    int HRIC(char country_name){
        int max = -9999;
        for(int i=0; i<number; i++){
            if (country_name == RD[i]->getcounry)  
            { 
                if (max < RD[i]->getrate)
                {
                    max = RD[i].getrate;
                }
            }
        }
        return max;
    }
}

class Race_Championships{
    public:
    char name;
    int number;
    RaceTeam RT;

    private:
    Race_Championships(){
        name = ' ';
        number = 0;
        RT = NULL;
    }
    Race_Championships(char n, int num, Race_Championships *t){
        name = n;
        number = num;
        RT = new RaceTeam[number];
        for(int i=0 ; i<number; i++){
            RT[i] = t[i];
        }
    }

    Race_Championships(Race_Championships &R){
        name = R.name;
        number = R.number;
        RT = new RaceTeam[number];
        for(int i=0; i<number; i++){
            RT[i] = R.RT[i];
        }
    }
    void operator = (Race_Championships &R){
        name = R.name;
        number = R.number;
        RT = new RaceTeam[number];
        for(int i=0; i<number; i++){
            RT[i] = R.RT[i];
        }
    }

    void Setname(char na) name = na;
    void getname() return name;

    void Setnumber(int num) number = num;
    void getnumber() return number;

    void SetRaceteam(char name, int i){
        RT[i] = team;
    }
    RaceTeam getraceteam(int i)return RT[i];

    int TBAD(int RaceName){
        int max = -99999;
        for(int i=0; i<number; i++){
            if (RT[i].DOY > max)    
            {
                max = RT[i].DOY;
                RaceName = RT[i].name;
            }
        }
        return RaceName;
    }

    int TNOHRIC(char country){
        int count = 0;
        for(int i=0; i<number; i++){
            if (rating == 1)
            {
                if(RT[i].HRIC(country) == 'C'){
                    count++;
                }
            }
        }
        return count;
    }

    
}