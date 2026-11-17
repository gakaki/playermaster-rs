
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

_onexit_t __cdecl FUN_0041d327(_onexit_t param_1)

{
  _onexit_t p_Var1;
  PVOID pvVar2;
  PVOID *ppvVar3;
  PVOID *ppvVar4;
  PVOID local_24;
  PVOID local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004538b0;
  uStack_c = 0x41d333;
  local_20[0] = DecodePointer(DAT_004650e8);
  if (local_20[0] == (PVOID)0xffffffff) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DecodePointer(DAT_004650e8);
    local_24 = DecodePointer(DAT_004650e4);
    ppvVar4 = &local_24;
    ppvVar3 = local_20;
    pvVar2 = EncodePointer(param_1);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,ppvVar3,ppvVar4);
    DAT_004650e8 = EncodePointer(local_20[0]);
    DAT_004650e4 = EncodePointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_0041d3c7();
  }
  return p_Var1;
}

