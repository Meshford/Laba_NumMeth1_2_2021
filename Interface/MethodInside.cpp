#include "MethodInside.h"


void  MethodInside::Optimal(bool wish)
{
	optimal = wish;
}


void MethodInside::MethodError(double eps, int MaxIterations)
{
	//������� ������ �������
	TMatrix<double> u(m + 1);
	TestPartOne(u);

	double accurancy = eps + 1; //����������� ������� � ������� ������ ��������������
	int IterationsCount = 0; //���������� ��������

	if (optimal)
		SetParametrs();

	while ((accurancy > eps) && (IterationsCount < MaxIterations))
	{
		accurancy = Runner();
		IterationsCount++;
	}

	TestPartTwo(u);

	resultTest[0] = accurancy; //�������� ������
	resultTest[1] = IterationsCount; //���������� ��������

}