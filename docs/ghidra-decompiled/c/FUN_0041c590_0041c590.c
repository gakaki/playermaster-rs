
void FUN_0041c590(void)

{
  int iVar1;
  undefined1 local_238 [8];
  double local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c [4];
  wchar_t local_218 [2];
  wchar_t awStack_214 [2];
  wchar_t awStack_210 [2];
  wchar_t awStack_20c [2];
  wchar_t local_208 [2];
  wchar_t awStack_204 [2];
  wchar_t awStack_200 [2];
  wchar_t awStack_1fc [2];
  wchar_t local_1f8 [2];
  wchar_t awStack_1f4 [2];
  wchar_t awStack_1f0 [2];
  wchar_t awStack_1ec [2];
  wchar_t local_1e8 [4];
  wchar_t local_1e0 [2];
  wchar_t local_1dc;
  undefined1 local_1da [450];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044767c;
  local_10 = ExceptionList;
  local_18 = DAT_0046400c ^ (uint)(local_1da + 0x1d6);
  ExceptionList = &local_10;
  local_228 = 0;
  Ordinal_296(local_18);
  local_8 = 0;
  iVar1 = PdhOpenQueryW(0,0,&local_220);
  if (iVar1 == 0) {
    local_1e0[0] = u__Processor__Total____Idle_Time_0044fcfc[0x1c];
    local_1e0[1] = u__Processor__Total____Idle_Time_0044fcfc[0x1d];
    local_218[0] = u__Processor__Total____Idle_Time_0044fcfc[0];
    local_218[1] = u__Processor__Total____Idle_Time_0044fcfc[1];
    awStack_214[0] = u__Processor__Total____Idle_Time_0044fcfc[2];
    awStack_214[1] = u__Processor__Total____Idle_Time_0044fcfc[3];
    awStack_210[0] = u__Processor__Total____Idle_Time_0044fcfc[4];
    awStack_210[1] = u__Processor__Total____Idle_Time_0044fcfc[5];
    awStack_20c[0] = u__Processor__Total____Idle_Time_0044fcfc[6];
    awStack_20c[1] = u__Processor__Total____Idle_Time_0044fcfc[7];
    local_1dc = u__Processor__Total____Idle_Time_0044fcfc[0x1e];
    local_208[0] = u__Processor__Total____Idle_Time_0044fcfc[8];
    local_208[1] = u__Processor__Total____Idle_Time_0044fcfc[9];
    awStack_204[0] = u__Processor__Total____Idle_Time_0044fcfc[10];
    awStack_204[1] = u__Processor__Total____Idle_Time_0044fcfc[0xb];
    awStack_200[0] = u__Processor__Total____Idle_Time_0044fcfc[0xc];
    awStack_200[1] = u__Processor__Total____Idle_Time_0044fcfc[0xd];
    awStack_1fc[0] = u__Processor__Total____Idle_Time_0044fcfc[0xe];
    awStack_1fc[1] = u__Processor__Total____Idle_Time_0044fcfc[0xf];
    local_1f8[0] = u__Processor__Total____Idle_Time_0044fcfc[0x10];
    local_1f8[1] = u__Processor__Total____Idle_Time_0044fcfc[0x11];
    awStack_1f4[0] = u__Processor__Total____Idle_Time_0044fcfc[0x12];
    awStack_1f4[1] = u__Processor__Total____Idle_Time_0044fcfc[0x13];
    awStack_1f0[0] = u__Processor__Total____Idle_Time_0044fcfc[0x14];
    awStack_1f0[1] = u__Processor__Total____Idle_Time_0044fcfc[0x15];
    awStack_1ec[0] = u__Processor__Total____Idle_Time_0044fcfc[0x16];
    awStack_1ec[1] = u__Processor__Total____Idle_Time_0044fcfc[0x17];
    local_1e8[0] = u__Processor__Total____Idle_Time_0044fcfc[0x18];
    local_1e8[1] = u__Processor__Total____Idle_Time_0044fcfc[0x19];
    local_1e8[2] = u__Processor__Total____Idle_Time_0044fcfc[0x1a];
    local_1e8[3] = u__Processor__Total____Idle_Time_0044fcfc[0x1b];
    memset(local_1da,0,0x1c2);
    iVar1 = PdhAddCounterW(local_220,local_218,0,&local_224);
    if (iVar1 == 0) {
      iVar1 = PdhCollectQueryData(local_220);
      if (iVar1 == 0) {
        Sleep(1000);
        iVar1 = PdhCollectQueryData(local_220);
        if (iVar1 == 0) {
          iVar1 = PdhGetFormattedCounterValue(local_224,0x200,0,local_238);
          if (iVar1 == 0) {
            PdhCloseQuery(local_220);
            Ordinal_4772(local_21c,L"%.0f%%",DAT_0044fec0 - local_230);
          }
          else {
            PdhCloseQuery(local_220);
            Ordinal_1520();
          }
        }
        else {
          PdhCloseQuery(local_220);
          Ordinal_1520(L"Error collecting updated data.");
        }
      }
      else {
        PdhCloseQuery(local_220);
        Ordinal_1520(L"Error collecting initial data.");
      }
    }
    else {
      PdhCloseQuery();
      Ordinal_1520(L"Error adding counter.");
    }
  }
  else {
    Ordinal_1520(L"Error opening query.");
  }
  Ordinal_280(local_21c);
  Ordinal_1042();
  ExceptionList = local_10;
  FUN_0041d025(local_18 ^ (uint)(local_1da + 0x1d6));
  return;
}

