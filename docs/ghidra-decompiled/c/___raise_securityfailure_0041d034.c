
/* Library Function - Single Match
    ___raise_securityfailure
   
   Library: Visual Studio 2012 Release */

void __cdecl ___raise_securityfailure(EXCEPTION_POINTERS *param_1)

{
  DAT_00464c74 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  __crtUnhandledException(param_1);
  if (DAT_00464c74 == 0) {
    _crt_debugger_hook(1);
  }
  __crtTerminateProcess(0xc0000409);
  return;
}

