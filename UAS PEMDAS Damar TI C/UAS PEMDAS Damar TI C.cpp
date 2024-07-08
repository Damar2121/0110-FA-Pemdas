#include <iostream>
using namespace std;
class MataKuliah
{
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasAkhir = 0.0;
    }

    virtual void namaMataKuliah() { return; }
    virtual void inputNilai() { return; }
    virtual float hitungNilaiAkhir() { return; }
    virtual void cekKelulusan() { return; }

    void setpresensi(float presensi)
    {
        this->presensi = presensi;

    }
    float getpresensi()
    {
        return presensi;
    }

    void setactivity(float activity)
    {
        this->activity = activity;

    }
    float getactivity()
    {
        return presensi;
    }

    void setexercise(float exercise)
    {
        this->exercise = exercise;

    }
    float getexercise()
    {
        return exercise;
    }

    void settugasAkhir(float tugasAkhir)
    {
        this->tugasAkhir = tugasAkhir;

    }
    float gettugasAkhir()
    {
        return tugasAkhir;
    }

};

class Pemrograman : public MataKuliah
{
private:
    int presensi;
    int activity;
    int exercise;
    int tugasAkhir;

public:
    void inputNilai() {
        cout << "Mata Kuliah: pemrograman" << endl;
        cout << "Masukkan nilai presensi: ";
        cin >> presensi;
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
        cout << "Masukkan nilai tugas akhir: ";
        cin >> tugasAkhir;
    }




};

class Jaringan : public MataKuliah
{
private:
    int activity;
    int exercise;

public:
    void inputNilai() {
        cout << "Mata Kuliah: jaringan" << endl;
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
    }
};

int main()
{
    char pilih;
    MataKuliah* matakuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;


}