#include <iostream>
using namespace std;

int main()
{
    float Matematika, fisika, rerata;
    string status;
    cout << "Nilai Matematika : " << endl;
    cin >> Matematika;
    cout << " Masukan nilaifis : " << endl;
    cin >> fisika;
    rerata = (Matematika + fisika ) / 2;
    if (Matematika >=70)
    {
        status = "Lulus";
    }
    else if (rerata >60)
    {
        status = "Lulus";
    }
    else 
    {
        status = "Gagal";
    }
    cout << "Rerata = " << rerata << endl;
    cout << "Status kelulusan = " << status << endl;
    
}