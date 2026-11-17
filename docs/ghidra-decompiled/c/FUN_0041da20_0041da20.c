
void __fastcall FUN_0041da20(int *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x14);
  *(undefined ***)(piVar1 + *(int *)(*param_1 + 4) + -0x50) = &PTR_LAB_0044abd8;
  *(int *)(piVar1 + *(int *)(*param_1 + 4) + -0x54) = *(int *)(*param_1 + 4) + -0x50;
  param_1[1] = (int)&PTR_FUN_0044ab9c;
  FUN_0041daf0((int)(param_1 + 1));
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 1));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 2));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}

