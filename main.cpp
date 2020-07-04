#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

string cmd;

string get_user_name()
{
	char buffer[512];
	DWORD name_len=512;
	string name;
	
    GetUserName((LPSTR)buffer,&name_len);
    name.assign(buffer);
    
    return name;
}

string get_computer_name()
{
	char buffer[512];
	DWORD name_len=512;
	string name;
	
    GetComputerName((LPSTR)buffer,&name_len);
    name.assign(buffer);
    
    return name;
}
void process_cmd(){
    if(cmd == "exit" || cmd == "EXIT"){
        exit(0);
    }
    else if(cmd == "usrname" || cmd == "USRNAME"){
        cout << get_user_name();
    }
    else if(cmd == "pcname" || cmd == "PCNAME"){
        cout << get_computer_name();
    }
    else if(cmd == "powershell" || cmd == "POWERSHELL"){
        system("powershell");
    }
    else if(cmd == "cmd" || cmd == "CMD"){
        system("cmd");
    }
    else if(cmd == "help" || cmd == "HELP"){
        cout  << "\tcommand lists in prosys:\n exit\n usrname\n pcname\n powershell\n cmd \n help\n\t help in cmd:\n";
        system("help");
    }
}

void process(){
    cout << '\n' << get_computer_name() << "@prosys > ";
    cin >> cmd;
    process_cmd();
}

int main(int argc, char **argv)
{
	cout << " ---- --- --- ---  -  -  --- \n";
    cout << "|  , |  _| , | __| \\ // | __|\n";
    cout << "|  __|_| |___|__ |  ||  |__ |\n";
    cout << "|_|          |___|  ||  |___|\n\t prosys CLI version 1.0\n\t prosys by elytraflyer.\n";
    while(true)
        process();
	return 0;
}
