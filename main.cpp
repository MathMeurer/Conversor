#include <iostream>  //library
#include <locale.h>
#include <stdlib.h>
#include <cmath>
#include <math.h>


using namespace std; //definir espa�o de nomes

int main (){  //Fun��o principal

int valor;

    setlocale (LC_ALL, "Portuguese"); //Coloca o idioma em portugu�s

    cout << "Conversor" <<endl; //Digita na tela conversor
    cout << "Digite 1: Decimal para Bin�rio" <<endl; //Digita a op��o "Digite 1: Decimal para Bin�rio"
    cout << "Digite 2: Bin�rio para Decimal" <<endl; // Digita a op��o "Digite 2: Bin�rio para Decimal"
    cout << "Digite 3: Fechar programa" <<endl; // Digita a op��o "Digite 3: Fechar programa"

      cin >> valor; //stream de entrada
    do {

        int decimal;//declara��o de vari�veis
        short binario[8];
        int bina, resultado, resto = 0;
        int digito[8];

          system ("clear||cls"); //Limpa a tela anterior

        if (valor == 1){  //condicional "se", o valor inserido for 1

            cout << "Voc� escolheu a op��o 1: Decimal para Bin�rio" <<endl; //Digita o resultado da escolha anterior
            cout << "Digite o valor para convers�o" <<endl; //Digita o valor para convers�o

                cin >> decimal;

            for (int i = 0; i < 8; i++) //Vai percorrer todo vetor de 0 a 8
                {
                binario[i] = decimal % 2; //Vetor binario guardado o resto da divisao por 2
                decimal /= 2; //divisao sem resto
                }

            cout << "Resultado em binario:" << endl; // digita o resultado

            for (int i = 7; i >= 0; i--)//Vai percorrer todo vetor de 8 a 0
                {
             cout << binario[i];// resultado da conversao de cada vetor
                }

          cout << "\n1:Refazer calculo"<< endl; //digita o menu de escolha
          cout << "2:Binario para decimal" << endl;
          cout << "3:Encerrar" << endl;

            cin >> valor; // digita opcao desejada

        }else{ //condicional "se n�o",

          if(valor == 2){ //condicional "se", o valor inserido for 2

                cout << "Voc� escolheu a op��o 2: Bin�rio para Decimal" <<endl; //Digita o resultado da escolha anterior
                cout << "Digite o valor para convers�o" <<endl; //Digita o valor para convers�o

                  cin>> bina; //stream de entrada do valor da variavel x

                    for (int i = 0; i < 8; i++)//Vai percorrer vetor de 0 a 8
                        {
                      digito [i] = bina % 10; //atribui o resto da divis�o da variavel bina em digito de acordo com seu vetor
                      bina /=10; // Divis�o sem resto
                        }

                    for (int i = 7; i >= 0; i--)//Vai percorrer vetor de 8 a 0
                        {
                      resultado = (resto * 2) + digito[i]; // Atribui o valor a variavel, do valor do resto at� o valor do vetor adicionado anteriormente
                      resto= resultado; // resto � o resultado
                        }

                    cout << "Resultado em decimal:" << endl;
                    cout << resultado;// digita o resultado

                    cout << "\n1:Decimal para binario"<< endl; //digita o menu de escolha
                    cout << "2:Refazer calculo" << endl;
                    cout << "3:Encerrar" << endl;

                      cin >> valor; // digita opcao desejada


        }else{ //condicional "se n�o", o valor for diferente dos anteriores
                cout << "Obrigado!" <<endl; //Digita caso op��o n�o bata com as anteriores
                    } }


    }while (valor!=3); // finaliza o loop caso a escolha seja 3
                cout << "Obrigado!" <<endl; //Digita caso op��o n�o bata com as anteriores


return 0;
} //finaliza��o do programa
