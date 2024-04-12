#ifndef GAMESTATUS_HPP
#define GAMESTATUS_HPP


#include "../Penyimpanan/Penyimpanan.hpp"
#include "../Player/Petani.hpp"
#include "../Player/Peternak.hpp"
#include "../Player/Walikota.hpp"
#include "../Toko/Toko.hpp"
#include "../GameObject/GameObject.hpp"
#include "../Exception/Exception.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>


class GameStatus{

private:
    std::vector<Player*> playerTurnList;
    std::map<int,Petani> petaniList;
    std::map<int,Peternak> peternakList;
    Toko toko;
    Walikota walikota;
    int turn;
    // Toko
    bool endGame;
public:
    GameStatus();
    
    int stringToInt(string num);


    Player* getCurrentPlayer();
    Petani getPetani(string username);
    Peternak getPeternak(string username);
    Walikota getWalikota();


    bool isEndGame();
    void nextTurn(GameObject objek);
    void Inisiasi();
    void cetakPenyimpanan();
    void pungutPajak();
    void cetakLadang();
    void cetakPeternakan();
    void tanam();
    void ternak();
    void bangunBangunan();
    void makan();
    void memberiPangan();
    void membeli();
    void menjual();
    void memanen();
    void muat(string path,GameObject objek);
    void simpan(string path, GameObject objek);
    void tambahPemain();
    
};

#endif