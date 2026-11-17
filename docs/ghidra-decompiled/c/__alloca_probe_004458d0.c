
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_res0;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&local_res0 - (int)in_EAX & ~-(uint)(&local_res0 < in_EAX));
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = _local_res0;
  return;
}

