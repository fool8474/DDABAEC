#include "main.h"
#include <cstring>

using namespace std;
void C_style_array_string()
{
	char myString[] = "string";
	// 7��¥�� ���� (6+\0);

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << endl;
	} //�������� 0�� �����ִ�. �̴� �������̶�� ���� ���ϴ� \0�� ��ġ�Ǿ� �ֱ� ����.

	cout << sizeof(myString) / sizeof(myString[0]) << endl;

	char myString2[255]; // �� �����Ӱ� �޸𸮸� ����.
	cin >> myString2;
	cout << myString2 << endl;

	myString2[0] = 'A'; // �迭�� ���� �������ε� ó���� �����ϴ�.

	cout << myString2 << endl; 

	myString2[4] = '\0'; // ���� ���� �߸���. �̴� \0(NULL)�� ������ ����� �ߴ��ϱ� ����.

	cout << myString2 << endl;

	//cin�� �� ��ĭ�� ���� �ȵȴ�. �׶��� cin.getline�� ���������

	char myString3[255];
	cin.getline(myString3, 255);
	cout << myString3 << endl;
	
	int ix = 0;
	while (true)
	{
		if (myString2[ix] == '\0') break; // ���Ṯ�� ������ ����

		cout << myString2[ix] << " " << (int)myString2[ix] << endl;
		++ix;
	}
	// while���� Ȱ���� myString ���
}

void C_style_array_string2()
{
	char source[] = "Copy this!";
	char dest[50]; // ���� copy�� ũ�Ⱑ �Ҵ��� �޸𸮺��� �� ũ�� ����

	strcpy_s(dest, 50, source); 
	// array���� �����ͷ� �� const�� �� source���� �ǵ帮�� �ʰ�
	// dest�� ����ִ´�.
	// �ִ� ������ ������ 50

	cout << source << endl;
	cout << dest << endl;

	//strcat() �ڿ� ���� �ٿ��ֱ�
	//strcmp() �ΰ� ���ϱ� ������ 0 return, ���� if�� ������
	if (strcmp(source, dest) == 0)
	{
		cout << "�Ҫ���" << endl;
	}
	
	strcat_s(dest, source);

	cout << source << endl;
	cout << dest << endl; // copy this�� 2����!

}