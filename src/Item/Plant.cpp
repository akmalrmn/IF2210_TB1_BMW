#include "Plant.hpp"

// Static variable Init
int Plant::jumlahTanaman = 0;

// constructor
Plant::Plant(string kodeHuruf, string nama, string tipe,int durasiPanen,int harga):Item(kodeHuruf,nama,tipe),durasiPanen(durasiPanen), harga(harga){ 
        jumlahTanaman += 1;
        id_tanaman = jumlahTanaman;
}
int Plant::getDurasiPanen() {
        return durasiPanen;
}
int Plant::getHarga(){
        return harga;
}
int Plant::getDurasiPanen() {
        return durasiPanen;
}



