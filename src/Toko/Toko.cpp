#include "Toko.hpp"

Toko::Toko() {
    this->stok = map<string,int>();
}

void Toko::welcome(){
    cout << "Selamat datang di Toko Cina!!" << endl;
    cout << "                                 %%###########%%" << endl;
    cout << "                                %#(((((((((((((#%"<< endl;
    cout << "                      %%#%%%%%%#(((((((((((((((((#%%%%%%#%" << endl;
    cout << "                       %#((((((((((((((((((((((((((((((##%" << endl;
    cout << "                          %#((((((((((((((((((((((((#%%" << endl;
    cout << "                            /....,,,........,,,,...,(" << endl;
    cout << "                            /..,/% %/.......(  #*,.,(" << endl;
    cout << "                            (..,,***,.......,*/*,..,(" << endl;
    cout << "                %      %####(((((((((((((((((((((((((###%      %" << endl;
    cout << "               %##(###(((((((((((((((((((((((((((((((((((((###(##" << endl;
    cout << "                  %##(((((((((((((((((((((((((((((((((((((((##%" << endl;
    cout << "                     %(*,,,***,,,,,,,,,**,,,,,,,,,,***,,,*(%" << endl;
    cout << "                      /,.,/% %/,.....,(% #/......*(% %*..*(" << endl;
    cout << "                      /,..,///,.......*//*,......,*///,..*(" << endl;
    cout << "                     %(///////////////////////////////////(%" << endl;
    cout << "            %########(((((((((((((((((((((((((((((((((((((((########%" << endl;
    cout << "              %##(((((((((((((((((((((((((((((((((((((((((((((((##%" << endl;
    cout << "                 %(/*****************************************/#" << endl;
    cout << "                 %(,..*/((((((,...,/(((((((((/,..,*((((((/,..,#" << endl;
    cout << "                 %(,.,(%     %/,.,/%         %*..*(%     #/..,#" << endl;
    cout << "                 %(,..*/#####(,..,/%         %*..,*(#####/,..,#" << endl;
    cout << "                 %(,.............,/%         %*..............,#" << endl;
    cout << "                  %%#############%%           %%#############%" << endl;
}

// Toko::Toko() {
//     this->stok = map<string,int>();

// }

// void Toko::titipJual(Bangunan el){

// }
// /*
// Method untuk melakukan pembelian dengan objek yang memiliki tipe Bangunan
// */
// void Toko::mauBeli(Bangunan el){

// }

void Toko::beli(){

}
void Toko::jual(){

}

map<string,int> &Toko::getStok(){
    return this->stok;
}
