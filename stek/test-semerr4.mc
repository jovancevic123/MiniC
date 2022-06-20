//OPIS: dodela vrednosti sa steka promenljivoj drugog tipa
unsigned main(){
	unsigned a;

	stack::int stek[3];

    stek.push(1);
    stek.push(1);
    stek.push(1);
    a = stek.pop();
	
	return a;
}
