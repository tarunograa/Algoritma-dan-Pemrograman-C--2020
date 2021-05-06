// Soal
// Harry perlu membeli perlengkapan untuk tahun ajaran baru, oleh karena itu ia
// mengambil uang sebesar 60 galleons di Gringotts. Setelah itu Harry pergi ke
// Olivander untuk memperbaiki tongkat Ron, ia membayar 119 sickles untuk
// tongkat tersebut, setelah itu Harry berkunjung ke Potage’s Cauldron Shop untuk
// membeli kuali baru, ia membayar kuali barunya seharga 2465 knuts. Setelah
// mengemasi tongkat Ron dan kuali miliknya Harry mampir ke Florish and Blotts
// untuk membeli buku tahun ajaran baru, untuk buku Defence Against the Dark
// Arts Harry membayar 136 sickles. Kemudian Harry hendak pergi ke toko
// Quidditch Quality Supplies, tetapi di tengah jalan ia bertemu Hermione yang
// sedang bersedih karena Gringotts menolak pertukaran uang mugglenya, karena
// merasa kasihan Harry memberikan 15 galleons miliknya untuk Hermione yang
// diganti oleh Hermione sebesar 22,5 dollar. Setelah itu Harry melanjutkan
// perjalananya ke Quidditch Quality Supplies, disana ia menghabiskan 15 galleons
// untuk membeli segala perlengkapan baru untuk turnamen Quidditch di
// Hogwarts. Karena belanjaan yang terlalu banyak Harry akhirnya memutuskan
// untuk menggunakan jasa peri rumah, ia membayar peri rumah tersebut sebesar
// 17 sickles untuk membawa belanjaannya hingga Leaky Cauldron. Untuk
// bermalam di Leaky Cauldron Harry harus membayar 2,5 galleons setiap malam.
// Pertanyaannya
// a. Berapa total belanja Harry dalam galleon, sickels dan knuts?
// b. Dengan sisa uang Harry, berapa malam ia dapat menginap di Leaky
// Cauldron?
// c. Berapa nilai tukar galleon dengan dollar?
// Hint:
// 1 galleon =17 sickles
// 1 sickles =29 knuts

#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d, e;
    a = 17;
    b = 29;
    c = 119 + (2465 / b) + 136 + (15 * a) + 17;
    d = c / a;
    e = c * b;
    int f, g;
    f = 60 - d;
    g = f / 2.5;
    cout << "Total belanja (Sickles) = " << c << endl;
    cout << "Total belanja (Galleon) = " << d << endl;
    cout << "Total belanja (Knuts) = " << e << endl;
    cout << "Sisa uang Harry adalah = " << f << " Galleon " << endl;
    cout << "Dan total lama waktu bermalam adalah " << g << " Malam "<<endl;
    cout << "Nilai tukar galleon terhadap dollar adalah 1 galleon = "<< 22.5/15<<" dollar ";
}
