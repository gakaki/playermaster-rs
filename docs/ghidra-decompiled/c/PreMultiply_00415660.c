
/* protected: unsigned long __thiscall CWndShadow::PreMultiply(unsigned long,unsigned char) */

ulong __thiscall CWndShadow::PreMultiply(CWndShadow *this,ulong param_1,uchar param_2)

{
  uint uVar1;
  
                    /* 0x15660  431  ?PreMultiply@CWndShadow@@IAEKKE@Z */
  uVar1 = (uint)param_2;
  return (((param_1 >> 8 & 0xff) * uVar1) / 0xff | ((param_1 & 0xff) * uVar1) / 0xff << 8) << 8 |
         ((param_1 >> 0x10 & 0xff) * uVar1) / 0xff;
}

