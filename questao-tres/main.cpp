#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int p1, p2, p3, p4, op;
	
	cout << "***********************************************************************" << endl;
	cout << " 1 - Grau esf�rico olho esquerdo grau cilindrico olho direito" << endl;
	cout << " 2 - Grau esf�rico olho direito grau esf�rico olho esquerdo" << endl;
	cout << " 3 - Grau cilindrico olho direito grau esf�rico olho esquerdo" << endl;
	cout << " 4 - Grau cilindrico olho direito grau esf�rico olho direito" << endl;
	cout << " 5 - Grau cilindrico olho direito e esquerdo" << endl;
	cout << " 6 - Grau esf�rico olho direito e esquerdo" << endl;
	cout << " 7 - Sair" << endl;
	cout << "***********************************************************************" << endl;
	cout << "Digite uma op��o: " << endl;
	cin >> op;
	
	if(op != 0){
	
		switch(op) {
		  case 1:
		    {
		    	cout << "Grau esf�rico";
			}
		    break;
		  case 2:
		  	{
		  		cout << "Grau cilindrico";
			}
		    break;
		  case 3:
		  	{
		  		cout << "Sair";
			}
		    break;  
		  default:
		    cout << "wtf";
		}
	}
	return 0;
}
