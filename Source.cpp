// dkoi     DKOI-8 (Russian EBCDIC) GOST 19768-87, obscure
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>

std::vector<std::string> ParserString(std::string str, char lex) {
	std::string temp;
	std::vector<std::string> parse;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == lex) { parse.push_back(temp); temp = ""; }
		else { temp.push_back(str[i]); }

	}

	return parse;

}

int main() {
	system("chcp 1251 > nul ");
	std::vector<std::string> parse;
	std::string str ="16 7F 30 30 30 31 7F 4B 4F 52 52 60 60 30 31 DF DB FA BC B9 DA ED FE BD EA ED BD DE BF 2C 32 36 CB B8 CE DD 32 30 30 31 BF DB BC B9 ED 30 3A 31 31 3A 38 33 31 30 30 3B ";
	std::string lex;
	std::string out;
	char symbol = 32;

	parse=ParserString(str, symbol);

	for (int i = 0; i < parse.size(); i++) {
		if (parse[i] == "C1") { out.push_back('À'); }
		else if (parse[i] == "BA") { out.push_back('Á'); }
		else if (parse[i] == "C2") { out.push_back('Â'); }
		else if (parse[i] == "BF") { out.push_back('Ã'); }
		else if (parse[i] == "BC") { out.push_back('Ä'); }
		else if (parse[i] == "C5") { out.push_back('Å'); }
		else if (parse[i] == "EC") { out.push_back('Æ'); }
		else if (parse[i] == "FA") { out.push_back('Ç'); }
		else if (parse[i] == "CB") { out.push_back('È'); }
		else if (parse[i] == "CC") { out.push_back('É'); }
		else if (parse[i] == "D2") { out.push_back('Ê'); }
		else if (parse[i] == "CE") { out.push_back('Ë'); }
		else if (parse[i] == "D4") { out.push_back('Ì'); }
		else if (parse[i] == "C8") { out.push_back('Í'); }
		else if (parse[i] == "D6") { out.push_back('Î'); }
		else if (parse[i] == "DC") { out.push_back('Ï'); }
		else if (parse[i] == "D7") { out.push_back('Ð'); }
		else if (parse[i] == "C3") { out.push_back('Ñ'); }
		else if (parse[i] == "E3") { out.push_back('Ò'); }
		else if (parse[i] == "EB") { out.push_back('Ó'); }
		else if (parse[i] == "BE") { out.push_back('Ô'); }
		else if (parse[i] == "E7") { out.push_back('Õ'); }
		else if (parse[i] == "BB") { out.push_back('Ö'); }
		else if (parse[i] == "FE") { out.push_back('×'); }
		else if (parse[i] == "FB") { out.push_back('Ø'); }
		else if (parse[i] == "FD") { out.push_back('Ù'); }
		else if (parse[i] == "EF") { out.push_back('Û'); }
		else if (parse[i] == "EE") { out.push_back('Ü'); }
		else if (parse[i] == "FC") { out.push_back('Ý'); }
		else if (parse[i] == "B8") { out.push_back('Þ'); }
		else if (parse[i] == "DD") { out.push_back('ß'); }
		else if (parse[i] == "81") { out.push_back('à'); }
		else if (parse[i] == "78") { out.push_back('á'); }
		else if (parse[i] == "AF") { out.push_back('â'); }
		else if (parse[i] == "8D") { out.push_back('ã'); }
		else if (parse[i] == "8A") { out.push_back('ä'); }
		else if (parse[i] == "85") { out.push_back('å'); }
		else if (parse[i] == "AE") { out.push_back('æ'); }
		else if (parse[i] == "B2") { out.push_back('ç'); }
		else if (parse[i] == "8F") { out.push_back('è'); }
		else if (parse[i] == "90") { out.push_back('é'); }
		else if (parse[i] == "9A") { out.push_back('ê'); }
		else if (parse[i] == "9B") { out.push_back('ë'); }
		else if (parse[i] == "9C") { out.push_back('ì'); }
		else if (parse[i] == "9D") { out.push_back('í'); }
		else if (parse[i] == "96") { out.push_back('î'); }
		else if (parse[i] == "9F") { out.push_back('ï'); }
		else if (parse[i] == "97") { out.push_back('ð'); }
		else if (parse[i] == "83") { out.push_back('ñ'); }
		else if (parse[i] == "AC") { out.push_back('ò'); }
		else if (parse[i] == "A8") { out.push_back('ó'); }
		else if (parse[i] == "8C") { out.push_back('ô'); }
		else if (parse[i] == "A7") { out.push_back('õ'); }
		else if (parse[i] == "80") { out.push_back('ö'); }
		else if (parse[i] == "B6") { out.push_back('÷'); }
		else if (parse[i] == "B3") { out.push_back('ø'); }
		else if (parse[i] == "B5") { out.push_back('ù'); }
		else if (parse[i] == "B7") { out.push_back('ú'); }
		else if (parse[i] == "B1") { out.push_back('û'); }
		else if (parse[i] == "B0") { out.push_back('ü'); }
		else if (parse[i] == "B4") { out.push_back('ý'); }
		else if (parse[i] == "76") { out.push_back('þ'); }
		else if (parse[i] == "A0") { out.push_back('ÿ'); }
		else if (parse[i] == "30") { out.push_back('0'); } // èëè íîëü
		else if (parse[i] == "31") { out.push_back('1'); } // èëè îäèí 
		else if (parse[i] == "4B") { out.push_back('K'); }
		else if (parse[i] == "4F") { out.push_back('O'); }
		else if (parse[i] == "52") { out.push_back('R'); }
		else if (parse[i] == "60") { out.push_back('\''); }
		else if (parse[i] == "2C") { out.push_back(','); }
		else if (parse[i] == "32") { out.push_back('2'); }
		else if (parse[i] == "36") { out.push_back('6'); }
		else if (parse[i] == "3B") { out.push_back(';'); }
		else if (parse[i] == "16") { out.push_back(32); } // SYN
		else if (parse[i] == "7F") { out.push_back(32); } // DEL
		else if (parse[i] == "DF") { out.push_back('Ñ'); std::cout <<"DF" << std::endl; }
		else if (parse[i] == "DB") { out.push_back('Î'); }  // ðó÷íàÿ ïðàâêà
		else if (parse[i] == "B9") { out.push_back('À'); std::cout << "B9" << std::endl;}
		else if (parse[i] == "DA") { out.push_back('Í'); std::cout << "DA" << std::endl;}
		else if (parse[i] == "ED") { out.push_back('Â'); std::cout << "ED" << std::endl;}
		else if (parse[i] == "BD") { out.push_back('Å'); std::cout << "BD" << std::endl;}
		else if (parse[i] == "EA") { out.push_back('Ò'); std::cout << "EA" << std::endl; }
		else if (parse[i] == "DE") { out.push_back('Ð'); std::cout << "DE" << std::endl; }
		else if (parse[i] == "3A") { out.push_back(':'); }
		else if (parse[i] == "38") { out.push_back('8'); }
		else if (parse[i] == "33") { out.push_back('3'); }
		



		else { std::cout << "íå íàéäåíî = " << parse[i] << std::endl; }
	}
	std::cout << "ÃÎÒÎÂÎ = [" << out <<"]"<< std::endl;
	system("pause");
	return 0;
}
