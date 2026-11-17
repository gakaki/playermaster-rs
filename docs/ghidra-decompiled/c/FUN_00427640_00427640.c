
float10 __fastcall FUN_00427640(int param_1)

{
  uint *puVar1;
  float10 fVar2;
  
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x5c) || ((code *)puVar1[0x16] == (code *)0x0)) {
    return (float10)0;
  }
  fVar2 = (float10)(*(code *)puVar1[0x16])(puVar1);
  return fVar2;
}

