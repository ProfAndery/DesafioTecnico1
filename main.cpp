#include <iostream>
#include <string>
using namespace std;

// han solo 
int main()
{
    int idadeHan = 50;
    int vitoriasEmCorridas = 0;
    char tipoSanguinioHan = 'A';
    char placaMilleniunFalcon = 'X';
    float velocidadeMillenuinFalcon = 120.20f;
    double milVisuVideos = 20.45; 
    bool naveCorrendo = false;
    bool corridaComLive = true;
    string nomeDaCorrida;
    string nomeAdversario;
    
    cout << "Digite o nome da corrida que o Han vai participar" << endl;
    cin >> nomeDaCorrida;
    cout << "Digite o adversario" << endl;
    cin >> nomeAdversario;
    
    cout << "O piloto Han Solo, com " << idadeHan << " anos, vai correr a corrida " << nomeDaCorrida << " contra o piloto " << nomeAdversario << endl;
    cout << "Seu tipo sanguineo é: " << tipoSanguinioHan << endl;
    naveCorrendo = true;
    vitoriasEmCorridas +=1;
    milVisuVideos *= 2;
    
    cout << "O Han venceu!" << endl;
    cout << "Total de corridas ganhas: " << vitoriasEmCorridas << endl;
    cout << "Visualizações de sua live: " << milVisuVideos*1000 << endl;
}