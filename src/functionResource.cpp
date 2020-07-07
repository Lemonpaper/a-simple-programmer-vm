#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <cassert>
#include <windows.h>
using namespace std;

class filefunctions{
    private:
    public:
        void readTxt(string file){
            ifstream infile; 
            infile.open(file.data());
            try{
                assert(infile.is_open());
            }
            catch(...){
                exit(0);
            }
            char c;
            infile >> noskipws;
            while (!infile.eof()){
                infile >> c;
                cout << c;
                if(c == '\n'){
                    cout << '\n';
                }
            }
        infile.close();
        }
};

class os{
    public:
        string cmd;
        
        string get_computer_name(){
            char buffer[512];
            DWORD name_len = 512;
            string name;

            GetComputerName((LPSTR)buffer,&name_len);
            name.assign(buffer);

            return name;
        }

        string get_user_name(){
            char buffer[512];
            DWORD name_len = 512;
            string name;

            GetUserName((LPSTR)buffer,&name_len);
            name.assign(buffer);

            return name;
        }
        void setFontColor(string color){
            if(color == "plain"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
            else if(color == "red"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            }
            else if(color == "green"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            }
            else if(color == "blue"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
            }
            else if(color == "yellow"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
            }
            else if(color == "pink"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);
            }
            else if(color == "cyan"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |FOREGROUND_BLUE);
            }
            else if(color == "grey"){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
            }
            else{
                cerr << "error interuptted." << endl;
            }
        }
};
