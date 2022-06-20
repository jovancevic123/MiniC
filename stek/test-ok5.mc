//OPIS: koriscenje stek naredbi u kombinaciji sa nizovima
//RETURN: 666
int main(){
    int b[5];
    stack::int stek[5];
    int x = {333, 33, 666};

    stek.push(x[0]);
    stek.push(x[2]);
    
    b[0] = stek.pop();
    b[1] = stek.pop();
    
	
	return b[0];
}
