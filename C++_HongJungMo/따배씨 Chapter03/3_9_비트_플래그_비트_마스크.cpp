#include "main.h"
#include <bitset>

using namespace std;

void Bit_flag_Bit_mask() 
{
	//�������� ��Ʈ �÷��׿� ����ũ�� ��� ���ɱ�?

	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;
	
	// event!
	item1_flag = true;
	
	// die! item2 lost
	item2_flag = false;

	if (item3_flag == true)
	{
		//event
	}

	if (item3_flag == true && item4_flag == false)
	{
		item3_flag = false;
		item4_flag = true;
	}
	
	//invokeEvent(item1_flag, item2_flag, item3_flag, ....);
	//������ ��ü�� Ȯ���Ϸ��� �̷��� �ؾ��ϳ�..

	unsigned char items_flag = 0;
	cout << bitset<8>(items_flag) << endl;
	// charŸ�� �ϳ��� ������ 8���� ���¸� �־��� �� �ִ°�.
	// �� ��Ʈ�� ���� flag�� ����

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	cout << bitset<8>(opt0) << endl; //00000001
	cout << bitset<8>(opt1) << endl; //00000010
	cout << bitset<8>(opt2) << endl; //00000100
	cout << bitset<8>(opt3) << endl; //00001000
	//�̰͵��� ���� ������ 0,1,2,3�� ������ �� �������� �Ǻ� ����

	//item0 on
	items_flag |= opt0; // 0�� or����
	cout << bitset<8>(items_flag) << endl;

	items_flag |= opt3; // item 3 get
	cout << bitset<8>(items_flag) << endl;

	items_flag &= ~opt3; // item 3 lost
	cout << bitset<8>(items_flag) << endl;

	if (items_flag & opt0)
	{
		cout << "Has item0" << endl;
	}

	if (items_flag & opt3)
	{
		cout << "Has item3" << endl;
	}
	else 
	{
		cout << "Not has item3" << endl;
	}

	if (!(items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2; // �ٲ��ֱ�
		items_flag ^= opt1;
	}

	cout << bitset<8>(items_flag) << endl; // 0000000111

	// --------------------------

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	unsigned int pixel_color = 0xDAA520;
	unsigned char red, green, blue;

	cout << std::bitset<32>(pixel_color) << endl;

	red = (red_mask & pixel_color) >> 16;
	green = (green_mask & pixel_color) >> 8;
	blue = blue_mask & pixel_color;
	
	cout << std::bitset<8>(red) << endl;
	cout << std::bitset<8>(green) << endl;
	cout << std::bitset<8>(blue) << endl;

	//RGB�� ����
	//A�� �����Ҽ��ֱ��ϴ�.

}