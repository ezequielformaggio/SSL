#include <stdio.h>

/* Programa del libro KYR
#define IN 1
#define OUT 0

main(){
    int c, nl, nw, nc, state;
    state=OUT;
    nl=nw=nc=0;
    while ((c=getchar()) != EOF){
        ++nc;
        if(c=='\n')
            ++nl;
        if(c==' '||c=='\n'||c=='\t')
            state=OUT;
        else if(state==OUT){
            state=IN;
            ++nw;
        }
    }
    print("%d %d %d\n",nl,nw,nc);
}
*/

// Variacion con implementacion de enum y switch.

typedef int State;
enum s {IN=1,OUT=0};

main(){
    int c, nl, nw, nc;
    State s = OUT;
    nl=nw=nc=0;
    while ((c=getchar()) != EOF){
        ++nc;
        switch(c){
            case '\n':
                ++nl;
                s=OUT;
                break;
            case ' ': 
            case'\t':
                s=OUT;
                break;
            default:
                s=IN;
                ++nw;
                break;
        }

    print("%d %d %d\n",nl,nw,nc);
}