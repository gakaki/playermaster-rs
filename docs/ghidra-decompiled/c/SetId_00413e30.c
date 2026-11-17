
/* public: void __thiscall CSchedule::SetId(struct _GUID const &) */

void __thiscall CSchedule::SetId(CSchedule *this,_GUID *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x13e30  519  ?SetId@CSchedule@@QAEXABU_GUID@@@Z */
  uVar1 = *(undefined4 *)&param_1->Data2;
  uVar2 = *(undefined4 *)param_1->Data4;
  uVar3 = *(undefined4 *)(param_1->Data4 + 4);
  *(ulong *)(this + 4) = param_1->Data1;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}

