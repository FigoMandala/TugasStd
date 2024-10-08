#include "Kepala.h"

int main() {
    List RRF;
    Create_List(RRF);

    Pekerjaan data1;
    cout << "Masukkan Instansi Pegawai ke-1: ";
    cin >> data1.instansi;
    cout << "Masukkan Nama Pegawai ke-1: ";
    cin >> data1.pegawai;
    cout << "Masukkan NIP Pegawai ke-1: ";
    cin >> data1.nip;

    adr ad1 = New_Elemen(data1);
    Insert_First(RRF, ad1);

    Pekerjaan data2;
    cout << "Masukkan Instansi Pegawai ke-2: ";
    cin >> data2.instansi;
    cout << "Masukkan Nama Pegawai ke-2: " ;
    cin >> data2.pegawai;
    cout << "Masukkan NIP Pegawai ke-2: ";
    cin >> data2.nip;

    adr ad2 = New_Elemen(data2);
    Insert_Last(RRF, ad2);

    Pekerjaan data3;
    cout << "Masukkan Instansi Pegawai ke-3: ";
    cin >> data3.instansi;
    cout << "Masukkan Nama Pegawai ke-3: ";
    cin >> data3.pegawai;
    cout << "Masukkan NIP Pegawai ke-3: ";
    cin >> data3.nip;

    adr ad3 = New_Elemen(data3);
    Insert_First(RRF, ad3);

    Pekerjaan data4;
    cout << "Masukkan Instansi Pegawai ke-4: ";
    cin >> data4.instansi;
    cout << "Masukkan Nama Pegawai ke-4: ";
    cin >> data4.pegawai;
    cout << "Masukkan NIP Pegawai ke-4: ";
    cin >> data4.nip;

    adr ad4 = New_Elemen(data4);
    Insert_Last(RRF, ad4);

    Pekerjaan data5;
    cout << "Masukkan Instansi Pegawai ke-5: ";
    cin >> data5.instansi;
    cout << "Masukkan Nama Pegawai ke-5: ";
    cin >> data5.pegawai;
    cout << "Masukkan NIP Pegawai ke-5: ";
    cin >> data5.nip;

    adr ad5 = New_Elemen(data5);
    Insert_After(RRF, ad4, ad5);

    Pekerjaan data6;
    cout << "Masukkan Instansi Pegawai ke-6: ";
    cin >> data6.instansi;
    cout << "Masukkan Nama Pegawai ke-6: ";
    cin >> data6.pegawai;
    cout << "Masukkan NIP Pegawai ke-6: ";
    cin >> data6.nip;

    adr ad6 = New_Elemen(data6);
    Insert_After(RRF, ad4, ad6);

    cout << "\nDaftar NIPsebelum pengurutan dan penghapusan:" << endl;
    Show(RRF);

    adr pDel;
    Delete_After(RRF, ad1, pDel);

    Delete_Last(RRF, pDel);

    SortByNip(RRF);

    cout << "\nDaftar NIP sesudah pengurutan dan penghapusan:" << endl;
    Show(RRF);

    return 0;
}
