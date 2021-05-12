#include <iostream>

using namespace std;

int main()
{
    double litros, tempo, velocidade;
    cin >> tempo;
    cin >> velocidade;
    litros = (velocidade * tempo) / 12;
    cout.precision(3);
    cout << fixed << litros <<endl;
    return 0;
}
