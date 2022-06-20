//OPIS: koriscenje stek naredbi u kombinaciji sa promenljivama
//RETURN: 15
int main(){
	int a;
    int b;
    stack::int stek[5];

    a = 15;
    stek.push(10);
    stek.push(a);
    b = stek.pop();
	
	return b;
}
