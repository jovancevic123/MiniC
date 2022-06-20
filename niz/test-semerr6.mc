//OPIS: type missmatch za parametar funkcije tipa pokazivac na niz

int func(unsigned* niz){
    int state;
    state = 1;
    niz[0] = 1;
    return state;
}

int main() {
    int x[10];    
}
