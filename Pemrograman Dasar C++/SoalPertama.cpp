//Soal
// Steve Harrington bersama temannya Mike , Eleven, Dustin, Nancy, Will, dan 
// Jonathan berencana akan pergi berpetualang ke portal dimensi alternatif yang 
// disebut "The Upside Down". Sebelum kesana Steve dan teman temannya pergi 
// ke supermarket di wilayah Hawkins untuk membeli manisan. Steve mengambil 
// 8 Marshmallow untuk keranjangnya, Mike mengambil 4 Marshmallow untuk 
// keranjangnya, Eleven mengambil 12 Marshmallow untuk keranjangnya, Dustin
// mengambil 15 Marshmallow untuk keranjangnya, Nancy mengambil 3 
// Marshmallow untuk keranjangnya, Will mengambil 7 Marshmallow untuk 
// keranjangnya , dan Jonathan mengambil 2 Marshmallow untuk keranjangnya.
// Kemudian Steve bersama temannya mengumpulkan semua keranjang dan 
// melakukan pembayaran, saat akan mengambil keranjang masing-masing tibatiba Demogorgon muncul sehingga menyebabkan Steve dan teman-teman 
// mengambil asal keranjang dan berlarian. Setelah Demogorgon tidak terlihat 
// mereka menyadari bahwa keranjang mereka tertukar. Steve membawa keranjang 
// Jonathan, Mike membawa keranjang Will, Eleven membawa keranjang Nancy, 
// Dustin membawa keranjang Steve, Nancy membawa keranjang Dustin, Will 
// membawa keranjang Eleven dan Jonathan membawa keranjang Mike Tampilkan 
// isi keranjang Steve dan teman temannya sebelum dan sesudah tertukar
// Note : Gunakan data secara dinamis

#include <iostream>
// #include <conio.h>
using namespace std;
int main () {
    int mk, el, ds, nc, wl, jt, st;
    cout<<"input marshmallo : "<<endl;
    cout<<"Marshmallo Steve : ";cin>>st;
    cout<<"Marshmallo mike : ";cin>>mk;
    cout<<"Marshmallo eleven : ";cin>>el;
    cout<<"Marshmallo dustin : ";cin>>ds;
    cout<<"Marshmallo nancy : ";cin>>nc;
    cout<<"Marshmallo will : ";cin>>wl;
    cout<<"Marshmallo jonathan : ";cin>>jt;
    int a;
    a=st; st=jt; jt=mk; mk = wl; wl = el;el = nc;nc = ds;ds=a;
    cout<<"Marshmallo setelah di tukar"<<endl;
    cout<<"Marshmallo Steve : "<<st<<endl;
    cout<<"Marshmallo mike : "<<mk<<endl;
    cout<<"Marshmallo eleven : "<<el<<endl;
    cout<<"Marshmallo dustin : "<<ds<<endl;
    cout<<"Marshmallo nancy : "<<nc<<endl;
    cout<<"Marshmallo will : "<<wl<<endl;
    cout<<"Marshmallo jonathan : "<<jt<<endl;
    // getch ();
}