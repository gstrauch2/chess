// George Strauch
// chess board
// 04/24/2018

/* just gets array and sets it to chess board*/


#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// must be out here because of how array works
int const intX = 8;
int const intY = 8;


void makeBoard(char chrArray[intX][intY]){

    for (int i = 0; i < intY; ++i) {
        for (int j = 0; j < intX; ++j) {

            if(i == 0 || i == 7) {

                switch (j) {

                    case 0:
                        chrArray[j][i] = 'r';
                        break;
                    case 1:
                        chrArray[j][i] = 'n';
                        break;
                    case 2:
                        chrArray[j][i] = 'b';
                        break;
                    case 3:
                        chrArray[j][i] = 'q';
                        break;
                    case 4:
                        chrArray[j][i] = 'k';
                        break;
                    case 5:
                        chrArray[j][i] = 'b';
                        break;
                    case 6:
                        chrArray[j][i] = 'n';
                        break;
                    case 7:
                        chrArray[j][i] = 'r';
                        break;

                }

            }
            else if(i == 1 || i == 6){
                chrArray[j][i] = 'p';
            }
            else{
                chrArray[j][i] = '*';
            }

            if(i == 7 || i == 6){
                chrArray[j][i] = toupper(chrArray[j][i]);
            }
        }
    }

}


void print(char chrArray[intX][intY]){

    for (int i = 0; i < intY; ++i) {
        for (int j = 0; j < intX; ++j) {
            cout << chrArray[j][i] << " ";
        }
        cout << '\n';
    }
    cout << '\n';

}


int main() {

    char chrChess[intY][intX];
    makeBoard(chrChess);
    print(chrChess);

    // once again "free(): invalid size" problem
    // will work fine without but that will be a memory leak
    delete chrChess;

    return 0;

}
