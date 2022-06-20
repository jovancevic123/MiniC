//OPIS: koriscenje stek naredbi u kombinaciji sa nizovima
//RETURN: 10
int main(){
	int a;
    int b[5];
    stack::int stek[5];

    a = 15;
    stek.push(10);
    stek.push(a);
    
    b[0] = stek.pop();
    b[1] = stek.pop();
    
	
	return b[1];
}
