#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <winsock.h>
#pragma comment(lib, "urlmon.lib")

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
        cout << "TAMAMLANDI";
    }
    
    return 0;
}

int soket_olusturma(){

	/*int soket_olusturma(){
    
	SOCKET soket = socket(AF_INET, SOCK_STREAM, 0);
	if(soket < 0){
		printf("Soket olusturma sirasinda hata ile karsilasildi.");
	}
	else{
		printf("Soket basariyla olusturuldu.");
	}
	return 0;
}*/
}

int kendini_tasima(){

	/*system("REG ADD HKCU\Software\Microsoft\Windows\CurrentVersion\Explorer\Advanced\ /v HideFileExt /t REG_DWORD /d 0 /f");
	
	/*system("where /R D: *.docx *.pdf")*/

}

int guncellestirme(){
	
}

int main(){

	internet_kontrol();
	kendini_tasima();
	
	system("pause");

    return 0;
}
