
void __fastcall FUN_00410290(int *param_1)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004102b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}

