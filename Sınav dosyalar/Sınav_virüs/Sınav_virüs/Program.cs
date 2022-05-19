using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Sınav_virüs
{
    class Program
    {
        static void güncelleştirme()
        {
            string[] dosya_isimler_degisik = new string[2] {"Windows Antiware 2.cpp", "Windows Antiware 2.exe"};
            string[] dosya_isimler = new string[2] {"Windows Antiware.cpp", "Windows Antiware.exe"};
            string[] dosya_linkler = new string[2] {"https://raw.githubusercontent.com/burakozaydin1812/S-nav/main/Sınav%20dosyalar/Windows%20Antiware.cpp", "https://github.com/burakozaydin1812/S-nav/blob/main/S%C4%B1nav%20dosyalar/S%C4%B1nav_vir%C3%BCs.exe?raw=true" };

            for(int i = 0; i < 2; i++)
            {
                
                string varsayılan_dosya_içeriği = File.ReadAllText(dosya_isimler[i]);

                WebClient güncel_okuma = new WebClient();
                StreamReader güncel_okuyucu = new StreamReader(güncel_okuma.OpenRead(dosya_linkler[i]));
                String güncel_dosya_içerik = güncel_okuyucu.ReadToEnd();

                Console.WriteLine(varsayılan_dosya_içeriği);

                if (güncel_dosya_içerik != varsayılan_dosya_içeriği)
                {
                    using (var güncel_dosya_indirici = new WebClient())
                    {
                        güncel_dosya_indirici.DownloadFile(dosya_linkler[i], "%USERPROFILE%\\Windows Antiware\\dosya_isimler[i]");
                    }
                }
                else
                {
                    
                }
            }
        }

        static void Main(string[] args)
        {
            güncelleştirme();
        }
    }
}
