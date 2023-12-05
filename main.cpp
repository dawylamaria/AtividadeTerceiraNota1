#include <iostream>

using namespace std;
struct NoArvore{
	int data;
	NoArvore *esquerda;
	NoArvore *direita;
};


void percorrerEmOrdem(NoArvore *raiz){
	if(raiz != NULL){
		percorrerEmOrdem(raiz -> esquerda);
		cout << raiz -> data << " ";
		percorrerEmOrdem(raiz -> direita);

	}
}
int main(int argc, char** argv) {
	
	NoArvore *raiz = new NoArvore;
    raiz -> data = 1;
    raiz -> esquerda = NULL;
    raiz -> direita = NULL;

    NoArvore* elementoDireita = new NoArvore;
    elementoDireita -> data = 2;
    elementoDireita -> esquerda = NULL;
    elementoDireita -> direita = NULL;
    
    raiz->direita = elementoDireita;
    
    NoArvore* elementoEsquerda = new NoArvore;
    elementoEsquerda->data = 3;
    elementoEsquerda->esquerda = NULL;
    elementoEsquerda->direita = NULL;

    elementoDireita->esquerda = elementoEsquerda;
    
    percorrerEmOrdem(raiz);
	
	
	return 0;
}
