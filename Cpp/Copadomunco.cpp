#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Copadomunco{
    int data; //gols
    char time;
    Copadomunco *left, *right;

    Copadomunco(int d, char t){
        data = d;
        time = t;
        left = NULL;
        right = NULL;
    }
};

Copadomunco* encontrarVencedorDFS(Copadomunco* partida);
void liberarMemoria(Copadomunco* no);

int main(void){
    vector<Copadomunco*> jogos;
    for(int i = 0; i < 16; i++){
        jogos.push_back(new Copadomunco(0, 'A' + i));
    }

    while(jogos.size() > 1){
        vector<Copadomunco*> proximojogo;

        for(size_t i = 0; i < jogos.size(); i += 2){

            Copadomunco* time1 = jogos[i];
            Copadomunco* time2 = jogos[i+1];

            int golsM, golsN;
            cin >> golsM >> golsN;

            time1->data = golsM;
            time2->data = golsN;

            Copadomunco* partida = new Copadomunco(0, '?');
            partida->left = time1;
            partida->right = time2;

            
            proximojogo.push_back(partida);
        }
        jogos = proximojogo;
    }

    Copadomunco* raizDaArvore = jogos[0];

    Copadomunco* campeao = encontrarVencedorDFS(raizDaArvore);

    cout << campeao->time;

    liberarMemoria(raizDaArvore);
}

Copadomunco* encontrarVencedorDFS(Copadomunco* partida){

    if(partida == NULL){
        return NULL;
    }

    if(partida->left == NULL && partida->right == NULL){
        return partida;
    }

    Copadomunco* vencedorEsquerda = encontrarVencedorDFS(partida->left);
    Copadomunco* vencedorDireita = encontrarVencedorDFS(partida->right);

    if(vencedorEsquerda->data > vencedorDireita->data){
        return vencedorEsquerda;
    } else {
        return vencedorDireita;
    }

}

void liberarMemoria(Copadomunco* no) {
    if (no == NULL) {
        return;
    }
    liberarMemoria(no->left);
    liberarMemoria(no->right);
    delete no;
}