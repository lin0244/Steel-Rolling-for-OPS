#pragma once

#include "HR.h"
#include "time.h"
#include "ROLLPASS.h"
#include "ga.h"


int main()
{
	// ������
	HR::s_mapSetOfHR;
	ROLLPASS::s_mapSetOfROLLPASS;
	ROLLPASS::s_distance;

	// ��ȡ����
	HR::readData();
	ROLLPASS::readData();
	ROLLPASS::initData();

	// ��ʼ�����ݣ�ʱ�䣩��
	HR::initDataTime();
	// ��ʼ��HR����ROLLPASS
	HR::initRollPass();

	// ����ʽ�㷨
	//vector<HR> newSequence = HR::localSearch();

	// �Ŵ��㷨
	GA::GeneticAlgorithm();

	// ��ӡ���
	//HR::printResult(newSequence);

	system("pause");
	return 0;
}

