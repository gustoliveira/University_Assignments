#include <iostream>
using namespace std;
int matriz[2000][2000] = {};
//declarando matriz como variável global apenas
//por macumba

int main () {
    int x, y, l, c, n;

    while (true){
        cin >> n;
        if (n == 0) break;

        /*
        Zerando toda a matriz para limpar dos resultados anteriores;
        Area é o área e borda mostrará o perimetro;
        */
        for (int i = 0; i < 2000; i++){
            for (int j = 0; j < 2000; j++){
                matriz[i][j] = 0;
            }
        }
        int area = 0, borda = 0;

        /*
        Lendo os valores das coordenadas e dos tamanhos.
        Cada local, que faz parte do terreno, será representado com '1';
        Quando o coloca esse '1', as coordenadas (matriz[j+1][k+1]) são
        somadas uma unidade a mais, para que quando for ler as bordas,
        não dê nenhum tipo de erro, por este motivo também que a matriz
        é maior do que o tamanho máximo da questão;
        */
        for (int i = 0; i < n; i++){
            cin >> x >> y >> l >> c;
            for (int j = x; j < x + l; j++){
                for (int k = y; k < y+ c; k++) matriz[j+1][k+1] = 1;
            }
        }

        /*
        Procura todos os '1' da matriz, e quando acha, adiciona mais 1km2 a
        area, assim temos a área total
        Após isso, irá verificar todas as coordenadas em volta do '1'
        encontrado buscando um '0', caso ache, soma-se mais uma unidade a
        borda, e assim encontra o perimetro;
        */
        for (int i = 0; i < 2000; i++){
            for (int j = 0; j < 2000; j++){
                if (matriz[i][j] == 1) {
                    area++;
                    if (matriz[i][j+1] == 0) borda++;
                    if (matriz[i][j-1] == 0) borda++;
                    if (matriz[i+1][j] == 0) borda++;
                    if (matriz[i-1][j] == 0) borda++;
                }
            }
        }

        cout << area << ' ' << borda << endl;
    }
    return 0;
}
