#include <iostream>
int main() {
	int relation; //отношение Олдрика к герою
	int answ; //ответ Героя
	setlocale(0, "ru");
	std::cout << "Приветствую, Странник" << std::endl;

	std::cout << std::endl << "1.- Давай торговать!" << std::endl;
	std::cout << "2.- Я вырезал твою родную деревню!" << std::endl;
	std::cout << "3.- Слухи!" << std::endl;
	std::cout << "4.- Нет, ничего не надо, до свидания!" << std::endl;

	std::cout << std::endl << "Выберите вариант ответа:" << std::endl;
	std::cin >> answ;
switch (answ){
case 1:
std::cout<<"выбирай, что хочешь"<<std::endl;
break;
case 2:
std::cout<<"я тебя не прощу, я убью тебя"<<std::endl;
break;
case 3:
std::cout<<"ходят слухи о приведения заброшенного дома"<<std::endl;
break;
default:
std::cout<<"до свидания"<<endl;	
break;

	return 0;
}
