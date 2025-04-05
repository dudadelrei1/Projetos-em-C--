#include <stdio.h>
#include <stdlib.h>


struct Inimigo {
    int id;
    int x;
    int y;
    bool vivo;

    //� necess�rio ter um construtor sem par�metros para criar o vetor na fun��o principal
    Inimigo(){
        id = -1;
        x = -1;
        y = -1;
        vivo = false;
    }

    //TODO: Crie um construtor que inicializa um inimigo usando os par�metros abaixo.
    Inimigo(int ID, int X, int Y, bool VIVO){
        this->x = X;
        this->y = Y;
        this->id = ID;
        this->vivo = true;

    }

    //TODO: M�todo que muda a o status do inimigo de vivo para morto caso seja acertado pelo lazer na posi��o (X,Y).
    void foi_acertado(int X, int Y){
        if(x == X && y == Y){
            vivo = false;
        }

}};

int main(){

    int N; //Quantidade de Inimigos
    scanf("%d", &N);

    Inimigo inimigo[N];

    for(int id=0;id<N;id++){
        int x, y;
        scanf("%d %d", &x, &y);

        inimigo[id] = Inimigo(id, x, y, true);
    }

    int M; //Quantidade de lasers
    scanf("%d", &M);

    for(int i=0;i<M;i++){
        int x, y;
        scanf("%d %d", &x, &y);

        for(int id=0;id<N;id++){
            inimigo[id].foi_acertado(x,y); // mata o inimigo.
        }
    }
for (int id = 0; id<N; id++){
    if(inimigo[id].vivo == false){
        printf("%d\n", inimigo[id].id);//TODO: Crie um la�o for que imprime o id de todos os inimigos que foram acertados.

    }

}
}


