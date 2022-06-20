//OPIS: prebacivajne vrednosti jednog niza u drugi
//RETURN: 7
int main() {
    
    int x;
    int niz1[5];
    int niz2 = { 6, 7, 8, 9, 10};
    
    niz1[0] = niz2[0];
    niz1[1] = niz2[1];
    
    return niz1[1];
}
