#include <iostream>
#include <stdlib.h>

using namespace std;

	int main () {
		
		char linha_aux, coluna_aux, linha_atk, coluna_atk, campo_p1[6][6], camponv1_p1[6][6], camponv2_p1[6][6], camponv1_p2[6][6], camponv2_p2[6][6], campo_p2[6][6], campo_atkp1[6][6], campo_atkp2[6][6];
		bool acerto;
		int linha, coluna, i , j, eixo_x[1][6], eixo_y[6][1], acerto_p1 = 0, acerto_p2 = 0, erro_p1 = 0, erro_p2 = 0;
		
		cout << "Batalha Naval" << "\n\n";
	
		cout << "      #######      " << "\n";
		cout << "   #############   " << "\n";
		cout << "  ###############  " << "\n";
		cout << "  ###############  " << "\n";
		cout << "  ##     #     ##  " << "\n";
		cout << "  ##     #     ##  " << "\n";
		cout << "  ###############  " << "\n";
		cout << "  ###############  " << "\n";
		cout << "   #############   " << "\n";
		cout << "   ###  ###  ###   " << "\n";
		cout << "##               ##" << "\n";
		cout << "#####         #####" << "\n";
		cout << "    ###########    " << "\n";
		cout << "####           ####" << "\n";
		cout << "##               ##" << "\n";
		cout << "\n\n\n";
		
		system("pause");
		system("cls");
		
		cout << "Batalha Naval" << "\n\n";
		
		for(i = 0; i < 6; i++){
			for(j = 0; j < 6; j++){
				campo_p1[i][j] = '-';
				camponv1_p1[i][j] = '-';
				camponv2_p1[i][j] = '-';
				camponv1_p2[i][j] = '-';
				camponv2_p2[i][j] = '-';	
			}
		}
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p1[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		//BLOCO P/ COORDENADA NAVIO 1 
		cout << "\n"<< "Player 1";
		cout << "\n\n" << "Determine a coordenada do navio 1" << "\n";
		
		do {
			do{
				cout << "\n" << "Escolha a linha (A a F): ";
				cin >> linha_aux;
				switch (linha_aux){
						case 'A':  
						case 'a':
							linha = 0;
							break;	
						case 'B':
						case 'b':
							linha = 1;
							break;
						case 'C':
						case 'c':	
							linha = 2;
							break;
						case 'D':
						case 'd':	
							linha = 3;
							break;
						case 'E':
						case 'e':
							linha = 4;
							break;
						case 'F':
						case 'f':	
							linha = 5;
							break;
						default:
							cout << "\n"<< "Valor invalido" << "\n";
							linha =10;
					}
				}while(linha < 0);
		}while (linha > 5 );
			
		do{
			do{
				cout << "\n" << "Escolha a coluna (1 a 6): ";
				cin >> coluna_aux;
				switch (coluna_aux){
						case '1':
							coluna = 0;
							break;
						case '2':
							coluna = 1;
							break;
						case '3':
							coluna = 2;
							break;
						case '4':
							coluna = 3;
							break;
						case '5':
							coluna = 4;
							break;
						case '6':
							coluna = 5;
							break;	
						default:
							cout << "\n" << "Valor invalido" << "\n";
							coluna = 10;
					}
			}while( coluna < 0);
		}while ( coluna > 5);
			
		
		campo_p1[linha][coluna] = '#';
		camponv1_p1[linha][coluna] = '#';
		//navio1_p1[0] = campo[linha][coluna];
		system("cls");
		
	//TITULO	
		cout << "Batalha Naval" << "\n\n";
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO COM NAVIO 1
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
			
				cout << campo_p1[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		
			//BLOCO P/ COORDENADA NAVIO 2 
		cout << "\n" << "Player 1" << "\n";	
		cout << "\n" << "Determine a coordenada do navio 2" << "\n";
		
		do {
			do{
				cout << "\n" << "Escolha a linha (A a F): ";
				cin >> linha_aux;
				switch (linha_aux){
						case 'A':  
						case 'a':
							linha = 0;
							break;	
						case 'B':
						case 'b':
							linha = 1;
							break;
						case 'C':
						case 'c':	
							linha = 2;
							break;
						case 'D':
						case 'd':	
							linha = 3;
							break;
						case 'E':
						case 'e':
							linha = 4;
							break;
						case 'F':
						case 'f':	
							linha = 5;
							break;
						default:
							cout << "\n"<< "Valor invalido" << "\n";
							linha =10;
					}
				}while(linha < 0);
		}while (linha > 5 );
			
		do{
			do{
				cout << "\n" << "Escolha a coluna (1 a 6): ";
				cin >> coluna_aux;
				switch (coluna_aux){
						case '1':
							coluna = 0;
							break;
						case '2':
							coluna = 1;
							break;
						case '3':
							coluna = 2;
							break;
						case '4':
							coluna = 3;
							break;
						case '5':
							coluna = 4;
							break;
						case '6':
							coluna = 5;
							break;	
						default:
							cout << "\n" << "Valor invalido" << "\n";
							coluna = 10;
					}
			}while( coluna < 0);
		}while ( coluna > 5);
			
			
		
		campo_p1[linha][coluna] = '#';
		camponv2_p1[linha][coluna] = '#';
		//navio2_p1[0] = campo[linha][coluna];
		
		system("cls");
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO COM NAVIO 2
		cout << "Batalha Naval" << "\n\n";
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p1[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		cout << "\n" << "Navios do Player 1 posicionados" << "\n\n";
		
		system("pause");
		cout << "Aperte ENTER para confirmar" << "\n";
		system("cls");
		
		//Player 2
		cout << "Batalha Naval"  << "\n\n";
		
		for(i = 0; i < 6; i++){
			for(j = 0; j < 6; j++){
				campo_p2[i][j] = '-';	
			}
		}
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p2[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		//BLOCO P/ COORDENADA NAVIO 1 
		cout << "\n"<< "Player 2";
		cout << "\n\n" << "Determine a coordenada do navio 1" << "\n";
		
		do {
			do{
				cout << "\n" << "Escolha a linha (A a F): ";
				cin >> linha_aux;
				switch (linha_aux){
						case 'A':  
						case 'a':
							linha = 0;
							break;	
						case 'B':
						case 'b':
							linha = 1;
							break;
						case 'C':
						case 'c':	
							linha = 2;
							break;
						case 'D':
						case 'd':	
							linha = 3;
							break;
						case 'E':
						case 'e':
							linha = 4;
							break;
						case 'F':
						case 'f':	
							linha = 5;
							break;
						default:
							cout << "\n"<< "Valor invalido" << "\n";
							linha =10;
					}
				}while(linha < 0);
		}while (linha > 5 );
			
		do{
			do{
				cout << "\n" << "Escolha a coluna (1 a 6): ";
				cin >> coluna_aux;
				switch (coluna_aux){
						case '1':
							coluna = 0;
							break;
						case '2':
							coluna = 1;
							break;
						case '3':
							coluna = 2;
							break;
						case '4':
							coluna = 3;
							break;
						case '5':
							coluna = 4;
							break;
						case '6':
							coluna = 5;
							break;	
						default:
							cout << "\n" << "Valor invalido" << "\n";
							coluna = 10;
					}
			}while( coluna < 0);
		}while ( coluna > 5);
			
			
		
		campo_p2[linha][coluna] = '#';
		camponv1_p2[linha][coluna] = '#';
		//navio1_p2[0] = campo[linha][coluna];
		system("cls");
		
	//PLAYER 2	
	//TITULO	
		cout << "Batalha Naval"  << "\n\n";
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO COM NAVIO 1
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p2[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		cout << "\n" << "Player 2" << "\n";
		
		
		//BLOCO P/ COORDENADA NAVIO 2 
		cout << "\n\n" << "Determine a coordenada do navio 2" << "\n";
		do {
			do{
				cout << "\n" << "Escolha a linha (A a F): ";
				cin >> linha_aux;
				switch (linha_aux){
						case 'A':  
						case 'a':
							linha = 0;
							break;	
						case 'B':
						case 'b':
							linha = 1;
							break;
						case 'C':
						case 'c':	
							linha = 2;
							break;
						case 'D':
						case 'd':	
							linha = 3;
							break;
						case 'E':
						case 'e':
							linha = 4;
							break;
						case 'F':
						case 'f':	
							linha = 5;
							break;
						default:
							cout << "\n"<< "Valor invalido" << "\n";
							linha =10;
					}
				}while(linha < 0);
		}while (linha > 5 );
			
		do{
			do{
				cout << "\n" << "Escolha a coluna (1 a 6): ";
				cin >> coluna_aux;
				switch (coluna_aux){
						case '1':
							coluna = 0;
							break;
						case '2':
							coluna = 1;
							break;
						case '3':
							coluna = 2;
							break;
						case '4':
							coluna = 3;
							break;
						case '5':
							coluna = 4;
							break;
						case '6':
							coluna = 5;
							break;	
						default:
							cout << "\n" << "Valor invalido" << "\n";
							coluna = 10;
					}
			}while( coluna < 0);
		}while ( coluna > 5);
		
		campo_p2[linha][coluna] = '#';
		camponv2_p2[linha][coluna] = '#';
		//navio2_p2[0] = campo[linha][coluna];
		
		system("cls");
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO COM NAVIO 2
		cout << "Batalha Naval" << "\n\n";
		
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p2[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		cout << "\n" << "Navios do Player 2 posicionados" << "\n\n";
		system("pause");
		system("cls");
		
		
		cout << "Chegou a hora da grande batalha. Que venca o melhor comandante!" << "\n\n";
		system("pause");
		system("cls");
		
			for(i = 0; i < 6; i++){
			for(j = 0; j < 6; j++){
				campo_p1[i][j] = '-';
				campo_p2[i][j] = '-';   //campo_p2 e p1 é onde será marcado fixamente os ataques
				campo_atkp2[i][j] = '-';
				campo_atkp1[i][j] = '-';	
			}
		}
		
		//jogo para player1
	while(!(acerto_p2 == 2 || acerto_p1 == 2)) {                             //WHILE

		cout << "Batalha Naval " << "\n\n";
		
		// while tem que ser a patrir daqui se não o campo inicializara repetidamende ao voltar no laço
	//BLOCO DE IMPRESSÃO DO TABULEIRO
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p2[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		cout << "\n" << "Player 1 faca seu ataque!" << "\n";
		cout << "Erros: " << erro_p1 << "  Acertos: " << acerto_p1 << "\n\n";
		
		//BLOCO P/ COORDENADA JOGADA PLAYER1  
		cout << "\n" << "Determine a coordenada para realizar o ataque" << "\n";
		cout << "Escolha a linha: ";
		cin >> linha_aux;
		switch (linha_aux){
				case 'A':  
				case 'a':
					linha_atk = 0;
					break;
				case 'B':
				case 'b':
					linha_atk = 1;
					break;
				case 'C':
				case 'c':	
					linha_atk = 2;
					break;
				case 'D':
				case 'd':	
					linha_atk = 3;
					break;
				case 'E':
				case 'e':
					linha_atk = 4;
					break;
				case 'F':
				case 'f':	
					linha_atk = 5;
					break;
				default:
					cout << "\n"<< "Valor invalido" << "\n";
		}
			
		cout << "Escolha a coluna: ";
		cin >> coluna_aux;
		switch (coluna_aux){
				case '1':
					coluna_atk = 0;
					break;
				case '2':
					coluna_atk = 1;
					break;
				case '3':
					coluna_atk = 2;
					break;
				case '4':
					coluna_atk = 3;
					break;
				case '5':
					coluna_atk = 4;
					break;
				case '6':
					coluna_atk = 5;
					break;
				default:
					cout << "\n" << "Valor invalido" << "\n";
		}
		
		campo_atkp2[linha_atk][coluna_atk] = '#';
			
		if(campo_atkp2[linha_atk][coluna_atk] == camponv1_p2[linha_atk][coluna_atk]){
			campo_p2[linha_atk][coluna_atk] = 'X';
			
		}
		else if(campo_atkp2[linha_atk][coluna_atk] == camponv2_p2[linha_atk][coluna_atk]){
			campo_p2[linha_atk][coluna_atk] = 'X';
		}
		else{
			campo_p2[linha_atk][coluna_atk] = 'O';
		}
		
		system("cls");
		
		//BLOCO DE IMPRESSÃO DO TABULEIRO ATAQUE 
		
			cout << "Batalha Naval " << "\n\n";
			
			for(i = 0; i < 1; i++){
				cout << "  ";
				for(j = 0; j < 6; j++){
					eixo_x[i][j]= ++j ;
					cout << eixo_x[i][j] << " ";
					--j;	
				}
			}
			cout << "\n";
			
			for(i = 0; i < 6; i++){
				eixo_y[i][j]= ++i;
				
				switch (eixo_y[i][j]){
					case 1:
						cout << "A" << " ";
						break;
					case 2:
						cout << "B" << " ";
						break;
					case 3:
						cout << "C" << " ";
						break;
					case 4:
						cout << "D" << " ";
						break;
					case 5:
						cout << "E" << " ";
						break;
					case 6:
						cout << "F" << " ";
						break;
				}
	
				--i;
				
				for(j = 0; j < 6; j++){
					cout << campo_p2[i][j] << " ";
					
				}
				cout << "\n";
			}
			
			cout << "\n" << "Player 1" << "\n";
			
			if(campo_p2[linha_atk][coluna_atk] == 'X'){
				++acerto_p1;
				cout << "Erros: " << erro_p1 << "  Acertos: " << acerto_p1 << "\n";
				cout << "\n" << "Voce acertou o navio inimigo" << "\n\n";
			}
			else{
				++erro_p1;
				cout << "Erros: " << erro_p1 << "  Acertos: " << acerto_p1 << "\n";
				cout << "\n" << "Voce errou seu alvo" << "\n\n";
			}
			system("pause");
			system("cls");
			
			if(acerto_p1 == 2){
				break;
			}
			
	//////////////////////////////////////////////////////////////////////////////////////
			cout << "Batalha Naval " << "\n\n";
		
		
	//BLOCO DE IMPRESSÃO DO TABULEIRO
		for(i = 0; i < 1; i++){
			cout << "  ";
			for(j = 0; j < 6; j++){
				eixo_x[i][j]= ++j ;
				cout << eixo_x[i][j] << " ";
				--j;	
			}
		}
		cout << "\n";
		
		for(i = 0; i < 6; i++){
			eixo_y[i][j]= ++i;
			
			switch (eixo_y[i][j]){
				case 1:
					cout << "A" << " ";
					break;
				case 2:
					cout << "B" << " ";
					break;
				case 3:
					cout << "C" << " ";
					break;
				case 4:
					cout << "D" << " ";
					break;
				case 5:
					cout << "E" << " ";
					break;
				case 6:
					cout << "F" << " ";
					break;
			}

			--i;
			
			for(j = 0; j < 6; j++){
				cout << campo_p1[i][j] << " ";
				
			}
			cout << "\n";
		}
		
		cout << "\n" << "Player 2 faca seu ataque!" << "\n";
		cout << "Erros: " << erro_p2 << "  Acertos: " << acerto_p2 << "\n\n";
		
		//BLOCO P/ COORDENADA JOGADA PLAYER2  
			cout << "\n" << "Determine a coordenada para realizar o ataque" << "\n";
			cout << "Escolha a linha: ";
			cin >> linha_aux;
			switch (linha_aux){
				case 'A':  
				case 'a':
					linha_atk = 0;
					break;
				case 'B':
				case 'b':
					linha_atk = 1;
					break;
				case 'C':
				case 'c':	
					linha_atk = 2;
					break;
				case 'D':
				case 'd':	
					linha_atk = 3;
					break;
				case 'E':
				case 'e':
					linha_atk = 4;
					break;
				case 'F':
				case 'f':	
					linha_atk = 5;
					break;
				default:
					cout << "\n"<< "Valor invalido" << "\n";
				}
			
			cout << "Escolha a coluna: ";
			cin >> coluna_aux;
			switch (coluna_aux){
				case '1':
					coluna_atk = 0;
					break;
				case '2':
					coluna_atk = 1;
					break;
				case '3':
					coluna_atk = 2;
					break;
				case '4':
					coluna_atk = 3;
					break;
				case '5':
					coluna_atk = 4;
					break;
				case '6':
					coluna_atk = 5;
					break;
				default:
					cout << "\n" << "Valor invalido" << "\n";
			}
		
			campo_atkp1[linha_atk][coluna_atk] = '#';
			
			if(campo_atkp1[linha_atk][coluna_atk] == camponv1_p1[linha_atk][coluna_atk]){
				campo_p1[linha_atk][coluna_atk] = 'X';
			}
			else if(campo_atkp1[linha_atk][coluna_atk] == camponv2_p1[linha_atk][coluna_atk]){
				campo_p1[linha_atk][coluna_atk] = 'X';
			}
			else{
				campo_p1[linha_atk][coluna_atk] = 'O';
			}
		
			system("cls");
		
		//BLOCO DE IMPRESSÃO DO TABULEIRO ATAQUE PLAYER2
		
			cout << "Batalha Naval " << "\n\n";
			
			for(i = 0; i < 1; i++){
				cout << "  ";
				for(j = 0; j < 6; j++){
					eixo_x[i][j]= ++j ;
					cout << eixo_x[i][j] << " ";
					--j;	
				}
			}
			cout << "\n";
			
			for(i = 0; i < 6; i++){
				eixo_y[i][j]= ++i;
				
				switch (eixo_y[i][j]){
					case 1:
						cout << "A" << " ";
						break;
					case 2:
						cout << "B" << " ";
						break;
					case 3:
						cout << "C" << " ";
						break;
					case 4:
						cout << "D" << " ";
						break;
					case 5:
						cout << "E" << " ";
						break;
					case 6:
						cout << "F" << " ";
						break;
				}
	
				--i;
				
				for(j = 0; j < 6; j++){
					cout << campo_p1[i][j] << " ";
					
				}
				cout << "\n";
			}
			
			cout << "\n" << "Player 2" << "\n";
			
			if(campo_p1[linha_atk][coluna_atk] == 'X'){
				++acerto_p2;
				cout << "Erros: " << erro_p2 << "  Acertos: " << acerto_p2 << "\n";
				cout << "\n" << "Voce acertou o navio inimigo!" << "\n\n";
			}
			else{
				++erro_p2;
				cout << "Erros: " << erro_p2 << "  Acertos: " << acerto_p2 << "\n";
				cout << "\n" << "Voce errou seu alvo!" << "\n\n";
			}
			system("pause");
			system("cls");
			
		}  //FIM WHILE
		//system("cls");*/
		
		cout << "Batalha Naval" << "\n";
		
		if(acerto_p1 == 2){
			cout << "\n" << "Player 1 venceu seu oponente!" << "\n";
		}
		else if(acerto_p2 == 2){
			cout << "\n" << "Player 2 venceu seu oponente!" << "\n";
		}
		
		cout << "\n\n";
		cout << "   ##########  " << "\n";
		cout << " ###        ###" << "\n";
		cout << " # #        # #" << "\n";
		cout << "  ##        ## " << "\n";
		cout << "    #      #   " << "\n";
		cout << "     #    #    " << "\n";
		cout << "      ####     " << "\n";
		cout << "       ##      " << "\n";
		cout << "      #  #     " << "\n";
		cout << "    ########   " << "\n";
		
	}
	
	
	
	
