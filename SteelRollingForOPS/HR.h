/*************************************************
��Ȩ: �μ�˶
����: �μ�˶
����: 2016-12-10
����: ��ϲ��Բ���_HR��
�޸���ʷ:

**************************************************/

/*<remark>=========================================================
/// <summary>
/// ��ϲ��Բ���_HR��
/// </summary>
===========================================================</remark>*/

#pragma once

#include "basic.h"
#include "ROLLPASS.h"

#pragma region �½�����
////////////////////////////////////////////////////////////////////////
class HR;
class ROLLPASS;
////////////////////////////////////////////////////////////////////////
#pragma endregion

class HR
{

#pragma region Variables

public:// ����
	int			m_NO;
	string		m_REC_CREATE_TIME;
	string		m_REC_CREATOR;
	string		m_REC_REVISE_TIME;
	string		m_REC_REVISOR;
	string		m_ARCHIVE_FLAG;
	string		m_WORKSHEET_NO;
	string		m_WHOLE_BACKLOG_CODE;
	string		m_UNIT_CODE;
	string		m_SG_SIGN;
	string		m_SG_STD;
	double		m_LACK_WT;
	int			m_OUT_THICK;
	int			m_OUT_WIDTH;
	string		m_BEGIN_TIME;
	string		m_FINISH_TIME;
	time_t		m_BEGIN_TIME_t;
	time_t		m_FINISH_TIME_t;
	time_t		m_MAKING_TIME_t;
	string		m_ORDER_NO;
	string		m_STATUS;
	time_t		m_new_BEGIN_TIME_t;
	time_t		m_new_FINISH_TIME_t;

public:// ��������
	string		m_EPST;
	string		m_NEST;
	string		m_NLST;
	string		m_LPST;
	time_t		m_NEST_t;
	time_t		m_NLST_t;

public:// ����
	ROLLPASS*		m_rollPass;

public:// ����
	static map<int, HR *>		s_mapSetOfHR;
	static int				s_HRCount;
	static time_t				s_standTime;
	static time_t				s_END_TIME;

#pragma endregion

#pragma region Functions

public:

	#pragma region ��������
	//////////////////////////////////////////////////////////////////////////

	//
	// ժҪ:
	//     ���캯����
	HR(int NO, string REC_CREATE_TIME, string REC_CREATOR, string REC_REVISE_TIME, string REC_REVISOR, string ARCHIVE_FLAG, string WORKSHEET_NO, string WHOLE_BACKLOG_CODE, string UNIT_CODE, string SG_SIGN, string SG_STD, double LACK_WT, int OUT_THICK, int OUT_WIDTH, string EPST, string NEST, string BEGIN_TIME, string FINISH_TIME, string NLST, string LPST, string ORDER_NO, string STATUS);
	//
	// ժҪ��
	//     ��ȡ���ݡ�
	static void readData();
	//
	// ժҪ��
	//     ��ʼ�����ݣ���������ϵ�У���
	static void initRollPass();
	//
	// ժҪ��
	//     ��ʼ�����ݣ�ʱ�䣩��
	static void initDataTime();
	//
	// ժҪ��
	//     ��ӡ�����
	static void printResult(vector<HR> newSequence);
	//
	// ժҪ��
	//     ������ϲ��ԣ�����ʽ����
	static vector<HR> heuristic();
	//
	// ժҪ��
	//     ������ϲ��ԣ�������������
	static vector<HR> localSearch();
	//
	// ժҪ��
	//     ������ϲ��ԣ�������������ʼ�⡣
	static vector<HR> localSearchInit();
	//
	// ժҪ��
	//     ������ϲ��ԣ���������������Ŀ�꺯��ֵ��
	static void localSearchObj(vector<HR> sequence, int *distance, int *switchFreq);
	//
	// ժҪ��
	//     ������ϲ��ԣ��������������򽻻�����������У�����false��
	static bool SwapOperator(vector<HR> *sequence, int a, int b);

	// sort��������
	static bool less_second_int(const HR & m1, const HR & m2);
	static bool more_second_int(const HR & m1, const HR & m2);
	
	//////////////////////////////////////////////////////////////////////////
	#pragma endregion

#pragma endregion

};