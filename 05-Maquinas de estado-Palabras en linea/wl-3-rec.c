#define IN 1
#define OUT 0

void stateIN(int c, int nw, int state);
void stateOUT(int c, int nl, int state);

main(){
    int c, nl, nw, nc, state;
    state=OUT;
    nl=nw=nc=0;
    while ((c=getchar()) != EOF){
        ++nc;
        stateOUT(c,nl,state);
        stateIN(c,nw,state);
    }
    print("%d %d %d\n",nl,nw,nc);
}

void stateIN(int c, int nw, int state){
    (c=getchar()) != EOF;
    if(state==OUT){
        state=IN;
        ++nw;
    }
    stateIN(c,nw,state);
}

void stateOUT(int c, int nl, int state){
    (c=getchar()) != EOF;
    if(c=='\n'){
        ++nl;
    } // sin poner las llaves daba un error
    if(c==' '||c=='\n'||c=='\t'){
        state=OUT;
    }
    stateOUT(c,nl,state);
}
