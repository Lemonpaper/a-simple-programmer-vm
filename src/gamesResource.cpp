#include <iostream>
#include <string>
#include <cstdlib>
#include <synchapi.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

class games{
    private:
        int bombnum,safenum;
        int mine[4][4];
        bool flag;
    public:
        void minesweeper(){
            Sleep(1000);
            system("cls");
            for (int i = 1; i < 5; i++){
                for (int i = 1; i < 5; i++){
                    cout << "0 ";
                }
                cout << endl;
            }
            for (int i = 0; i <= 3; i++){
                for (int j = 0; j <= 3; j++){
                    mine[i][j] = rand() % 2;
                    if(mine[i][j] == 1){
                        bombnum++;
                    }
                    else{
                        safenum++;
                    }
                }
            }
            for (int i = 1; i <= safenum; i++){
                int h, l;
                cout << "there is" << bombnum << " bombs in this map." << endl;
                Sleep(1000);
                cout << "you have" << safenum << " chances." << endl;
                Sleep(1000);
                cout << "please input the rows and columns.(like this:4 5)" << endl;
                cin >> h >> l;
                Sleep(1000);
                cout << "thinking……" << endl;
                Sleep(1000);
                if (mine[h - 1][l - 1]== 1){
                    cout << "You Failed!!!" << endl;
                    cout << "this is the real map." << endl;
                    flag = false;
                    for (int i = 0; i <= 3; i++){
                        for (int j = 0; j <= 3; j++){
                            if(mine[i][j] == 1){
                                cout << "\033[41m" << mine[i][j] << "\033[0m ";
                            }
                            else{
                                cout << "\033[0m" ;
                                cout << mine[i][j] << " ";
                            }
                        }
                        cout << endl;
                    }
                    cout << "\033[0m";
                    Sleep(2000);
                    break;
                }
                else{
                    mine[h - 1][l - 1] = 8;
                    Sleep(1);
                    cout << "let's countinue!" << endl;
                    system("pause");
                    system("cls");
                    for (int i = 0; i <= 3; i++){
                        for (int j = 0; j <= 3; j++){   
                            if(mine[i][j] == 1 ){
                                cout << 0 << " ";
                            }
                            else if(mine[i][j] == 8){
                                cout << mine[i][j] << " ";
                            }
                            else {
                                cout << mine[i][j] << " ";
                            }
                        }
                        cout << endl;
                    }
                }
            }
            if(flag == true){
                cout << "You win!" << endl;
                system("pause");
                system("cls");
            }
    }
};
