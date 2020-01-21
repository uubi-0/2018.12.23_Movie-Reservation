#pragma once
class CSocServer : public CSocket
{
	HWND m_hWnd;
public:
	CSocCom m_socCom[10];
	int wait = 0;
	CSocServer();
	~CSocServer();
	void Init(HWND hWnd);
	virtual void OnAccept(int nErrorCode);
	CSocCom* GetAcceptSocCom();
};

