//OPIS: koriscenje stek naredbi u kombinaciji sa nizovima
//RETURN: 2
int main(){
	int a;
    int b = {1 , 2, 3};
    stack::int stek[5];

    a = 15;
    stek.push(10);
    stek.push(b[1]);
    
	
	return stek.pop();
}
