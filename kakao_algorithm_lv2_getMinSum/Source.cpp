#include<iostream>
#include<vector>
#include <algorithm>    // std::sort

using namespace std;

int getMinSum(vector<int> a, vector<int> b)
{
	auto answer = 0;
	sort(a.begin(), a.end());//��������? ������ ���� �ְԲ� ��.
	sort(b.begin(), b.end());//��������? ������ ���� �ְԲ� ��.

	for(unsigned int i=0;i<a.size();i++)
	{
		answer += a[i] * b[a.size() - 1-i];
	}
	return answer;
}
int main()
{
	const vector<int> t_a{ 1,2 };
	const vector<int> t_b{ 3,4 };

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�.
	cout << getMinSum(t_a, t_b);
}

//�ڿ����� �̷���� ���̰� ���� ���� A, B�� �ֽ��ϴ�.�ּڰ� ������ A, B���� ���� �� ���� ���ڸ� �̾� �� ���� ���� ���� �����Ͽ� ���մϴ�.�̷��� ������ ������ ���̸�ŭ �ݺ��Ͽ� ���������� ������ ���� �ּҰ� �ǵ��� ����� ���� ��ǥ�Դϴ�.
//
//���� ��� A = [1, 2], B = [3, 4] ���
//
//A���� 1, B���� 4�� �̾� ���Ͽ� ���մϴ�.
//A���� 2, B���� 3�� �̾� ���Ͽ� ���մϴ�.
//������ ���̸�ŭ �ݺ��Ͽ� �ּڰ� 10�� ���� �� ������, �� 10�� �ּڰ��� �˴ϴ�.
//���� A, B�� �־��� ��, �ּڰ��� ��ȯ���ִ� getMinSum �Լ��� �ϼ��ϼ���.