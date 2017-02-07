/*************************************************
��Ȩ: �μ�˶
����: �μ�˶
����: 2016-12-29
����: ��ϲ��Բ���_GA��
�޸���ʷ:

**************************************************/

/*<remark>=========================================================
/// <summary>
/// ��ϲ��Բ���_GA��
/// </summary>
===========================================================</remark>*/

#pragma once

#include "basic.h"

#pragma region �½�����
////////////////////////////////////////////////////////////////////////
class GA;
////////////////////////////////////////////////////////////////////////
#pragma endregion

class GA
{

#pragma region Variables

public:// ����
	int				PopSize;		// ��Ⱥ��С
	int				Gen;			//ѭ������
	double			Pc;			//�������
	double			Pm;			//�������
	int				bestValue;	// Ŀǰ���Ž�

public:// ����
	vector<vector<int>	 >	individual;	// ��Ⱥ
	vector<int>		fitness;		// ��ȺĿ�꺯��ֵ
	vector<double>	prob;		// ���̶ĵ���
	vector<int>		best;		// Ŀǰ���Ž�

#pragma endregion

#pragma region Functions

public:

	#pragma region ����
	//////////////////////////////////////////////////////////////////////////

	//�������̶ĵ�����
	void BuildWheel();
	//����Ŀ�꺯��ֵ
	void ComputeFitness();
	//�����������
	vector<int> GenerateRandomTour();
	//����ʱ��˳�����
	vector<int> GenerateSequenceTour();
	//���ɿ���˳�����
	vector<int> GenerateSequenceTour2();
	//���̶ķ�ʽѡȡһ������
	int  SelectIndividual();
	//��lo��hi������
	void PMX(int lo, int hi, vector<int> *tour1, vector<int> *tour2, vector<int> *newtour1, vector<int> *newtour2);
	//����
	void Mutation();
	//��ʼ��
	void Initialize();
	//ѡ��ͽ���
	void SelectionAndCrossover();
	//�Ŵ��㷨������
	static void GeneticAlgorithm();
	// ����ÿ������������ܾ���
	int ComputeDistance(vector<int> individual);
	// copySolution
	void CopySolution(vector<int> *from, vector<int> *to);
	//���ݳ��б���ڽ���Ѱ�ҳ��е�λ��
	int  FindCity(int city, vector<int> tour);
	//���򽻻�
	void SwapOperator(int city1, int city2, vector<int> *tour);
	// ��ӡ���
	void printResult(vector<int> newSequence);
	
	//////////////////////////////////////////////////////////////////////////
	#pragma endregion

#pragma endregion

};