
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CGridCellBase * __thiscall CGridCtrl::GetCell(int,int)const  */

CGridCellBase * __thiscall CGridCtrl::GetCell(CGridCtrl *this,int param_1,int param_2)

{
  int iVar1;
  CGridCellBase *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  CGridCellBase *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x17450  124  ?GetCell@CGridCtrl@@QBEPAVCGridCellBase@@HH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446eae;
  local_10 = ExceptionList;
  if ((((-1 < param_1) && (param_1 < *(int *)(this + 0x174))) && (-1 < param_2)) &&
     (param_2 < *(int *)(this + 0x17c))) {
    if (*(int *)(this + 0xe8) != 0) {
      ExceptionList = &local_10;
      local_14 = GetDefaultCell(this,(uint)(param_1 < *(int *)(this + 0x178)),
                                (uint)(param_2 < *(int *)(this + 0x180)));
      if ((`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l7::
           _local_static_guard__7__ & 1) == 0) {
        `public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l7::
        _local_static_guard__7__ =
             `public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l7::
             _local_static_guard__7__ | 1;
        Ordinal_296();
        FUN_0041d3d0((_onexit_t)&LAB_00449b90);
      }
      pCVar2 = local_14;
      _DAT_00464ff4 = param_1;
      _DAT_00464ff8 = param_2;
      _DAT_00464ffc = 0xffffffff;
      DAT_00465000 = 0;
      DAT_00465004 = (**(code **)(*(int *)local_14 + 0x58))();
      DAT_00465008 = (**(code **)(*(int *)pCVar2 + 0x4c))();
      DAT_0046500c = (**(code **)(*(int *)pCVar2 + 0x60))();
      DAT_00465010 = (**(code **)(*(int *)pCVar2 + 0x5c))();
      DAT_00465014 = (**(code **)(*(int *)pCVar2 + 0x50))();
      puVar3 = (undefined4 *)(**(code **)(*(int *)pCVar2 + 100))();
      puVar6 = &DAT_00465018;
      for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      DAT_00465074 = (**(code **)(*(int *)local_14 + 0x74))();
      Ordinal_4280();
      iVar4 = CGridCtrl::IsCellSelected(this,param_1,param_2);
      if (iVar4 != 0) {
        DAT_00465000 = DAT_00465000 | 2;
      }
      if (param_1 < *(int *)(this + 0x178)) {
        DAT_00465000 = DAT_00465000 | 0x30;
      }
      if (param_2 < *(int *)(this + 0x180)) {
        DAT_00465000 = DAT_00465000 | 0x50;
      }
      uVar5 = DAT_00465000;
      local_14 = (CGridCellBase *)param_2;
      local_20 = *(undefined4 *)(this + 0x3b4);
      local_1c = *(undefined4 *)(this + 0x3b8);
      local_18 = param_1;
      iVar4 = CCellID::operator==((CCellID *)&local_20,(CCellID *)&local_18);
      if (iVar4 != 0) {
        uVar5 = uVar5 | 1;
        DAT_00465000 = uVar5;
      }
      if (this[0x4e0] == (CGridCtrl)0x0) {
        _DAT_00464ff4 = *(undefined4 *)(*(int *)(this + 0x4bc) + param_1 * 4);
        _DAT_00464ff8 = *(undefined4 *)(*(int *)(this + 0x4c8) + param_2 * 4);
        if (*(code **)(this + 0xf0) == (code *)0x0) {
          CGridCtrl::SendDisplayRequestToParent
                    (this,&`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'
                           ::__l7::gvdi);
        }
        else {
          (**(code **)(this + 0xf0))
                    (&`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::
                      __l7::gvdi,*(undefined4 *)(this + 0xec));
        }
        _DAT_00464ff8 = param_2;
        _DAT_00464ff4 = param_1;
        uVar5 = DAT_00465000;
      }
      if ((`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l7::
           _local_static_guard__7__ & 2) == 0) {
        `public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l7::
        _local_static_guard__7__ =
             `public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l7::
             _local_static_guard__7__ | 2;
        local_8 = 0;
        CGridCell::CGridCell
                  (&`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::
                    __l21::cell);
        FUN_0041d3d0((_onexit_t)&LAB_00449b80);
        local_8 = 0xffffffff;
        uVar5 = DAT_00465000;
      }
      _DAT_004650b8 = DAT_00465004;
      _DAT_004650b4 = DAT_00465008;
      _DAT_004650c0 = DAT_0046500c;
      _DAT_004650bc = DAT_00465010;
      _DAT_004650b0 = DAT_00465014;
      _DAT_00465084 = uVar5;
      CGridCell::SetFont(&`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'
                          ::__l21::cell,(tagLOGFONTW *)&DAT_00465018);
      _DAT_004650c8 = DAT_00465074;
      Ordinal_1520(DAT_00465078);
      _DAT_004650d0 = this;
      ExceptionList = local_10;
      return (CGridCellBase *)
             &`public:_class_CGridCellBase*___thiscall_CGridCtrl::GetCell(int,int)const_'::__l21::
              cell;
    }
    if (param_1 < *(int *)(this + 0x37c)) {
      iVar4 = *(int *)(*(int *)(this + 0x378) + param_1 * 4);
      if (iVar4 == 0) {
        return (CGridCellBase *)0x0;
      }
      iVar1 = *(int *)(*(int *)(this + 0x4c8) + param_2 * 4);
      if ((-1 < iVar1) && (iVar1 < *(int *)(iVar4 + 8))) {
        return *(CGridCellBase **)(*(int *)(iVar4 + 4) + iVar1 * 4);
      }
    }
    ExceptionList = &local_10;
    Ordinal_2341(DAT_0046400c ^ (int)register0x00000010 - 4U);
  }
  ExceptionList = local_10;
  return (CGridCellBase *)0x0;
}

