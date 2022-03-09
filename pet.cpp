/*
pet.dll
*/

#include <windows.h>
#pragma comment (lib, "user32.lib")

BOOL APIENTRY DllMain(HMODULE hModule,  DWORD  ul_reason_for_call, LPVOID lpReserved) {
  switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
      break;
    case DLL_PROCESS_DETACH:
      break;
    case DLL_THREAD_ATTACH:
      break;
    case DLL_THREAD_DETACH:
      break;
  }
  return TRUE;
}

extern "C" {
  __declspec(dllexport) int _cdecl Cat(LPCTSTR say) {
    MessageBox(NULL, say, "=^..^=", MB_OK);
	  return 1;
	}
}

extern "C" {
  __declspec(dllexport) int _cdecl Mouse(LPCTSTR say) {
    MessageBox(NULL, say, "<:3()~~", MB_OK);
	  return 1;
	}
}

extern "C" {
  __declspec(dllexport) int _cdecl Frog(LPCTSTR say) {
    MessageBox(NULL, say, "8)~", MB_OK);
	  return 1;
	}
}

extern "C" {
  __declspec(dllexport) int _cdecl Bird(LPCTSTR say) {
    MessageBox(NULL, say, "<(-)", MB_OK);
	  return 1;
	}
}
