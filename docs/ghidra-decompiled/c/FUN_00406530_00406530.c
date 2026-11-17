
void FUN_00406530(int param_1)

{
  code *pcVar1;
  
  if (param_1 == -0x7ff8fff2) {
    param_1 = Ordinal_2343();
  }
  Ordinal_2347(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

