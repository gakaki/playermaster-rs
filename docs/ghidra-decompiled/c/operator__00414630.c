
/* public: class CConfigSaveAndLoad & __thiscall CConfigSaveAndLoad::operator=(class
   CConfigSaveAndLoad const &) */

CConfigSaveAndLoad * __thiscall
CConfigSaveAndLoad::operator=(CConfigSaveAndLoad *this,CConfigSaveAndLoad *param_1)

{
  CConfigSaveAndLoad *this_00;
  CConfigSaveAndLoad *pCVar1;
  
                    /* 0x14630  30  ??4CConfigSaveAndLoad@@QAEAAV0@ABV0@@Z */
  pCVar1 = param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this_00 = this + 0x14;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  if (this_00 != param_1 + 0x14) {
    FUN_00419770(*(int **)(*(int *)this_00 + 4));
    param_1 = (CConfigSaveAndLoad *)((uint)param_1 & 0xffffff00);
    *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
    *(int *)*(int *)this_00 = *(int *)this_00;
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(this + 0x18) = 0;
    FUN_00419ab0(this_00,(int *)(pCVar1 + 0x14),param_1);
  }
  FUN_004185b0(this + 0x1c,(int *)(pCVar1 + 0x1c));
  FUN_004185b0(this + 0x28,(int *)(pCVar1 + 0x28));
  return this;
}

