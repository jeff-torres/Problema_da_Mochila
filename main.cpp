#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
using namespace std;
struct mochila{
    float pesoAtual;
    float capacidade;
};
struct elemento{
    float peso;
    float valor;
    float custoBeneficio;
};

void bubbleSortMenorPeso(elemento n[], int tamanho){
    elemento aux;
    for(int i=0; i<tamanho; i++){
        for(int j=1; j<tamanho-i; j++){
            if(n[j].peso < n[j-1].peso){
                aux = n[j];
                n[j] = n[j-1];
                n[j-1] = aux;
                }
        }
    }
}

void bubbleSortMaiorValor(elemento n[], int tamanho){
    elemento aux;
    for(int i=0; i<tamanho; i++){
        for(int j=1; j<tamanho-i; j++){
            if(n[j].valor > n[j-1].valor){
                aux = n[j];
                n[j] = n[j-1];
                n[j-1] = aux;
                }
        }
    }
}

void bubbleSortMaiorCustoBeneficio(elemento n[], int tamanho){
    elemento aux;
    for(int i=0; i<tamanho; i++){
        for(int j=1; j<tamanho-i; j++){
            if(n[j].custoBeneficio > n[j-1].custoBeneficio){
                aux = n[j];
                n[j] = n[j-1];
                n[j-1] = aux;
                }
        }

    }
}
void menorPeso(elemento itens[], mochila &minhaMochila, float capacidadeMochila,int numeroItens){

    bubbleSortMenorPeso(itens, numeroItens);
    elemento itensSelecionados[numeroItens];

    int cont=0;
    float totalValor=0, totalCustoBeneficio=0;
    for(int i=0; i < numeroItens; i++){
        if(itens[i].peso + minhaMochila.pesoAtual <= capacidadeMochila){
            minhaMochila.pesoAtual += itens[i].peso;
            totalValor+=itens[i].valor;
            totalCustoBeneficio+=itens[i].custoBeneficio;
            itensSelecionados[cont] = itens[i];
            cont++;
        }
    }
    cout << "\nAtraves do algoritmo guloso -** Menor Peso **- temos os segintes resultados: ";
    cout << "\n\nDa mochila com capacidade -- " << minhaMochila.capacidade << " -- foram preenchidos -- "
    << minhaMochila.pesoAtual << " -- pesos.";
    cout << "\n\nOs itens selecionados foram:\n\n";

    for(int z=0; z<cont; z++){
        cout << "O item com peso " << itensSelecionados[z].peso << ", valor "
        << itensSelecionados[z].valor << " e custo benefício " << itensSelecionados[z].custoBeneficio << endl;
    }
    cout << "\n\nNumero de itens selecionados: " << cont;
    cout << "\nTotal de peso: " << minhaMochila.pesoAtual;
    cout << "\nTotal de valor: " << totalValor;
    cout << "\nTotal de custo benefífio: " << totalCustoBeneficio;
    cout << "\nPeso não preenchido: " << minhaMochila.capacidade - minhaMochila.pesoAtual << endl;
    minhaMochila.pesoAtual=0;
}

