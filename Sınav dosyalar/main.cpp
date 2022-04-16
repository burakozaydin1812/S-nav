#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>
#include <winsock.h>


using namespace std;

int internet_kontrol(){
    system("ping www.google.com > bilgiler.txt");

    ifstream ping_dosya_acma("bilgiler.txt", ios::in);

    if(ping_dosya_acma.is_open()){

        bool kelime_bulamama = true;
        string ping_dosya_tasima;

        while(getline(ping_dosya_acma, ping_dosya_tasima)){

            if(ping_dosya_tasima.find("TTL", 0) != string::npos){

                cout << "Internet baglantisi tespit edildi.\n";
                kelime_bulamama = false;
                break;
            }
        }

        if(kelime_bulamama == true){

            cout << "Internet yok.\n";
        }
    }

    else{

        cout << "bilgiler.txt dosyasi acilamiyor.\n";
    }
    
    return 0;
}

int Kontrol(){
	INPUT in[2] = {};
    ZeroMemory(in, sizeof(in));

    in[0].type = INPUT_KEYBOARD;
    in[0].ki.wVk = 0x5B;
    in[0].ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
    
    in[1].type = INPUT_KEYBOARD;
    in[1].ki.wVk = 0x5B;
    in[1].ki.dwFlags = KEYEVENTF_KEYUP;

    Sleep(1000);

    UINT uS = SendInput(2, in, sizeof(INPUT));

    if(uS != 2){
        cout << "HATA";
    }
    else{
        cout << "TAMAMLANDİ";
    }
    
    return 0;
}

int soket_olusturma(){
    
	SOCKET soket = socket(AF_INET, SOCK_STREAM, 0);
	if(soket < 0){
		printf("Soket olusturma sirasinda hata ile karsilasildi.");
	}
	else{
		printf("Soket basariyla olusturuldu.");
	}
	return 0;
}

int main(){

	internet_kontrol();

	soket_olusturma();

    return 0;
}
