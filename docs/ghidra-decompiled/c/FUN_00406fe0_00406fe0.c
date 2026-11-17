
undefined4 __fastcall FUN_00406fe0(undefined4 param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445cea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_296(DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  Ordinal_4772(param_1,L"%.8X-%.4X-%.4X-%.2X%.2X-%.2X%.2X%.2X%.2X%.2X%.2X",*param_2,
               *(undefined2 *)(param_2 + 1),*(undefined2 *)((int)param_2 + 6),
               *(undefined1 *)(param_2 + 2),*(undefined1 *)((int)param_2 + 9),
               *(undefined1 *)((int)param_2 + 10),*(undefined1 *)((int)param_2 + 0xb),
               *(undefined1 *)(param_2 + 3),*(undefined1 *)((int)param_2 + 0xd),
               *(undefined1 *)((int)param_2 + 0xe),*(undefined1 *)((int)param_2 + 0xf));
  ExceptionList = local_10;
  return param_1;
}

