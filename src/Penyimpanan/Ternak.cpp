#include "Ternak.hpp"

void Ternak::cetakPenyimpanan(string label) {
  cout << "    ";
  /* Garis Judul Belum Dinamis*/
  cout << "================[ " << label << " ]=================" << endl << endl; 

  cout << "    ";
  for (int i = 0; i < n; i++) {
      cout << "   " << (char) ('A' + i) << "  ";
  }
  cout << " " << endl;

  cout << "    ";
  for (int i = 0; i < n; i++) {
      cout << "+-----";
  }
  cout << "+" << endl;

  for (int i = 0; i < m; i++) {
      cout << " " << setw(2) << setfill('0') << i + 1 << " ";

      for (int j = 0; j < n; j++) {
          cout << "| ";
          if (data[i][j].getKodeHuruf().empty()) {
              cout << setw(3) << "   "; // Jika elemen kosong, cetak spasi
          } else {
              cout << setw(3) << data[i][j].getKodeHuruf(); // Cetak nama tanaman
          }
          cout << " ";
      }

      cout << "|" << endl;

      cout << "    ";
      for (int i = 0; i < n; i++) {
          cout << "+-----";
      }
      cout << "+" << endl;
  }
}