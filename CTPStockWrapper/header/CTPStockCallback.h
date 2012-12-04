#pragma once
//#include "include_CTPStock.h"


enum CTP_STOCK_RESPONSE_TYPE
{
    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    OnFrontConnectedResponse = 0,

    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
    ///@param nReason ����ԭ��
    ///        0x1001 �����ʧ��
    ///        0x1002 ����дʧ��
    ///        0x2001 ����������ʱ
    ///        0x2002 ��������ʧ��
    ///        0x2003 �յ�������
    OnFrontDisconnectedResponse,

    ///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
    OnHeartBeatWarningResponse,

    ///�ͻ�����֤��Ӧ
    OnRspAuthenticateResponse,

    ///��¼������Ӧ
    OnRspUserLoginResponse,

    ///�ǳ�������Ӧ
    OnRspUserLogoutResponse,

    ///�û��������������Ӧ
    OnRspUserPasswordUpdateResponse,
    
    ///��������Ӧ��
    OnRspSubMarketDataResponse,

    ///ȡ����������Ӧ��
    OnRspUnSubMarketDataResponse,

    ///�������֪ͨ
    OnRtnDepthMarketDataResponse,

    ///����¼��������Ӧ
    OnRspOrderInsertResponse,

    ///��������������Ӧ
    OnRspOrderActionResponse,

    ///��ѯ��󱨵�������Ӧ
    OnRspQueryMaxOrderVolumeResponse,

    ///�����ѯ������Ӧ
    OnRspQryOrderResponse,

    ///�����ѯ�ɽ���Ӧ
    OnRspQryTradeResponse,

    ///�����ѯͶ���ֲ߳���Ӧ
    OnRspQryInvestorPositionResponse,

    ///�����ѯ�ʽ��˻���Ӧ
    OnRspQryTradingAccountResponse,

    ///�����ѯͶ������Ӧ
    OnRspQryInvestorResponse,

    ///�����ѯ���ױ�����Ӧ
    OnRspQryTradingCodeResponse,

    ///�����ѯ��Լ����������Ӧ
    OnRspQryInstrumentCommissionRateResponse,

    ///�����ѯ��������Ӧ
    OnRspQryExchangeResponse,

    ///�����ѯ��Լ��Ӧ
    OnRspQryInstrumentResponse,

    ///�����ѯ������Ӧ
    OnRspQryDepthMarketDataResponse,

    ///�����ѯͶ���ֲ߳���ϸ��Ӧ
    OnRspQryInvestorPositionDetailResponse,

    ///����Ӧ��
    OnRspErrorResponse,

    ///����֪ͨ
    OnRtnOrderResponse,

    ///�ɽ�֪ͨ
    OnRtnTradeResponse,

    ///����¼�����ر�
    OnErrRtnOrderInsertResponse,

    ///������������ر�
    OnErrRtnOrderActionResponse,

    ///��Լ����״̬֪ͨ
    OnRtnInstrumentStatusResponse,


};

enum CTP_STOCK_REQUEST_TYPE
{

  TraderApiCreate = 1,


  ///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	TraderApiRelease,
	
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	TraderApiInit,
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	TraderApiJoin,
	
	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	TraderApiGetTradingDay,
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	TraderApiRegisterFront,
	
  ///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
  TraderApiRegisterNameServer,

	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	TraderApiRegisterSpi,
	
	///����˽������
	///@param nResumeType ˽�����ش���ʽ  
	///        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        THOST_TERT_RESUME:���ϴ��յ�������
	///        THOST_TERT_QUICK:ֻ���͵�¼��˽����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	TraderApiSubscribePrivateTopic,
	
	///���Ĺ�������
	///@param nResumeType �������ش���ʽ  
	///        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        THOST_TERT_RESUME:���ϴ��յ�������
	///        THOST_TERT_QUICK:ֻ���͵�¼�󹫹���������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
	TraderApiSubscribePublicTopic,

  ///�ͻ�����֤����
  TraderApiAuthenticate,

  ///�û���¼����
  TraderApiReqUserLogin,

  ///�ǳ�����
  TraderApiReqUserLogout,


  ///����MdApi
  ///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
  ///@return ��������UserApi
  ///modify for udp marketdata
  MarketDataCreate,

  ///ɾ���ӿڶ�����
  ///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
  MarketDataRelease,

  ///��ʼ��
  ///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
  MarketDataInit,

  ///�ȴ��ӿ��߳̽�������
  ///@return �߳��˳�����
  MarketDataJoin,

  ///��ȡ��ǰ������
  ///@retrun ��ȡ���Ľ�����
  ///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
  MarketDataGetTradingDay,

  ///ע��ǰ�û������ַ
  ///@param pszFrontAddress��ǰ�û������ַ��
  ///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
  ///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
  MarketDataRegisterFront,

  ///ע�����ַ����������ַ
  ///@param pszNsAddress�����ַ����������ַ��
  ///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
  ///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
  ///@remark RegisterNameServer������RegisterFront
  MarketDataRegisterNameServer,

  ///ע��ص��ӿ�
  ///@param pSpi �����Իص��ӿ����ʵ��
  MarketDataRegisterSpi,

  ///�û���¼����
  MarketDataReqUserLogin,

  ///�ǳ�����
  MarketDataReqUserLogout,

  ///�������顣
  ///@param ppInstrumentID ��ԼID  
  ///@param nCount Ҫ����/�˶�����ĺ�Լ����
  ///@remark 
  MarketDataSubscribeMarketData,

  ///�˶����顣
  ///@param ppInstrumentID ��ԼID  
  ///@param nCount Ҫ����/�˶�����ĺ�Լ����
  ///@remark 
  MarketDataUnSubscribeMarketData,



  ///�û������������
  ReqUserPasswordUpdate = 100,

  ///����¼������
  ReqOrderInsert,

  ///������������
  ReqOrderAction,

  ///��ѯ��󱨵���������
  ReqQueryMaxOrderVolume,

  ///�����ѯ����
  ReqQryOrder,

  ///�����ѯ�ɽ�
  ReqQryTrade,

  ///�����ѯͶ���ֲ߳�
  ReqQryInvestorPosition,

  ///�����ѯ�ʽ��˻�
  ReqQryTradingAccount,

  ///�����ѯͶ����
  ReqQryInvestor,

  ///�����ѯ���ױ���
  ReqQryTradingCode,

  ///�����ѯ��Լ��������
  ReqQryInstrumentCommissionRate,

  ///�����ѯ������
  ReqQryExchange,

  ///�����ѯ��Լ
  ReqQryInstrument,

  ///�����ѯ����
  ReqQryDepthMarketData,

  ///�����ѯͶ���ֲ߳���ϸ
  ReqQryInvestorPositionDetail,



};
