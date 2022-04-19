#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Uzerine yazmalý icin (Append)!!
    ofstream dosya2("C:\\Users\\murat\\Desktop\\C++ DERSLERÝ\\Dosya Yazma Islemleri\\ogrencilerUzerineEklenebilen.txt",std::ios_base::app);
    dosya2 << "Durmadan ekle..."<<endl;


    //Sifirdan olursurmak icin (Write)!!
    ofstream dosya("C:\\Users\\murat\\Desktop\\C++ DERSLERÝ\\Dosya Yazma Islemleri\\ogrenciler.txt");
    int okulNo[2];
    string isim[2];
    int sinif[2];
    for(int i=0;i<2;i++){
        cout<<i+1<<". ogrencinin bilgilerini giriniz..."<<endl;
        cin>>okulNo[i]>>isim[i]>>sinif[i];
    }
    int sayac =0;
    while(sayac<2){
        dosya<<okulNo[sayac]<<" "<<isim[sayac]<<" "<<sinif[sayac]<<endl;
        sayac++;
    }



    return 0;
}
