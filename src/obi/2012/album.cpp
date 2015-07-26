/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel2/2012f2p2_album
*/

#include <cstdio>

using namespace std;

int main(){
    
    // VARS
    
    int x, // largura e
        y; // altura da página.
    
    int l1, // largura e 
        h1; // altura da primeira foto
    
    int l2, // largura e
        h2; // altura da segunda foto
    
    
    // INPUTS
    
    scanf("%d %d", &x, &y);
    scanf("%d %d", &l1, &h1);
    scanf("%d %d", &l2, &h2);
    
    
    // PROCEDIMENTOS
    
    if ((l1 <= x && l2 <= x) // sentido vertical e...
        && (  // alguma das rotações é possível
            (h1 + h2 <= y)
            || (h1 + l2 <= y)
            || (l1 + h2 <= y)
            || (l1 + l2 <= y)
        )){
        printf("S\n");
    } else if((h1 <= y && h2 <= y) // sentido horizontal e...
        && (  // alguma das rotações é possível
            (h1 + h2 <= x)
            || (h1 + l2 <= x)
            || (l1 + h2 <= x)
            || (l1 + l2 <= x)
        )){
        printf("S\n");
        
    } else{ // nenhum sentido ou rotação possível
        printf("N\n");
    }
    
    return 0;
}
