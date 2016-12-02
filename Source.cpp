// dkoi     DKOI-8 (Russian EBCDIC) GOST 19768-87, obscure
//конвертёр текста из ДКОИ-8 в ASCII
// автор Александрович Алексей Борисович
//author Aleksandrovich Aleksey Borisovich

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
				if (parse[i] == "C1") { out.push_back('А'); }
		else if (parse[i] == "BA") { out.push_back('Б'); }
		else if (parse[i] == "C2") { out.push_back('В'); }
		else if (parse[i] == "BF") { out.push_back('Г'); }
		else if (parse[i] == "BC") { out.push_back('Д'); }
		else if (parse[i] == "C5") { out.push_back('Е'); }
		else if (parse[i] == "EC") { out.push_back('Ж'); }
		else if (parse[i] == "FA") { out.push_back('З'); }
		else if (parse[i] == "CB") { out.push_back('И'); }
		else if (parse[i] == "CC") { out.push_back('Й'); }
		else if (parse[i] == "D2") { out.push_back('К'); }
		else if (parse[i] == "CE") { out.push_back('Л'); }
		else if (parse[i] == "D4") { out.push_back('М'); }
		else if (parse[i] == "C8") { out.push_back('Н'); }
		else if (parse[i] == "D6") { out.push_back('О'); }
		else if (parse[i] == "DC") { out.push_back('П'); }
		else if (parse[i] == "D7") { out.push_back('Р'); }
		else if (parse[i] == "C3") { out.push_back('С'); }
		else if (parse[i] == "E3") { out.push_back('Т'); }
		else if (parse[i] == "EB") { out.push_back('У'); }
		else if (parse[i] == "BE") { out.push_back('Ф'); }
		else if (parse[i] == "E7") { out.push_back('Х'); }
		else if (parse[i] == "BB") { out.push_back('Ц'); }
		else if (parse[i] == "FE") { out.push_back('Ч'); }
		else if (parse[i] == "FB") { out.push_back('Ш'); }
		else if (parse[i] == "FD") { out.push_back('Щ'); }
		else if (parse[i] == "EF") { out.push_back('Ы'); }
		else if (parse[i] == "EE") { out.push_back('Ь'); }
		else if (parse[i] == "FC") { out.push_back('Э'); }
		else if (parse[i] == "B8") { out.push_back('Ю'); }
		else if (parse[i] == "DD") { out.push_back('Я'); }
		else if (parse[i] == "81") { out.push_back('а'); }
		else if (parse[i] == "78") { out.push_back('б'); }
		else if (parse[i] == "AF") { out.push_back('в'); }
		else if (parse[i] == "8D") { out.push_back('г'); }
		else if (parse[i] == "8A") { out.push_back('д'); }
		else if (parse[i] == "85") { out.push_back('е'); }
		else if (parse[i] == "AE") { out.push_back('ж'); }
		else if (parse[i] == "B2") { out.push_back('з'); }
		else if (parse[i] == "8F") { out.push_back('и'); }
		else if (parse[i] == "90") { out.push_back('й'); }
		else if (parse[i] == "9A") { out.push_back('к'); }
		else if (parse[i] == "9B") { out.push_back('л'); }
		else if (parse[i] == "9C") { out.push_back('м'); }
		else if (parse[i] == "9D") { out.push_back('н'); }
		else if (parse[i] == "96") { out.push_back('о'); }
		else if (parse[i] == "9F") { out.push_back('п'); }
		else if (parse[i] == "97") { out.push_back('р'); }
		else if (parse[i] == "83") { out.push_back('с'); }
		else if (parse[i] == "AC") { out.push_back('т'); }
		else if (parse[i] == "A8") { out.push_back('у'); }
		else if (parse[i] == "8C") { out.push_back('ф'); }
		else if (parse[i] == "A7") { out.push_back('х'); }
		else if (parse[i] == "80") { out.push_back('ц'); }
		else if (parse[i] == "B6") { out.push_back('ч'); }
		else if (parse[i] == "B3") { out.push_back('ш'); }
		else if (parse[i] == "B5") { out.push_back('щ'); }
		else if (parse[i] == "B7") { out.push_back('ъ'); }
		else if (parse[i] == "B1") { out.push_back('ы'); }
		else if (parse[i] == "B0") { out.push_back('ь'); }
		else if (parse[i] == "B4") { out.push_back('э'); }
		else if (parse[i] == "76") { out.push_back('ю'); }
		else if (parse[i] == "A0") { out.push_back('я'); }
		else if (parse[i] == "30") { out.push_back('0'); } // или ноль
		else if (parse[i] == "31") { out.push_back('1'); } // или один 
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
		else if (parse[i] == "DF") { out.push_back('С'); std::cout <<"DF" << std::endl; }
		else if (parse[i] == "DB") { out.push_back('О'); }  // ручная правка
		else if (parse[i] == "B9") { out.push_back('А'); std::cout << "B9" << std::endl;}
		else if (parse[i] == "DA") { out.push_back('Н'); std::cout << "DA" << std::endl;}
		else if (parse[i] == "ED") { out.push_back('В'); std::cout << "ED" << std::endl;}
		else if (parse[i] == "BD") { out.push_back('Е'); std::cout << "BD" << std::endl;}
		else if (parse[i] == "EA") { out.push_back('Т'); std::cout << "EA" << std::endl; }
		else if (parse[i] == "DE") { out.push_back('Р'); std::cout << "DE" << std::endl; }
		else if (parse[i] == "3A") { out.push_back(':'); }
		else if (parse[i] == "38") { out.push_back('8'); }
		else if (parse[i] == "33") { out.push_back('3'); }


		else { std::cout << "не найдено = " << parse[i] << std::endl; }
	}
	std::cout << "ГОТОВО = [" << out <<"]"<< std::endl;
	system("pause");
	return 0;
}
