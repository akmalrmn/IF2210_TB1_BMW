#include <iostream>
using namespace std;

class Player
{
protected:
  string username;
  string peran;
  int uang;
  int berat_badan;
  // AreaInventory petiRahasia;

public:
  Player();
  void setUsername(string);
  void cetakPenyimpanan();
  void makan();
  void membeliDariToko();
  void menjualKeToko();
};