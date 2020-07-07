/* 
 * *****************************************************
 **   ---- --- --- ---  -  -  ---                       *
 **  |  , |  _| , | __| \\// | __|                      *
 **  |  __|_| |___|__ |  ||  |__ |                      *
 **  |_|          |___|  ||  |___|                      *
 **  prosys CLI version 1.1 prosys by elytraflyer.      *
 * *****************************************************
 * 
 */
#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include "gamesResource.cpp"
#include "functionResource.cpp"
using namespace std;

filefunctions ff;
games gameplayer;
os osfunctions;

void process_cmd(){
    if(osfunctions.cmd == "exit" || osfunctions.cmd == "EXIT"){
        exit(0);
    }
    else if(osfunctions.cmd == "usrname" || osfunctions.cmd == "USRNAME"){
        cout << osfunctions.get_user_name();
    }
    else if(osfunctions.cmd == "pcname" || osfunctions.cmd == "PCNAME"){
        cout << osfunctions.get_computer_name();
    }
    else if(osfunctions.cmd == "powershell" || osfunctions.cmd == "POWERSHELL"){
        system("powershell");
    }
    else if(osfunctions.cmd == "cmd" || osfunctions.cmd == "CMD"){
        system("cmd");
    }
    else if(osfunctions.cmd == "cls" || osfunctions.cmd == "CLS"){
        system("cls");
    }
    else if(osfunctions.cmd == "minesweeper" || osfunctions.cmd == "MINESWEEPER"){
        gameplayer.minesweeper();
    }
    else if(osfunctions.cmd == "file" || osfunctions.cmd == "FILE"){
        string fpath;
        cout << "the file's path:";
        cin >> fpath;
        ff.readTxt(fpath);
    }
    else if(osfunctions.cmd == "help" || osfunctions.cmd == "HELP"){
        cout  << "\tcommand lists in prosys:\n exit\n usrname\n pcname\n powershell\n cmd \n help\n\t help in cmd:\n";
        system("help");
    }
    else if(osfunctions.cmd == "version" || osfunctions.cmd == "VERSION"){
        cout << "this is prosys version 1.1,build 1035." << endl;
    }
    else{
        cout << '\"' << osfunctions.cmd << '\"' << " : no such command.\n";
    }
}

void process(){
    cout << '\n' << osfunctions.get_computer_name() << "@prosys > ";
    cin >> osfunctions.cmd;
    process_cmd();
}

int main(int argc, char **argv)
{
    osfunctions.setFontColor("yellow");
	cout << " ---- --- --- ---  -  -  --- \n";
    cout << "|  , |  _| , | __| \\ // | __|\n";
    cout << "|  __|_| |___|__ |  ||  |__ |\n";
    cout << "|_|          |___|  ||  |___|\n\t prosys CLI version 1.1\n\t prosys by elytraflyer.\n";
    osfunctions.setFontColor("plain");
    while(true)
        process();
	return 0;
}
