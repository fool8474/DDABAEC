
#include "main.h"
#include <algorithm>
using namespace std;

#define MY_NUMBER 9
// ��ũ�� �����δ� ������� �ʴ´�.. ����..
#define STRINGSTRING "Hello, world"
// ��� ������ ��ü�� ���ش� �� ��
#define MAX(a,b) ((a>b) ? a : b)
// �� �߿� ū�Ÿ� ����ϰ�, �̷��� ���̾����
// �ٵ� ����� ��ǻ�Ͱ� �����ٺ��� ���� ���� ����.

#define MIN(a,b) (((a)<(b)) ? (a) : (b))
// �̷��� ��û ��ȣ�� �μ� �����ϱ⵵ �Ѵ�.

#define LIKE_APPLE
// ���Ǹ� ���ش�. �Ʒ����� ���
// ��� ��������� �ش� cpp���ϸ� �ȴ�. 
// ���� �̰� �ٸ� ������ ����ϸ�
// �������� ���ð�.


void MeetWithPreprocessor() 
{
	cout << MY_NUMBER << endl;
	cout << MAX(1, 2) << endl;
	cout << MIN(1, 2) << endl;

	cout << std::max(1 + 3, 2) << endl; //�˰��򿡼� ������

#ifdef LIKE_APPLE
	cout << "Apple Apple " << endl;
#endif

#ifndef  LIKE_APPLE
	cout << "orange orange" << endl;
#endif // ! LIKE_APPLE ������ �Ǿ������ϱ� �帮�� ����.
}

//��Ƽ�÷��� ����Ʈ��� ���߽� ���ž��� ����ϰ� �ȴ�.
