
/* public: class CGridCellCheck & __thiscall CGridCellCheck::operator=(class CGridCellCheck &) */

CGridCellCheck * __thiscall CGridCellCheck::operator=(CGridCellCheck *this,CGridCellCheck *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x17820  38  ??4CGridCellCheck@@QAEAAV0@AAV0@@Z */
  CGridCell::operator=((CGridCell *)this,(CGridCell *)param_1);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  uVar1 = *(undefined4 *)(param_1 + 100);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  *(undefined4 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x6c) = uVar3;
  return this;
}

