VOID GameInfo();
VOID FASTCALL LogInGameMessages(WCHAR * Message);
BOOL FASTCALL NextGameName(LPCONTROL Box, BOOL (STDCALL * FunCallBack)(LPCONTROL, DWORD, DWORD));
BOOL FASTCALL NextGamePassword(LPCONTROL Box, BOOL (STDCALL * FunCallBack)(LPCONTROL, DWORD, DWORD));