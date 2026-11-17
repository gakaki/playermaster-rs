
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_0041d3ec(undefined4 param_1,int param_2,int param_3,int param_4,undefined *param_5)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    (*(code *)param_5)(param_2);
    param_2 = param_2 + param_3;
  }
  FUN_0041d440();
  return;
}

