#include <iostream>
#include<math.h>

using namespace std;

class Piramida {
protected:
    double a,sosn, v,s, sbok, hb,ho, spol;
public:
    void init(void);
    void sgran(void);
    void obem(void);
    void spoln(void);
};

class Tetr : public Piramida {
public:
    void init(void);
    void sgran(void);
    void obem(void);
};

void Piramida::init(void) {
    cout << "\nВведите длину ребра основания правильной треугольной пирамиды: ";
    cin >> a;
    cout << "Введите длину бокового ребра правильной треугольной пирамиды: ";
    cin >> s;

}

void Piramida::sgran(void){
    sosn = (a * a * sqrt(3)) / 4.;
    sbok = (a * sqrt(s * s - ((a * a) / 4.))) / 2;
    cout << "\nПлощадь боковой грани = " << sbok;
    cout << "\nПлощадь основания = " << sosn;
}

void Piramida::obem(void) {
    hb = sqrt(s * s - ((a * a) / 4.));
    ho = a * sqrt(3) / 2;
    v = sosn / 3 * sqrt(hb * hb - ((ho * ho) / 9));
    cout << "\nОбъем пирамиды = " << v;
}

void Piramida::spoln(void) {
    spol = sosn + 3 * sbok;
    cout << "\nПлощадь полной поверхности = " << spol;
}

void Tetr::init(void) {
    cout << "\nВведите длину ребра тетраэдара: ";
    cin >> a;
}

void Tetr::sgran(void) {
    sosn = (a * a * sqrt(3)) / 4.;
    sbok = sosn;
    cout << "\nПлощадь грани тетраэдара = " << sosn;
}

void Tetr::obem(void) {
    hb = sqrt(a * a - ((a * a) / 4.));
    ho = a * sqrt(3) / 2;
    v = sosn / 3 * sqrt(hb * hb - ((ho * ho) / 9));
    cout << "\nОбъем пирамиды = " << v;
}



int main()
{
    setlocale(0, "");
    Piramida obj;
    cout << "\nПравильная треугольная пирамида ";
    cout << "\n====================================";

    obj.init();
    obj.sgran();
    obj.spoln();
    obj.obem();

    cout << "\n\n";

    Tetr obj1;
    cout << "\nТетраэдр";
    cout << "\n====================================";
    obj1.init();
    obj1.sgran();
    obj1.spoln();
    obj1.obem();
    cout << "\n\n";
}

