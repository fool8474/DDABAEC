#include "main.h"

using namespace std;

void Learn_the_char_type() 
{
	char c1(65);
	char c2('A');
	// �� ���ڴ� ' '
	// ���ڿ��� " " 
	
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	// A A 65 65

	//C style Casting
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65

	//C++ style Casting
	cout << char(65) << endl; //65�� ���۵Ǵ� char�� ���� �����.
	cout << int('A') << endl;
	
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65
	//static cast�� ���� �͵麸�� �����ϱ� ����.
	
	//char�� �ѱ��ڹۿ� ���޴µ� 2���� �̻��� �ָ� ���ɵ˴ϱ�
	cout << "�� �ڸ� �Է��Ͻÿ�" << endl;
	cin >> c1; //123 �Է½� 1�� ����
	cout << c1 << endl;
	
	//�׷��� �������� �� �ް� �ϸ�
	cin >> c1;
	cout << c1 << endl;
	cin >> c1;
	cout << c1 << endl;

	//�� ���..
	
	cout << sizeof(char) << endl;
	cout << std::numeric_limits<char>::max() << endl; // �̴�� �ϸ� �׸� ����
	cout << std::numeric_limits<char>::lowest() << endl; // �̴�� �ϸ� �� ū ���� ����
	//�� ������ int�� cast���� �ʿ䰡 �ִ�.
	
	wchar_t wc; // �δ㽺���� ģ��
	char32_t cc; // �����ڵ忡 ����ִ� ģ����
	

	for (int i = 0; i < 129; i++)
	{
		cout << i << '=' << char(i) << endl;
	}


}