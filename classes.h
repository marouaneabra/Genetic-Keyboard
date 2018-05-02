#include <algorithm>
#include <random>





// Key class one for each position on the keyboard
class key{

    public:
    char charcter;
    key *adjList[5] = {NULL,NULL,NULL,NULL,NULL};
    int adjdist[5] = {100000,100000,100000,100000,100000};
    //...more maybe

};

//Keyboard class fo
class keyboard {
    // Access specifier
    public:
    //keyboard array 
    key board[32]; 
    double fitness;
    keyboard();

};
    
    //constructor
keyboard::keyboard(){
    //array to be shuffled
    char to_shuffle[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
    'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r','s', 't', 'u', 'v', 
    'w', 'x', 'y', 'z',' ',':','"','<','>','?',' '};
    //std::random_shuffle(&to_shuffle[0],&to_shuffle[31]);

    //adding charcters  and distances to board
    for (int i = 0; i<32 ; i++){

        //setting charcters on board
        board[i].charcter = to_shuffle[i];

        //setting adj matrices and adj distances for all graphs that are in keyboard
    if (i == 3){
            board[i].adjList[0] = &board[4];
            board[i].adjList[1] = &board[14];
            board[i].adjList[2] = &board[15];
            
            board[i].adjdist[0] = 90;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 170;
            
            
        }
        if (i == 4){
            board[i].adjList[0] =&board[3];
            board[i].adjList[1] =&board[14];
            board[i].adjList[2] =&board[15];

            board[i].adjdist[0] = 90;
            board[i].adjdist[1] = 120;
            board[i].adjdist[2] = 92;
            
        }
        if (i ==5){
            board[i].adjList[0] =&board[6];
            board[i].adjList[1] =&board[16];
            board[i].adjList[2] =&board[17];

            board[i].adjdist[0] = 90;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 150;
            
        }
        if (i == 6){
            board[i].adjList[0] =&board[5];
            board[i].adjList[1] =&board[16];
            board[i].adjList[2] =&board[17];

            board[i].adjdist[0] = 90;
            board[i].adjdist[1] = 120;
            board[i].adjdist[2] = 92;
            
        }

        if (i == 9){

            board[i].adjList[0] =&board[10];
            board[i].adjList[1] =&board[20];
            board[i].adjList[2] =&board[21];

            board[i].adjdist[0] = 90;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 150;

        }


        if (i == 10){

            board[i].adjList[0] =&board[9];
            board[i].adjList[1] =&board[20];
            board[i].adjList[2] =&board[21];

            board[i].adjdist[0] = 90;
            board[i].adjdist[1] = 120;
            board[i].adjdist[2] = 92;

        }

        if (i == 11){
            board[i].adjList[0] =&board[0];
            board[i].adjList[1] =&board[22];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 97;
            
        }

        if (i == 12){
            board[i].adjList[0] =&board[1];

            board[i].adjdist[0] = 92;

        }

        if (i == 13){
            board[i].adjList[0] =&board[2];
            board[i].adjList[1] =&board[23];
            board[i].adjList[2] =&board[24];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 97;
            board[i].adjdist[2] = 97;

        }

        if (i == 14){
            board[i].adjList[0] =&board[3];
            board[i].adjList[1] =&board[4];
            board[i].adjList[2] =&board[15];
            board[i].adjList[3] =&board[25];
            board[i].adjList[4] =&board[26];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 120;
            board[i].adjdist[2] = 90;
            board[i].adjdist[3] = 97;
            board[i].adjdist[4] = 97;


        }


        if (i == 15){
            board[i].adjList[0] =&board[3];
            board[i].adjList[1] =&board[4];
            board[i].adjList[2] =&board[14];
            board[i].adjList[3] =&board[25];
            board[i].adjList[4] =&board[26];

            board[i].adjdist[0] = 170;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 90;
            board[i].adjdist[3] = 97;
            board[i].adjdist[4] = 97;
        }
        if (i == 16){
            board[i].adjList[0] =&board[5];
            board[i].adjList[1] =&board[6];
            board[i].adjList[2] =&board[17];
            board[i].adjList[3] =&board[27];
            board[i].adjList[4] =&board[28];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 120;
            board[i].adjdist[2] = 90;
            board[i].adjdist[3] = 97; 
            board[i].adjdist[4] = 170;            
        }

        if (i == 17){

            board[i].adjList[0] =&board[5];
            board[i].adjList[1] =&board[6];
            board[i].adjList[2] =&board[16];
            board[i].adjList[3] =&board[27];
            board[i].adjList[4] =&board[28];

            board[i].adjdist[0] = 150;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 90;
            board[i].adjdist[3] = 97; 
            board[i].adjdist[4] = 97;

        }

        if (i == 18){
            board[i].adjList[0] =&board[7];
            board[i].adjList[1] =&board[29];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 97;

        }

        if (i == 19){
            board[i].adjList[0] =&board[8];
            board[i].adjList[1] =&board[30];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 97;

        }

        if (i == 20){

            board[i].adjList[0] =&board[9];
            board[i].adjList[1] =&board[10];
            board[i].adjList[2] =&board[21];
            board[i].adjList[3] =&board[31];

            board[i].adjdist[0] = 92;
            board[i].adjdist[1] = 120;
            board[i].adjdist[2] = 90;
            board[i].adjdist[3] = 97;
        }


        if (i == 21){

            board[i].adjList[0] =&board[9];
            board[i].adjList[1] =&board[10];
            board[i].adjList[2] =&board[20];
            

            board[i].adjdist[0] = 150;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 90;

        }

        if (i == 25){
            board[i].adjList[0] =&board[14];
            board[i].adjList[1] =&board[15];
            board[i].adjList[2] =&board[26];

            board[i].adjdist[0] = 97;
            board[i].adjdist[1] = 97;
            board[i].adjdist[2] = 90;
            
        }
        if (i == 26){
            board[i].adjList[0] =&board[14];
            board[i].adjList[1] =&board[15];
            board[i].adjList[2] =&board[25];


            board[i].adjdist[0] = 170;
            board[i].adjdist[1] = 97;
            board[i].adjdist[2] = 90;
            
        }
        if (i == 27){
            board[i].adjList[0] =&board[16];
            board[i].adjList[1] =&board[17];
            board[i].adjList[2] =&board[28];

            board[i].adjdist[0] = 97;
            board[i].adjdist[1] = 97;
            board[i].adjdist[2] = 90;
            
        }

        if (i == 28){

            board[i].adjList[0] =&board[16];
            board[i].adjList[1] =&board[17];
            board[i].adjList[2] = &board[27];

            board[i].adjdist[0] = 170;
            board[i].adjdist[1] = 92;
            board[i].adjdist[2] = 90;
            

        }


        if (i == 31){

            board[i].adjList[0] =&board[31];

            board[i].adjdist[0] = 97;

        }

    }
}

// a class for fingers. We can store:
// (1)there position (what key they are on), so that we solve graph problems
// more...
class finger{

    public:
        key *curPosition;


    void setPos(key *pos){
        curPosition = pos;
    }

};

//class that has all of the fingers where we need to save postion
class hands{

         finger r_index;
         finger l_index;
         finger r_pinky;

    // The constructor of hands requires a keyboard, to set positions on.
    hands(keyboard instance){

        //set position of finger by taking instance of keyboard object, getting board and then finding
        //spot in array.
        r_index.setPos(instance.board[17]);
        l_index.setPos(instance.board[14]);
        r_pinky.setPos(instance.board[20]);
    }
};