void maiorValor(elemento itens[], mochila &minhaMochila, float capacidadeMochila,int numeroItens){

    bubbleSortMaiorValor(itens, numeroItens);
    elemento itensSelecionados[numeroItens];

    int cont=0;
    float totalValor=0, totalCustoBeneficio=0;
    for(int i=0; i < numeroItens; i++){
        if(itens[i].peso + minhaMochila.pesoAtual <= capacidadeMochila){
            minhaMochila.pesoAtual += itens[i].peso;
            totalValor+=itens[i].valor;
            totalCustoBeneficio+=itens[i].custoBeneficio;
            itensSelecionados[cont] = itens[i];
            cont++;
        }
    }
    cout << "\nAtraves do algoritmo guloso -** Maior Valor **- temos os segintes resultados: ";
    cout << "\n\nDa mochila com capacidade -- " << minhaMochila.capacidade << " -- foram preenchidos -- "
    << minhaMochila.pesoAtual << " -- pesos.";
    cout << "\n\nOs itens selecionados foram:\n\n";

    for(int z=0; z<cont; z++){
        cout << "O item com peso " << itensSelecionados[z].peso << ", valor "
        << itensSelecionados[z].valor << " e custo benefício " << itensSelecionados[z].custoBeneficio << endl;
    }
    cout << "\n\nNumero de itens selecionados: " << cont;
    cout << "\nTotal de peso: " << minhaMochila.pesoAtual;
    cout << "\nTotal de valor: " << totalValor;
    cout << "\nTotal de custo benefífio: " << totalCustoBeneficio;
    cout << "\nPeso não preenchido: " << minhaMochila.capacidade - minhaMochila.pesoAtual << endl;
   minhaMochila.pesoAtual=0;
}
void maiorCustoBeneficio(elemento itens[], mochila &minhaMochila, float capacidadeMochila,int numeroItens){

    bubbleSortMaiorCustoBeneficio(itens, numeroItens);
    elemento itensSelecionados[numeroItens];

    int cont=0;
    float totalValor=0, totalCustoBeneficio=0;
    for(int i=0; i < numeroItens; i++){
        if(itens[i].peso + minhaMochila.pesoAtual <= capacidadeMochila){
            minhaMochila.pesoAtual += itens[i].peso;
            totalValor+=itens[i].valor;
            totalCustoBeneficio+=itens[i].custoBeneficio;
            itensSelecionados[cont] = itens[i];
            cont++;
        }
    }
    cout << "\nAtraves do algoritmo guloso -** Maior Custo Benefício **- temos os segintes resultados: ";
    cout << "\n\nDa mochila com capacidade -- " << minhaMochila.capacidade << " -- foram preenchidos -- "
    << minhaMochila.pesoAtual << " -- pesos.";
    cout << "\n\nOs itens selecionados foram:\n\n";

    for(int z=0; z<cont; z++){
        cout << "O item com peso " << itensSelecionados[z].peso << ", valor "
        << itensSelecionados[z].valor << " e custo benefício " << itensSelecionados[z].custoBeneficio << endl;
    }
    cout << "\n\nNumero de itens selecionados: " << cont;
    cout << "\nTotal de peso: " << minhaMochila.pesoAtual;
    cout << "\nTotal de valor: " << totalValor;
    cout << "\nTotal de custo benefífio: " << totalCustoBeneficio;
    cout << "\nPeso não preenchido: " << minhaMochila.capacidade - minhaMochila.pesoAtual << endl;
    minhaMochila.pesoAtual=0;
}

int main()
{   setlocale(LC_ALL, "");

    string arquivos[10] = {{"f1_l-d_kp_10_269"},{"f2_l-d_kp_20_878"},
                           {"f3_l-d_kp_4_20"},  {"f4_l-d_kp_4_11"},
                           {"f5_l-d_kp_15_375"},{"f6_l-d_kp_10_60"},
                           {"f7_l-d_kp_7_50"},  {"f8_l-d_kp_23_10000"},
                           {"f9_l-d_kp_5_80"},  {"f10_l-d_kp_20_879"}};

    menu:
    system("cls");

    cout << "Selecione um arquivo: ";
    cout << "\n\n- 1\n- 2\n- 3\n- 4\n- 5\n- 6\n- 7\n- 8\n- 9\n- 10\n";
    cout << "\nSua escolha: ";
    int escolhaMenu;
    cin >> escolhaMenu;
    if(escolhaMenu < 1 || escolhaMenu > 10){
        cout << "\n\nEscolha incorreta!!!\n\n";
        system("pause");
        goto menu;
    }
    system("cls");

    int numeroDeItens;
    float capacidadeMochila;
    ifstream arqEntrada;
    arqEntrada.open(arquivos[escolhaMenu-1].c_str());
    arqEntrada >> numeroDeItens >> capacidadeMochila;
    elemento itens[numeroDeItens];
    mochila minhaMochila;
    minhaMochila.capacidade = capacidadeMochila;
    minhaMochila.pesoAtual = 0;
    for(int j=0; j<numeroDeItens; j++){
        arqEntrada >> itens[j].peso;
        arqEntrada >> itens[j].valor;
        itens[j].custoBeneficio = itens[j].valor/itens[j].peso;
    }
    arqEntrada.close();

    cout << "Arquivo escolhido: " << escolhaMenu << " -> " << arquivos[escolhaMenu-1];
    cout << "\n\nEste arquivo contém " << numeroDeItens << " itens e a mochila contém "
    << capacidadeMochila << " de capacidade." << endl;

    menorPeso(itens, minhaMochila,capacidadeMochila,numeroDeItens);

    cout << "\n\n##########################################################################\n\n";

    maiorValor(itens, minhaMochila,capacidadeMochila,numeroDeItens);

    cout << "\n\n##########################################################################\n\n";

    maiorCustoBeneficio(itens, minhaMochila,capacidadeMochila,numeroDeItens);

    cout << "\n\nDeseja retornar ao MENU? [1 p/ sim]: ";
    int retornaMenu;
    cin >> retornaMenu;
    if(retornaMenu == 1)
        goto menu;

    return 0;
}
