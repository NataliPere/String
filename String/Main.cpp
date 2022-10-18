#include <iostream>
#include <string> // �����������, ����������� �������� � ������� string (�� ���������� �����������)

//������ 1. ���������� ������
 std::string repeat_str (std::string str, int num) {
	 std::string tmp;
	 for (int i = 0; i < num; i++)
		 tmp += str;
	 return tmp;

}

 //������ 2. ����
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

	//��������� �������
	/*char char_str[4]{'H', 'i', '!', '\0'}; //������ ����� ����� ������ ��� char
	for (int i = 0; i < 4; i++)
		std::cout << char_str[i];
	std::cout << "\n";

	std::cout << char_str << '\n';

	char char_str2[]{ "Hello world!"}; //\0 ������������� �������������
	std::cout << char_str2; //�� ������ Hello world!
	std::cout << "\n";

	std::cout << char_str2[4]; //�� ������ o
	std::cout << "\n";*/

	//��������� ���������� string
	/*std::string str; //�������� ��������� ���������� ���� string
	std::cout << str; //���� �� ���������������� ��������� ����������, �� ������������� ������ �������� �������� � ���� ������ ������
	str = "Hello world!";
	std::cout << str <<'\n'; //�� ������ Hello world!
	//������������ ����� - ������� ���������� ���� ��� ����� ����� � ���� �����.

	
	str += "Bye world!";
	std::cout << str << "------------\n";
	std::cout << "\n";

	std::cout << str + "WOW" <<"\n";
	std::cout << "\n";*/


	//���� ������
	/*std::string name;
	std::cout << "������� ���: ";
	//std::cin >> name; //���� �� ���������� �����������
	getline(std::cin, name);
	std::cout << "������, " << name << "!\n";
	
	std::cout << "������� �������: ";
	short age;
	std::cin >> age;
	std::cout << age << "? ���!\n";
	std::cin.ignore(); //������� ������ input stream. ��� ������ ��������� �������� � cin (������� 1 ���)


	std::cout << "������� ���������: ";
	std::string pos;
	getline(std::cin, pos);
	//std::cin >> pos;
	std::cout << "������ ������ ���� " << pos << "!\n";


	std::cout << "����, ������ " << name[0] << ".\n"; //����, ������ �.

	name = "Hello\nworld!";
	std::cout << name << "\n";*/

	//������ �����
	//����� - �������, ���������� ������ ������ � ������������� ������������� � ������� ����� ������.
	std::string str = "Hello world!";

	//������ length � size. ���������� �������� ����� ������
	/*std::cout << str.length() << "\n";
	std::cout << str.size() << "\n"; //���� � �� �� � length*/

	//����� insert. ������� ����������� ������ ������.
	/*str.insert(3, "!!!");
	std::cout << str << '\n';*/

	//����� replace. ������ ����� ������ ����� ����������.
	/*str.replace(3, 5, "123"); //3 - ����� ���� �������� ������� ������� 123, 5 - �������� 5 �������� � 3 ������� 
	std::cout << str << '\n';*/

	//����� find. ����� ������� ��������� ��������� � ������. ���������� ������.
	/*std::cout << str.find("o") << "\n"; 
	std::cout << str.find("lo") << "\n";
	std::cout << str.find("l", 5) << "\n";*/

	//����� rfind. ����� ���������� ��������� ��������� � ������. ���������� ������.
	std::cout << str.rfind("o") << "\n";  //7
	std::cout << str.rfind("wo") << "\n";  //6
	std::cout << str.rfind("l", 5) << "\n";  //3

	//size_t - ��� ������ ������������ ��������

	//����� substr. ���������� ��������� ������������ � ���������� �������.
	/*std::cout << str.substr(3) << "\n";  // lo world!
	std::cout << str.substr(3, 5) << "\n";  // lo wo (5 - ����� ���������� 5 �������� ������� � ������� 3)*/
	
	//�������������� ������ ����� � ������
	/*std::cout << "������� �����: ";
	std::cin >> n;
	n++;
	str = std::to_string(n);
	std::cout << str + '\n';*/

	//�������������� ������ � ����� �����
	/*std::cout << "������� �����: ";
	getline(std::cin, str);
	int num = stoi(str);
	num++;
	std::cout << num <<'\n';*/

	//���������� ������ � ������� �������
	/*for (int i = 0; i < str.length(); i++)
	str[i] = toupper(str[i]);
		std::cout << str <<'\n';

	//���������� ������ � ������ �������
	for (int i = 0; i < str.length(); i++)
	str[i] = tolower(str[i]);
	std::cout << str << '\n';*/


	//������ 1. ���������� ������
	/*std::cout << "������1.\n ������� ������:";
	getline(std::cin, str);
	std::cout << repeat_str(str, 5) << '\n';*/



	//������ 2. ����
	std::cout << "������ 2.\n������� ���������: ";
	getline(std::cin, str);
	if (is_spam(str))
		std::cout << "��������� ����!\n";
	else
		std::cout << "C���� �� ����������!\n";


	return 0;
}