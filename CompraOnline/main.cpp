#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int e1, c2, e3, c4, op;
	
	cout << "***********************************************************************" << endl;
	cout << " 1 - Grau esf�rico olho esquerdo grau cilindrico olho direito" << endl;
	cout << " 2 - Grau esf�rico olho direito grau cilindrico olho esquerdo" << endl;
	cout << " 3 - Grau cilindrico olho direito e esquerdo" << endl;
	cout << " 4 - Grau esf�rico olho direito e esquerdo" << endl;
	cout << " 5 - Sair" << endl;
	cout << "***********************************************************************" << endl;
	cout << "Digite uma op��o: " << endl;
	cin >> op;
	
	if(op != 0 && op <=5){
	
		switch(op) {
		  case 1:
		    {
		    	cout << "Digite o grau do seu olho esquerdo: ";
		    	cin >> e1;
		        cout << "Digite o grau do seu direito: ";
		    	cin >> c2;
		    	if(c2 == -2)
		    	{

		    	    if(e1>= -10 && e1<= -3)
		    	    {
		    	        cout << "Lente Prime dispon�vel!!";
		    	    }
		    	 
		    	}
		    	
		    	if(e1>= -15 && e1<= 0)
				{
		    	    if(c2 == -5)
					{
		    	        cout << "Lente Vision dispon�vel!!";
		    	    }
		    	}
		
			}
		    break;
		  case 2:
		  	{
		  		cout << "Digite o grau do seu olho esquerdo: ";
		    	cin >> c2;
		        cout << "Digite o grau do seu direito: ";
		    	cin >> e1;
		    	if(e1 = -2)
		    	{
		    	    if(c2 >=-10 && c2<=-3)
		    	    {
		    	        cout << "Lente Prime dispon�vel!!" << endl;
		    	    }
		    	 
		    	}
		    	
		    	if(e1>=-15 && e1<=0)
				{
		    	    if(c2 ==-5)
					{
		    	        cout << "Lente Vision dispon�vel!!" << endl;
		    	    }
		    	}
			}
		    break;
		  case 3:
		  	{
		  		cout << "Digite o grau do seu olho esquerdo: ";
		    	cin >> c4;
		        cout << "Digite o grau do seu direito: ";
		    	cin >> c2;
		    	
		    	cout << "As lentes para o seu tipo de grau s� estar�o dispon�veis futuramente!";
		    	
			}
		    break;
		   case 4:
		    {
		  		cout << "Digite o grau do seu olho esquerdo: ";
		    	cin >> e1;
		        cout << "Digite o grau do seu direito: ";
		    	cin >> e3;
		    	
		    	if(e1 >=-12 && e1<=-3)
		    	{
		    	    cout << "Lente Prime dispon�vel!!";
		    	}
		    	
		    	if(e3 >=-12 && e3<=-3)
		    	{
		    	    cout << "Lente Prime dispon�vel!!";
		    	}
		    	
		    }
		    break;
		  default:
		    cout << "Saindo...";
		}
	}else{
		cout << "Digite uma op��o entre 1 e 5";
	}
	return 0;
}
