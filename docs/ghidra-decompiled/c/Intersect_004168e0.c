
/* public: class CCellRange __thiscall CCellRange::Intersect(class CCellRange const &)const  */

void __thiscall CCellRange::Intersect(CCellRange *this,CCellRange *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000008;
  
                    /* 0x168e0  387  ?Intersect@CCellRange@@QBE?AV1@ABV1@@Z */
  iVar4 = in_stack_00000008[3];
  if (*(int *)(this + 0xc) < in_stack_00000008[3]) {
    iVar4 = *(int *)(this + 0xc);
  }
  iVar5 = in_stack_00000008[2];
  if (*(int *)(this + 8) < in_stack_00000008[2]) {
    iVar5 = *(int *)(this + 8);
  }
  iVar2 = *in_stack_00000008;
  iVar3 = in_stack_00000008[1];
  if (in_stack_00000008[1] < *(int *)(this + 4)) {
    iVar3 = *(int *)(this + 4);
  }
  iVar1 = *(int *)this;
  *(int *)(param_1 + 8) = iVar5;
  if (iVar2 < iVar1) {
    iVar2 = *(int *)this;
  }
  *(int *)(param_1 + 0xc) = iVar4;
  *(int *)param_1 = iVar2;
  *(int *)(param_1 + 4) = iVar3;
  return;
}

