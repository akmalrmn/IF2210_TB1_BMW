#ifndef PETIRAHASIA_HPP
#define PETIRAHASIA_HPP

#include "Penyimpanan.hpp"
#include "../Item/Item.hpp"

class PetiRahasia : public Penyimpanan<Item*> {
  public:
    /* Default Constructor */
    PetiRahasia() : Penyimpanan<Item*>() {}
    PetiRahasia(int m, int n) : Penyimpanan<Item*>(m, n) {}

    /* Cetak PetiRahasia */
    void cetakPeti(string label);
};

#endif