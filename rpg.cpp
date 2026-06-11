#include <iostream>
int main (){
//status do heroi
int vida = 100;
int ataque = 20;
int defesa = 40;

//status do montro
int vida2 = 80;
int ataque2 = 25;

    while(true){
int resposta;
//dialogo
std::cout << "\nolá heroi, apareceu um monstro na sua frente escolha o que fazer\n";
std::cout << "[1] atacar\n";
std::cout << "[2]esperar\n";
std::cout << "[3]defender\n";
std::cin >> resposta;
//checar se o jogador escolheu 1
if(resposta == 1)
{
    vida2 = vida2 - ataque;
    std::cout << "\na vida do monstro e " << vida2;
}
if(resposta == 2)
{
    vida = vida - ataque2;
    std::cout << "\nO NÃO, VOCÊ PERDEU VIDA, AGORA VOCÊ TEM " << vida;
}
if(resposta == 3)
{
    vida = vida - 15;
    std::cout << "\nboa defesa, mas você perdeu vida. \nAgora você tem" << vida;
}
if(vida <= 0)
{
    std::cout << "\nGAME OVER";
    break;
}

else if (vida2 <= 0)
{
   std::cout << "\nVOCÊ GANHOU DO MONSTRO"; 
    break;

}



}
    
    
}
