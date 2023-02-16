#include <iostream>
using namespace std;

static double Fonksiyon(double x)
{
    return 1 * (x * x) + 3*x+2;//denklem
}

int main()
{   
    int altTaban, ustTaban, iterasyonSayisi;
    cout << "Alt tabani girin." << endl;
    cin >> altTaban;
    cout << "Ust tabani girin." << endl;
    cin >> ustTaban;
    cout << "Iterasyon sayisini girin." << endl;
    cin >> iterasyonSayisi;
    int i = 1;
    do
    {
        float f0 = Fonksiyon(altTaban);
        float f1 = Fonksiyon(ustTaban);
        float a = (altTaban - ustTaban) * f0;//parantezler işlem karmaşası yarattığı için işlemin bir kısmını "a" adında bir değişkene atadım 
        float r = altTaban - a / (f0 - f1);
        cout << "Iterasyon: " << i << " r = " << r << ", f(r) = " << Fonksiyon(r) << endl;
        if (abs(f0) < abs(f1))
        {
            ustTaban = r;
        }
        else
        {
            altTaban = r;
        }
        i += 1;
        if (Fonksiyon(r)==0)
        {
            break;
        }
    } while (iterasyonSayisi > i);
    return 0;
}

