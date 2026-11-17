
undefined4 __fastcall FUN_004101e2(undefined4 param_1,int *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  bool bVar1;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*param_2 + 4) + (int)param_2),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar1 = std::uncaught_exception();
  this = *(basic_ostream<char,std::char_traits<char>_> **)(unaff_EBP + -0x24);
  if (!bVar1) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(this);
  }
  if (*(int **)(this + *(int *)(*(int *)this + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + *(int *)(*(int *)this + 4) + 0x38) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

