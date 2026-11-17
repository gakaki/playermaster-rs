
void FUN_0040fac0(void)

{
  HANDLE hObject;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *this_00;
  int iVar1;
  ulong uVar2;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var3;
  undefined4 local_234 [9];
  undefined1 local_210 [520];
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (uint)(local_210 + 0x20c);
  p_Var3 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
            *)0x0;
  uVar2 = 2;
  hObject = (HANDLE)CreateToolhelp32Snapshot();
  if (hObject == (HANDLE)0xffffffff) {
    GetLastError();
    this = FUN_00410010((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "CreateToolhelp32Snapshot failed, error code: ");
    this_00 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,uVar2);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)this_00,p_Var3);
    FUN_0041d025(local_8 ^ (uint)(local_210 + 0x20c));
    return;
  }
  local_234[0] = 0x22c;
  iVar1 = Process32FirstW(hObject,local_234);
  while( true ) {
    if (iVar1 == 0) {
      CloseHandle(hObject);
      FUN_0041d025(local_8 ^ (uint)(local_210 + 0x20c));
      return;
    }
    iVar1 = Ordinal_2948(local_210);
    if (iVar1 == 0) break;
    iVar1 = Process32NextW(hObject,local_234);
  }
  CloseHandle(hObject);
  FUN_0041d025(local_8 ^ (uint)(local_210 + 0x20c));
  return;
}

