#include <iostream>
#include <string> // библииотека, позволяющая работать с классом string (со строковыми переменными)

//Задача 1. Повторения строки
 std::string repeat_str (std::string str, int num) {
	 std::string tmp;
	 for (int i = 0; i < num; i++)
		 tmp += str;
	 return tmp;

}

 //Задача 2. Спам
 bool is_spam(std::string str) {
	 for (int i = 0; i < str.length(); i++)
		 str[i] = tolower(str[i]);
	 std::string spams[3]{
		 "100% free",
		 "sales increase",
		 "only today"

	 };
	 for (int i = 0; i < 3; i++)
		 if (str.find(spams[i]) < str.length())
			 return true;

	 return false;
 }





int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Строковые массивы
	/*char char_str[4]{'H', 'i', '!', '\0'}; //строки могут иметь только тип char
	for (int i = 0; i < 4; i++)
		std::cout << char_str[i];
	std::cout << "\n";

	std::cout << char_str << '\n';

	char char_str2[]{ "Hello world!"}; //\0 подставляется автоматически
	std::cout << char_str2; //На экране Hello world!
	std::cout << "\n";

	std::cout << char_str2[4]; //На экране o
	std::cout << "\n";*/

	//Строковые переменные string
	/*std::string str; //создание строковой переменной типа string
	std::cout << str; //Если не инициализировать строковую переменную, то автоматически всегда получает значение в виде пустой строки
	str = "Hello world!";
	std::cout << str <<'\n'; //На экране Hello world!
	//Конкатенация строк - процесс соединения двух или более строк в одну целую.

	
	str += "Bye world!";
	std::cout << str << "------------\n";
	std::cout << "\n";

	std::cout << str + "WOW" <<"\n";
	std::cout << "\n";*/


	//Ввод строки
	/*std::string name;
	std::cout << "Введите имя: ";
	//std::cin >> name; //ввод до ближайшего разделителя
	getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";
	
	std::cout << "Введите возраст: ";
	short age;
	std::cin >> age;
	std::cout << age << "? Вау!\n";
	std::cin.ignore(); //очистка потока input stream. Как только закончили работать с cin (пишется 1 раз)


	std::cout << "Введите должность: ";
	std::string pos;
	getline(std::cin, pos);
	//std::cin >> pos;
	std::cout << "Всегда мечтал быть " << pos << "!\n";


	std::cout << "Пока, мистер " << name[0] << ".\n"; //Пока, мистер Т.

	name = "Hello\nworld!";
	std::cout << name << "\n";*/

	//Методы строк
	//Метод - функция, являющаяся частью класса и применяющаяся исключительно к объктам этого класса.
	std::string str = "Hello world!";

	//Методы length и size. Возвращает значение длины строки
	/*std::cout << str.length() << "\n";
	std::cout << str.size() << "\n"; //одно и то же с length*/

	//Метод insert. Вставка содержимого внутрь строки.
	/*str.insert(3, "!!!");
	std::cout << str << '\n';*/

	//Метод replace. Замена части строки новым содержимым.
	/*str.replace(3, 5, "123"); //3 - перед этим символом начнётся вставка 123, 5 - удалится 5 символов с 3 символа 
	std::cout << str << '\n';*/

	//Метод find. Поиск первого вхождения подстроки в строку. Возвращает индекс.
	/*std::cout << str.find("o") << "\n"; 
	std::cout << str.find("lo") << "\n";
	std::cout << str.find("l", 5) << "\n";*/

	//Метод rfind. Поиск последнего вхождения подстроки в строку. Возвращает индекс.
	std::cout << str.rfind("o") << "\n";  //7
	std::cout << str.rfind("wo") << "\n";  //6
	std::cout << str.rfind("l", 5) << "\n";  //3

	//size_t - тип данных возвращаемых значений

	//Метод substr. Возвращает подстроку начинающуюся с переданной позиции.
	/*std::cout << str.substr(3) << "\n";  // lo world!
	std::cout << str.substr(3, 5) << "\n";  // lo wo (5 - будет возвращено 5 символов начиная с символа 3)*/
	
	//Преобразование целого числа в строку
	/*std::cout << "Введите число: ";
	std::cin >> n;
	n++;
	str = std::to_string(n);
	std::cout << str + '\n';*/

	//Преобразование строки в целое число
	/*std::cout << "Введите число: ";
	getline(std::cin, str);
	int num = stoi(str);
	num++;
	std::cout << num <<'\n';*/

	//Возведение строки в верхний регистр
	/*for (int i = 0; i < str.length(); i++)
	str[i] = toupper(str[i]);
		std::cout << str <<'\n';

	//Возведение строки в нижний регистр
	for (int i = 0; i < str.length(); i++)
	str[i] = tolower(str[i]);
	std::cout << str << '\n';*/


	//Задача 1. Повторения строки
	/*std::cout << "Задача1.\n Введите строку:";
	getline(std::cin, str);
	std::cout << repeat_str(str, 5) << '\n';*/



	//Задача 2. Спам
	std::cout << "Задача 2.\nВведите сообщение: ";
	getline(std::cin, str);
	if (is_spam(str))
		std::cout << "Обнаружен спам!\n";
	else
		std::cout << "Cпама не обнаружено!\n";


	return 0;
}