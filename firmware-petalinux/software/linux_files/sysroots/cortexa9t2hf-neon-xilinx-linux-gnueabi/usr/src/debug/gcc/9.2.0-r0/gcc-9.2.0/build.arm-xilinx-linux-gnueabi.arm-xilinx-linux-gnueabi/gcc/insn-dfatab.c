/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
internal_dfa_insn_code (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mul32 cached_mul32 ATTRIBUTE_UNUSED;
  enum attr_widen_mul64 cached_widen_mul64 ATTRIBUTE_UNUSED;
  enum attr_core_cycles cached_core_cycles ATTRIBUTE_UNUSED;
  enum attr_cortex_a7_neon_type cached_cortex_a7_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a8_neon_type cached_cortex_a8_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a9_neon_type cached_cortex_a9_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a15_neon_type cached_cortex_a15_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a17_neon_type cached_cortex_a17_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a53_advsimd_type cached_cortex_a53_advsimd_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a57_neon_type cached_cortex_a57_neon_type ATTRIBUTE_UNUSED;
  enum attr_predicated cached_predicated ATTRIBUTE_UNUSED;
  enum attr_exynos_m1_neon_type cached_exynos_m1_neon_type ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;
  int cached_shift ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1862:  /* neon_udot_lanev16qi */
    case 1861:  /* neon_sdot_lanev16qi */
    case 1860:  /* neon_udot_lanev8qi */
    case 1859:  /* neon_sdot_lanev8qi */
    case 1858:  /* neon_udotv16qi */
    case 1857:  /* neon_sdotv16qi */
    case 1856:  /* neon_udotv8qi */
    case 1855:  /* neon_sdotv8qi */
      if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))
        {
	  return 242 /* 0xf2 */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4139:  /* *p iwmmxt_textrcv8qi3 */
    case 4138:  /* *p iwmmxt_textrcv4hi3 */
    case 4137:  /* *p iwmmxt_textrcv2si3 */
    case 4136:  /* *p iwmmxt_torvscv8qi3 */
    case 4135:  /* *p iwmmxt_torvscv4hi3 */
    case 4134:  /* *p iwmmxt_torvscv2si3 */
    case 4133:  /* *p iwmmxt_torcv8qi3 */
    case 4132:  /* *p iwmmxt_torcv4hi3 */
    case 4131:  /* *p iwmmxt_torcv2si3 */
    case 4130:  /* *p iwmmxt_tandcv8qi3 */
    case 4129:  /* *p iwmmxt_tandcv4hi3 */
    case 4128:  /* *p iwmmxt_tandcv2si3 */
    case 649:  /* iwmmxt_textrcv8qi3 */
    case 648:  /* iwmmxt_textrcv4hi3 */
    case 647:  /* iwmmxt_textrcv2si3 */
    case 646:  /* iwmmxt_torvscv8qi3 */
    case 645:  /* iwmmxt_torvscv4hi3 */
    case 644:  /* iwmmxt_torvscv2si3 */
    case 643:  /* iwmmxt_torcv8qi3 */
    case 642:  /* iwmmxt_torcv4hi3 */
    case 641:  /* iwmmxt_torcv2si3 */
    case 640:  /* iwmmxt_tandcv8qi3 */
    case 639:  /* iwmmxt_tandcv4hi3 */
    case 638:  /* iwmmxt_tandcv2si3 */
      if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4073:  /* *p iwmmxt_wsadhz */
    case 4072:  /* *p iwmmxt_wsadbz */
    case 4071:  /* *p iwmmxt_wsadh */
    case 4070:  /* *p iwmmxt_wsadb */
    case 583:  /* iwmmxt_wsadhz */
    case 582:  /* iwmmxt_wsadbz */
    case 581:  /* iwmmxt_wsadh */
    case 580:  /* iwmmxt_wsadb */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 6;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4057:  /* *p iwmmxt_tmiatt */
    case 4056:  /* *p iwmmxt_tmiabt */
    case 4055:  /* *p iwmmxt_tmiatb */
    case 4054:  /* *p iwmmxt_tmiabb */
    case 4053:  /* *p iwmmxt_tmiaph */
    case 4052:  /* *p iwmmxt_tmia */
    case 567:  /* iwmmxt_tmiatt */
    case 566:  /* iwmmxt_tmiabt */
    case 565:  /* iwmmxt_tmiatb */
    case 564:  /* iwmmxt_tmiabb */
    case 563:  /* iwmmxt_tmiaph */
    case 562:  /* iwmmxt_tmia */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 7;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4049:  /* *p ashldi3_di */
    case 4048:  /* *p ashlv2si3_di */
    case 4047:  /* *p ashlv4hi3_di */
    case 4046:  /* *p lshrdi3_di */
    case 4045:  /* *p lshrv2si3_di */
    case 4044:  /* *p lshrv4hi3_di */
    case 4043:  /* *p ashrdi3_di */
    case 4042:  /* *p ashrv2si3_di */
    case 4041:  /* *p ashrv4hi3_di */
    case 4040:  /* *p rordi3_di */
    case 4039:  /* *p rorv2si3_di */
    case 4038:  /* *p rorv4hi3_di */
    case 4037:  /* *p ashldi3_iwmmxt */
    case 4036:  /* *p ashlv2si3_iwmmxt */
    case 4035:  /* *p ashlv4hi3_iwmmxt */
    case 4034:  /* *p lshrdi3_iwmmxt */
    case 4033:  /* *p lshrv2si3_iwmmxt */
    case 4032:  /* *p lshrv4hi3_iwmmxt */
    case 4031:  /* *p ashrdi3_iwmmxt */
    case 4030:  /* *p ashrv2si3_iwmmxt */
    case 4029:  /* *p ashrv4hi3_iwmmxt */
    case 4028:  /* *p rordi3 */
    case 4027:  /* *p rorv2si3 */
    case 4026:  /* *p rorv4hi3 */
    case 559:  /* ashldi3_di */
    case 558:  /* ashlv2si3_di */
    case 557:  /* ashlv4hi3_di */
    case 556:  /* lshrdi3_di */
    case 555:  /* lshrv2si3_di */
    case 554:  /* lshrv4hi3_di */
    case 553:  /* ashrdi3_di */
    case 552:  /* ashrv2si3_di */
    case 551:  /* ashrv4hi3_di */
    case 550:  /* rordi3_di */
    case 549:  /* rorv2si3_di */
    case 548:  /* rorv4hi3_di */
    case 547:  /* ashldi3_iwmmxt */
    case 546:  /* ashlv2si3_iwmmxt */
    case 545:  /* ashlv4hi3_iwmmxt */
    case 544:  /* lshrdi3_iwmmxt */
    case 543:  /* lshrv2si3_iwmmxt */
    case 542:  /* lshrv4hi3_iwmmxt */
    case 541:  /* ashrdi3_iwmmxt */
    case 540:  /* ashrv2si3_iwmmxt */
    case 539:  /* ashrv4hi3_iwmmxt */
    case 538:  /* rordi3 */
    case 537:  /* rorv2si3 */
    case 536:  /* rorv4hi3 */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 2;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4127:  /* *p iwmmxt_wmerge */
    case 4069:  /* *p iwmmxt_walignr3 */
    case 4068:  /* *p iwmmxt_walignr2 */
    case 4067:  /* *p iwmmxt_walignr1 */
    case 4066:  /* *p iwmmxt_walignr0 */
    case 4065:  /* *p iwmmxt_walignr */
    case 4064:  /* *p iwmmxt_waligni */
    case 4025:  /* *p iwmmxt_wunpckelsw */
    case 4024:  /* *p iwmmxt_wunpckelsh */
    case 4023:  /* *p iwmmxt_wunpckelsb */
    case 4022:  /* *p iwmmxt_wunpckeluw */
    case 4021:  /* *p iwmmxt_wunpckeluh */
    case 4020:  /* *p iwmmxt_wunpckelub */
    case 4019:  /* *p iwmmxt_wunpckehsw */
    case 4018:  /* *p iwmmxt_wunpckehsh */
    case 4017:  /* *p iwmmxt_wunpckehsb */
    case 4016:  /* *p iwmmxt_wunpckehuw */
    case 4015:  /* *p iwmmxt_wunpckehuh */
    case 4014:  /* *p iwmmxt_wunpckehub */
    case 4013:  /* *p iwmmxt_wunpckilw */
    case 4012:  /* *p iwmmxt_wunpckilh */
    case 4011:  /* *p iwmmxt_wunpckilb */
    case 4010:  /* *p iwmmxt_wunpckihw */
    case 4009:  /* *p iwmmxt_wunpckihh */
    case 4008:  /* *p iwmmxt_wunpckihb */
    case 4007:  /* *p iwmmxt_wpackdus */
    case 4006:  /* *p iwmmxt_wpackwus */
    case 4005:  /* *p iwmmxt_wpackhus */
    case 4004:  /* *p iwmmxt_wpackdss */
    case 4003:  /* *p iwmmxt_wpackwss */
    case 4002:  /* *p iwmmxt_wpackhss */
    case 3980:  /* *p iwmmxt_wshufh */
    case 637:  /* iwmmxt_wmerge */
    case 579:  /* iwmmxt_walignr3 */
    case 578:  /* iwmmxt_walignr2 */
    case 577:  /* iwmmxt_walignr1 */
    case 576:  /* iwmmxt_walignr0 */
    case 575:  /* iwmmxt_walignr */
    case 574:  /* iwmmxt_waligni */
    case 535:  /* iwmmxt_wunpckelsw */
    case 534:  /* iwmmxt_wunpckelsh */
    case 533:  /* iwmmxt_wunpckelsb */
    case 532:  /* iwmmxt_wunpckeluw */
    case 531:  /* iwmmxt_wunpckeluh */
    case 530:  /* iwmmxt_wunpckelub */
    case 529:  /* iwmmxt_wunpckehsw */
    case 528:  /* iwmmxt_wunpckehsh */
    case 527:  /* iwmmxt_wunpckehsb */
    case 526:  /* iwmmxt_wunpckehuw */
    case 525:  /* iwmmxt_wunpckehuh */
    case 524:  /* iwmmxt_wunpckehub */
    case 523:  /* iwmmxt_wunpckilw */
    case 522:  /* iwmmxt_wunpckilh */
    case 521:  /* iwmmxt_wunpckilb */
    case 520:  /* iwmmxt_wunpckihw */
    case 519:  /* iwmmxt_wunpckihh */
    case 518:  /* iwmmxt_wunpckihb */
    case 517:  /* iwmmxt_wpackdus */
    case 516:  /* iwmmxt_wpackwus */
    case 515:  /* iwmmxt_wpackhus */
    case 514:  /* iwmmxt_wpackdss */
    case 513:  /* iwmmxt_wpackwss */
    case 512:  /* iwmmxt_wpackhss */
    case 490:  /* iwmmxt_wshufh */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 1;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4060:  /* *p iwmmxt_tmovmskw */
    case 4059:  /* *p iwmmxt_tmovmskh */
    case 4058:  /* *p iwmmxt_tmovmskb */
    case 3979:  /* *p iwmmxt_textrmw */
    case 3978:  /* *p iwmmxt_textrmsh */
    case 3977:  /* *p iwmmxt_textrmuh */
    case 3976:  /* *p iwmmxt_textrmsb */
    case 3975:  /* *p iwmmxt_textrmub */
    case 570:  /* iwmmxt_tmovmskw */
    case 569:  /* iwmmxt_tmovmskh */
    case 568:  /* iwmmxt_tmovmskb */
    case 489:  /* iwmmxt_textrmw */
    case 488:  /* iwmmxt_textrmsh */
    case 487:  /* iwmmxt_textrmuh */
    case 486:  /* iwmmxt_textrmsb */
    case 485:  /* iwmmxt_textrmub */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 4;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4126:  /* *p iwmmxt_wmiawttn */
    case 4125:  /* *p iwmmxt_wmiawtbn */
    case 4124:  /* *p iwmmxt_wmiawbtn */
    case 4123:  /* *p iwmmxt_wmiawbbn */
    case 4122:  /* *p iwmmxt_wmiawtt */
    case 4121:  /* *p iwmmxt_wmiawtb */
    case 4120:  /* *p iwmmxt_wmiawbt */
    case 4119:  /* *p iwmmxt_wmiawbb */
    case 4118:  /* *p iwmmxt_wmiattn */
    case 4117:  /* *p iwmmxt_wmiatbn */
    case 4116:  /* *p iwmmxt_wmiabtn */
    case 4115:  /* *p iwmmxt_wmiabbn */
    case 4114:  /* *p iwmmxt_wmiatt */
    case 4113:  /* *p iwmmxt_wmiatb */
    case 4112:  /* *p iwmmxt_wmiabt */
    case 4111:  /* *p iwmmxt_wmiabb */
    case 4110:  /* *p iwmmxt_wqmiattn */
    case 4109:  /* *p iwmmxt_wqmiatbn */
    case 4108:  /* *p iwmmxt_wqmiabtn */
    case 4107:  /* *p iwmmxt_wqmiabbn */
    case 4106:  /* *p iwmmxt_wqmiatt */
    case 4105:  /* *p iwmmxt_wqmiatb */
    case 4104:  /* *p iwmmxt_wqmiabt */
    case 4103:  /* *p iwmmxt_wqmiabb */
    case 4100:  /* *p iwmmxt_wqmulwmr */
    case 4098:  /* *p iwmmxt_wqmulwm */
    case 4096:  /* *p iwmmxt_wmulwl */
    case 4095:  /* *p iwmmxt_wmulwumr */
    case 4091:  /* *p iwmmxt_wmulwum */
    case 4090:  /* *p iwmmxt_wmulwsm */
    case 4089:  /* *p iwmmxt_wmaddun */
    case 4088:  /* *p iwmmxt_wmaddsn */
    case 4087:  /* *p iwmmxt_wmaddux */
    case 4086:  /* *p iwmmxt_wmaddsx */
    case 4051:  /* *p iwmmxt_wmaddu */
    case 4050:  /* *p iwmmxt_wmadds */
    case 3963:  /* *p iwmmxt_wmacuz */
    case 3962:  /* *p iwmmxt_wmacu */
    case 3961:  /* *p iwmmxt_wmacsz */
    case 3960:  /* *p iwmmxt_wmacs */
    case 636:  /* iwmmxt_wmiawttn */
    case 635:  /* iwmmxt_wmiawtbn */
    case 634:  /* iwmmxt_wmiawbtn */
    case 633:  /* iwmmxt_wmiawbbn */
    case 632:  /* iwmmxt_wmiawtt */
    case 631:  /* iwmmxt_wmiawtb */
    case 630:  /* iwmmxt_wmiawbt */
    case 629:  /* iwmmxt_wmiawbb */
    case 628:  /* iwmmxt_wmiattn */
    case 627:  /* iwmmxt_wmiatbn */
    case 626:  /* iwmmxt_wmiabtn */
    case 625:  /* iwmmxt_wmiabbn */
    case 624:  /* iwmmxt_wmiatt */
    case 623:  /* iwmmxt_wmiatb */
    case 622:  /* iwmmxt_wmiabt */
    case 621:  /* iwmmxt_wmiabb */
    case 620:  /* iwmmxt_wqmiattn */
    case 619:  /* iwmmxt_wqmiatbn */
    case 618:  /* iwmmxt_wqmiabtn */
    case 617:  /* iwmmxt_wqmiabbn */
    case 616:  /* iwmmxt_wqmiatt */
    case 615:  /* iwmmxt_wqmiatb */
    case 614:  /* iwmmxt_wqmiabt */
    case 613:  /* iwmmxt_wqmiabb */
    case 610:  /* iwmmxt_wqmulwmr */
    case 608:  /* iwmmxt_wqmulwm */
    case 606:  /* iwmmxt_wmulwl */
    case 605:  /* iwmmxt_wmulwumr */
    case 601:  /* iwmmxt_wmulwum */
    case 600:  /* iwmmxt_wmulwsm */
    case 599:  /* iwmmxt_wmaddun */
    case 598:  /* iwmmxt_wmaddsn */
    case 597:  /* iwmmxt_wmaddux */
    case 596:  /* iwmmxt_wmaddsx */
    case 561:  /* iwmmxt_wmaddu */
    case 560:  /* iwmmxt_wmadds */
    case 473:  /* iwmmxt_wmacuz */
    case 472:  /* iwmmxt_wmacu */
    case 471:  /* iwmmxt_wmacsz */
    case 470:  /* iwmmxt_wmacs */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 8;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4099:  /* *p iwmmxt_wqmulmr */
    case 4097:  /* *p iwmmxt_wqmulm */
    case 4094:  /* *p iwmmxt_wmulwsmr */
    case 4093:  /* *p iwmmxt_wmulumr */
    case 4092:  /* *p iwmmxt_wmulsmr */
    case 3959:  /* *p umulv4hi3_highpart */
    case 3958:  /* *p smulv4hi3_highpart */
    case 3957:  /* *p *mulv4hi3_iwmmxt */
    case 609:  /* iwmmxt_wqmulmr */
    case 607:  /* iwmmxt_wqmulm */
    case 604:  /* iwmmxt_wmulwsmr */
    case 603:  /* iwmmxt_wmulumr */
    case 602:  /* iwmmxt_wmulsmr */
    case 469:  /* umulv4hi3_highpart */
    case 468:  /* smulv4hi3_highpart */
    case 467:  /* *mulv4hi3_iwmmxt */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 9;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4102:  /* *p iwmmxt_waddbhusl */
    case 4101:  /* *p iwmmxt_waddbhusm */
    case 4085:  /* *p iwmmxt_avg4r */
    case 4084:  /* *p iwmmxt_avg4 */
    case 4083:  /* *p addcv2si3 */
    case 4082:  /* *p addcv4hi3 */
    case 4081:  /* *p iwmmxt_wsubaddhx */
    case 4080:  /* *p iwmmxt_waddsubhx */
    case 4063:  /* *p iwmmxt_waccw */
    case 4062:  /* *p iwmmxt_wacch */
    case 4061:  /* *p iwmmxt_waccb */
    case 4001:  /* *p *uminv8qi3_iwmmxt */
    case 4000:  /* *p *uminv4hi3_iwmmxt */
    case 3999:  /* *p *uminv2si3_iwmmxt */
    case 3998:  /* *p *sminv8qi3_iwmmxt */
    case 3997:  /* *p *sminv4hi3_iwmmxt */
    case 3996:  /* *p *sminv2si3_iwmmxt */
    case 3995:  /* *p *umaxv8qi3_iwmmxt */
    case 3994:  /* *p *umaxv4hi3_iwmmxt */
    case 3993:  /* *p *umaxv2si3_iwmmxt */
    case 3992:  /* *p *smaxv8qi3_iwmmxt */
    case 3991:  /* *p *smaxv4hi3_iwmmxt */
    case 3990:  /* *p *smaxv2si3_iwmmxt */
    case 3989:  /* *p gtv2si3 */
    case 3988:  /* *p gtv4hi3 */
    case 3987:  /* *p gtv8qi3 */
    case 3986:  /* *p gtuv2si3 */
    case 3985:  /* *p gtuv4hi3 */
    case 3984:  /* *p gtuv8qi3 */
    case 3983:  /* *p eqv2si3 */
    case 3982:  /* *p eqv4hi3 */
    case 3981:  /* *p eqv8qi3 */
    case 3971:  /* *p iwmmxt_uavgv4hi3 */
    case 3970:  /* *p iwmmxt_uavgv8qi3 */
    case 3969:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3968:  /* *p iwmmxt_uavgrndv8qi3 */
    case 3956:  /* *p ussubv2si3 */
    case 3955:  /* *p ussubv4hi3 */
    case 3954:  /* *p ussubv8qi3 */
    case 3953:  /* *p sssubv2si3 */
    case 3952:  /* *p sssubv4hi3 */
    case 3951:  /* *p sssubv8qi3 */
    case 3950:  /* *p *subv8qi3_iwmmxt */
    case 3949:  /* *p *subv4hi3_iwmmxt */
    case 3948:  /* *p *subv2si3_iwmmxt */
    case 3947:  /* *p usaddv2si3 */
    case 3946:  /* *p usaddv4hi3 */
    case 3945:  /* *p usaddv8qi3 */
    case 3944:  /* *p ssaddv2si3 */
    case 3943:  /* *p ssaddv4hi3 */
    case 3942:  /* *p ssaddv8qi3 */
    case 3941:  /* *p *addv8qi3_iwmmxt */
    case 3940:  /* *p *addv4hi3_iwmmxt */
    case 3939:  /* *p *addv2si3_iwmmxt */
    case 612:  /* iwmmxt_waddbhusl */
    case 611:  /* iwmmxt_waddbhusm */
    case 595:  /* iwmmxt_avg4r */
    case 594:  /* iwmmxt_avg4 */
    case 593:  /* addcv2si3 */
    case 592:  /* addcv4hi3 */
    case 591:  /* iwmmxt_wsubaddhx */
    case 590:  /* iwmmxt_waddsubhx */
    case 573:  /* iwmmxt_waccw */
    case 572:  /* iwmmxt_wacch */
    case 571:  /* iwmmxt_waccb */
    case 511:  /* *uminv8qi3_iwmmxt */
    case 510:  /* *uminv4hi3_iwmmxt */
    case 509:  /* *uminv2si3_iwmmxt */
    case 508:  /* *sminv8qi3_iwmmxt */
    case 507:  /* *sminv4hi3_iwmmxt */
    case 506:  /* *sminv2si3_iwmmxt */
    case 505:  /* *umaxv8qi3_iwmmxt */
    case 504:  /* *umaxv4hi3_iwmmxt */
    case 503:  /* *umaxv2si3_iwmmxt */
    case 502:  /* *smaxv8qi3_iwmmxt */
    case 501:  /* *smaxv4hi3_iwmmxt */
    case 500:  /* *smaxv2si3_iwmmxt */
    case 499:  /* gtv2si3 */
    case 498:  /* gtv4hi3 */
    case 497:  /* gtv8qi3 */
    case 496:  /* gtuv2si3 */
    case 495:  /* gtuv4hi3 */
    case 494:  /* gtuv8qi3 */
    case 493:  /* eqv2si3 */
    case 492:  /* eqv4hi3 */
    case 491:  /* eqv8qi3 */
    case 481:  /* iwmmxt_uavgv4hi3 */
    case 480:  /* iwmmxt_uavgv8qi3 */
    case 479:  /* iwmmxt_uavgrndv4hi3 */
    case 478:  /* iwmmxt_uavgrndv8qi3 */
    case 466:  /* ussubv2si3 */
    case 465:  /* ussubv4hi3 */
    case 464:  /* ussubv8qi3 */
    case 463:  /* sssubv2si3 */
    case 462:  /* sssubv4hi3 */
    case 461:  /* sssubv8qi3 */
    case 460:  /* *subv8qi3_iwmmxt */
    case 459:  /* *subv4hi3_iwmmxt */
    case 458:  /* *subv2si3_iwmmxt */
    case 457:  /* usaddv2si3 */
    case 456:  /* usaddv4hi3 */
    case 455:  /* usaddv8qi3 */
    case 454:  /* ssaddv2si3 */
    case 453:  /* ssaddv4hi3 */
    case 452:  /* ssaddv8qi3 */
    case 451:  /* *addv8qi3_iwmmxt */
    case 450:  /* *addv4hi3_iwmmxt */
    case 449:  /* *addv2si3_iwmmxt */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 5;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4079:  /* *p iwmmxt_wabsdiffw */
    case 4078:  /* *p iwmmxt_wabsdiffh */
    case 4077:  /* *p iwmmxt_wabsdiffb */
    case 4076:  /* *p iwmmxt_wabsv8qi3 */
    case 4075:  /* *p iwmmxt_wabsv4hi3 */
    case 4074:  /* *p iwmmxt_wabsv2si3 */
    case 3967:  /* *p iwmmxt_clrv2si */
    case 3966:  /* *p iwmmxt_clrv4hi */
    case 3965:  /* *p iwmmxt_clrv8qi */
    case 3964:  /* *p iwmmxt_clrdi */
    case 3938:  /* *p *xorv8qi3_iwmmxt */
    case 3937:  /* *p *xorv4hi3_iwmmxt */
    case 3936:  /* *p *xorv2si3_iwmmxt */
    case 3935:  /* *p *iorv8qi3_iwmmxt */
    case 3934:  /* *p *iorv4hi3_iwmmxt */
    case 3933:  /* *p *iorv2si3_iwmmxt */
    case 3932:  /* *p *andv8qi3_iwmmxt */
    case 3931:  /* *p *andv4hi3_iwmmxt */
    case 3930:  /* *p *andv2si3_iwmmxt */
    case 3926:  /* *p iwmmxt_nanddi3 */
    case 589:  /* iwmmxt_wabsdiffw */
    case 588:  /* iwmmxt_wabsdiffh */
    case 587:  /* iwmmxt_wabsdiffb */
    case 586:  /* iwmmxt_wabsv8qi3 */
    case 585:  /* iwmmxt_wabsv4hi3 */
    case 584:  /* iwmmxt_wabsv2si3 */
    case 477:  /* iwmmxt_clrv2si */
    case 476:  /* iwmmxt_clrv4hi */
    case 475:  /* iwmmxt_clrv8qi */
    case 474:  /* iwmmxt_clrdi */
    case 448:  /* *xorv8qi3_iwmmxt */
    case 447:  /* *xorv4hi3_iwmmxt */
    case 446:  /* *xorv2si3_iwmmxt */
    case 445:  /* *iorv8qi3_iwmmxt */
    case 444:  /* *iorv4hi3_iwmmxt */
    case 443:  /* *iorv2si3_iwmmxt */
    case 442:  /* *andv8qi3_iwmmxt */
    case 441:  /* *andv4hi3_iwmmxt */
    case 440:  /* *andv2si3_iwmmxt */
    case 433:  /* iwmmxt_nanddi3 */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 0;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 3974:  /* *p iwmmxt_tinsrw */
    case 3973:  /* *p iwmmxt_tinsrh */
    case 3972:  /* *p iwmmxt_tinsrb */
    case 3922:  /* *p tbcstv2si */
    case 3921:  /* *p tbcstv4hi */
    case 3920:  /* *p tbcstv8qi */
    case 484:  /* iwmmxt_tinsrw */
    case 483:  /* iwmmxt_tinsrh */
    case 482:  /* iwmmxt_tinsrb */
    case 429:  /* tbcstv2si */
    case 428:  /* tbcstv4hi */
    case 427:  /* tbcstv8qi */
      if ((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 3;
        }
      else if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4261:  /* *p arm_store_release_exclusivesi */
    case 4260:  /* *p arm_store_release_exclusivehi */
    case 4259:  /* *p arm_store_release_exclusiveqi */
    case 4258:  /* *p arm_store_release_exclusivedi */
    case 4257:  /* *p arm_store_exclusivedi */
    case 4256:  /* *p arm_store_exclusivesi */
    case 4255:  /* *p arm_store_exclusivehi */
    case 4254:  /* *p arm_store_exclusiveqi */
    case 4253:  /* *p arm_load_acquire_exclusivedi */
    case 4252:  /* *p arm_load_exclusivedi */
    case 4251:  /* *p arm_load_acquire_exclusivesi */
    case 4250:  /* *p arm_load_exclusivesi */
    case 4249:  /* *p arm_load_acquire_exclusivehi */
    case 4248:  /* *p arm_load_acquire_exclusiveqi */
    case 4247:  /* *p arm_load_exclusivehi */
    case 4246:  /* *p arm_load_exclusiveqi */
    case 4245:  /* *p arm_atomic_loaddi2_ldrd */
    case 4244:  /* *p atomic_storesi */
    case 4243:  /* *p atomic_storehi */
    case 4242:  /* *p atomic_storeqi */
    case 4241:  /* *p atomic_loadsi */
    case 4240:  /* *p atomic_loadhi */
    case 4239:  /* *p atomic_loadqi */
    case 3919:  /* *p *load_multiple */
    case 2763:  /* arm_store_release_exclusivesi */
    case 2762:  /* arm_store_release_exclusivehi */
    case 2761:  /* arm_store_release_exclusiveqi */
    case 2760:  /* arm_store_release_exclusivedi */
    case 2759:  /* arm_store_exclusivedi */
    case 2758:  /* arm_store_exclusivesi */
    case 2757:  /* arm_store_exclusivehi */
    case 2756:  /* arm_store_exclusiveqi */
    case 2755:  /* arm_load_acquire_exclusivedi */
    case 2754:  /* arm_load_exclusivedi */
    case 2753:  /* arm_load_acquire_exclusivesi */
    case 2752:  /* arm_load_exclusivesi */
    case 2751:  /* arm_load_acquire_exclusivehi */
    case 2750:  /* arm_load_acquire_exclusiveqi */
    case 2749:  /* arm_load_exclusivehi */
    case 2748:  /* arm_load_exclusiveqi */
    case 2747:  /* atomic_nand_fetchdi */
    case 2746:  /* atomic_nand_fetchsi */
    case 2745:  /* atomic_nand_fetchhi */
    case 2744:  /* atomic_nand_fetchqi */
    case 2743:  /* atomic_and_fetchdi */
    case 2742:  /* atomic_xor_fetchdi */
    case 2741:  /* atomic_or_fetchdi */
    case 2740:  /* atomic_sub_fetchdi */
    case 2739:  /* atomic_add_fetchdi */
    case 2738:  /* atomic_and_fetchsi */
    case 2737:  /* atomic_xor_fetchsi */
    case 2736:  /* atomic_or_fetchsi */
    case 2735:  /* atomic_sub_fetchsi */
    case 2734:  /* atomic_add_fetchsi */
    case 2733:  /* atomic_and_fetchhi */
    case 2732:  /* atomic_xor_fetchhi */
    case 2731:  /* atomic_or_fetchhi */
    case 2730:  /* atomic_sub_fetchhi */
    case 2729:  /* atomic_add_fetchhi */
    case 2728:  /* atomic_and_fetchqi */
    case 2727:  /* atomic_xor_fetchqi */
    case 2726:  /* atomic_or_fetchqi */
    case 2725:  /* atomic_sub_fetchqi */
    case 2724:  /* atomic_add_fetchqi */
    case 2723:  /* atomic_fetch_nanddi */
    case 2722:  /* atomic_fetch_nandsi */
    case 2721:  /* atomic_fetch_nandhi */
    case 2720:  /* atomic_fetch_nandqi */
    case 2719:  /* atomic_fetch_anddi */
    case 2718:  /* atomic_fetch_xordi */
    case 2717:  /* atomic_fetch_ordi */
    case 2716:  /* atomic_fetch_subdi */
    case 2715:  /* atomic_fetch_adddi */
    case 2714:  /* atomic_fetch_andsi */
    case 2713:  /* atomic_fetch_xorsi */
    case 2712:  /* atomic_fetch_orsi */
    case 2711:  /* atomic_fetch_subsi */
    case 2710:  /* atomic_fetch_addsi */
    case 2709:  /* atomic_fetch_andhi */
    case 2708:  /* atomic_fetch_xorhi */
    case 2707:  /* atomic_fetch_orhi */
    case 2706:  /* atomic_fetch_subhi */
    case 2705:  /* atomic_fetch_addhi */
    case 2704:  /* atomic_fetch_andqi */
    case 2703:  /* atomic_fetch_xorqi */
    case 2702:  /* atomic_fetch_orqi */
    case 2701:  /* atomic_fetch_subqi */
    case 2700:  /* atomic_fetch_addqi */
    case 2699:  /* atomic_nanddi */
    case 2698:  /* atomic_nandsi */
    case 2697:  /* atomic_nandhi */
    case 2696:  /* atomic_nandqi */
    case 2695:  /* atomic_anddi */
    case 2694:  /* atomic_xordi */
    case 2693:  /* atomic_ordi */
    case 2692:  /* atomic_subdi */
    case 2691:  /* atomic_adddi */
    case 2690:  /* atomic_andsi */
    case 2689:  /* atomic_xorsi */
    case 2688:  /* atomic_orsi */
    case 2687:  /* atomic_subsi */
    case 2686:  /* atomic_addsi */
    case 2685:  /* atomic_andhi */
    case 2684:  /* atomic_xorhi */
    case 2683:  /* atomic_orhi */
    case 2682:  /* atomic_subhi */
    case 2681:  /* atomic_addhi */
    case 2680:  /* atomic_andqi */
    case 2679:  /* atomic_xorqi */
    case 2678:  /* atomic_orqi */
    case 2677:  /* atomic_subqi */
    case 2676:  /* atomic_addqi */
    case 2675:  /* atomic_exchangedi */
    case 2674:  /* atomic_exchangesi */
    case 2673:  /* atomic_exchangehi */
    case 2672:  /* atomic_exchangeqi */
    case 2671:  /* atomic_compare_and_swapt1di_1 */
    case 2670:  /* atomic_compare_and_swapt1si_1 */
    case 2669:  /* atomic_compare_and_swap32di_1 */
    case 2668:  /* atomic_compare_and_swap32si_1 */
    case 2667:  /* atomic_compare_and_swapt1hi_1 */
    case 2666:  /* atomic_compare_and_swapt1qi_1 */
    case 2665:  /* atomic_compare_and_swap32hi_1 */
    case 2664:  /* atomic_compare_and_swap32qi_1 */
    case 2663:  /* arm_atomic_loaddi2_ldrd */
    case 2662:  /* atomic_storesi */
    case 2661:  /* atomic_storehi */
    case 2660:  /* atomic_storeqi */
    case 2659:  /* atomic_loadsi */
    case 2658:  /* atomic_loadhi */
    case 2657:  /* atomic_loadqi */
    case 2656:  /* *memory_barrier */
    case 1854:  /* neon_vcmlaq_lane270v4sf */
    case 1853:  /* neon_vcmlaq_lane180v4sf */
    case 1852:  /* neon_vcmlaq_lane90v4sf */
    case 1851:  /* neon_vcmlaq_lane0v4sf */
    case 1850:  /* neon_vcmlaq_lane270v8hf */
    case 1849:  /* neon_vcmlaq_lane180v8hf */
    case 1848:  /* neon_vcmlaq_lane90v8hf */
    case 1847:  /* neon_vcmlaq_lane0v8hf */
    case 1846:  /* neon_vcmla_laneq270v4hf */
    case 1845:  /* neon_vcmla_laneq180v4hf */
    case 1844:  /* neon_vcmla_laneq90v4hf */
    case 1843:  /* neon_vcmla_laneq0v4hf */
    case 1842:  /* neon_vcmla_laneq270v2sf */
    case 1841:  /* neon_vcmla_laneq180v2sf */
    case 1840:  /* neon_vcmla_laneq90v2sf */
    case 1839:  /* neon_vcmla_laneq0v2sf */
    case 1838:  /* neon_vcmla_lane270v4sf */
    case 1837:  /* neon_vcmla_lane180v4sf */
    case 1836:  /* neon_vcmla_lane90v4sf */
    case 1835:  /* neon_vcmla_lane0v4sf */
    case 1834:  /* neon_vcmla_lane270v2sf */
    case 1833:  /* neon_vcmla_lane180v2sf */
    case 1832:  /* neon_vcmla_lane90v2sf */
    case 1831:  /* neon_vcmla_lane0v2sf */
    case 1830:  /* neon_vcmla_lane270v8hf */
    case 1829:  /* neon_vcmla_lane180v8hf */
    case 1828:  /* neon_vcmla_lane90v8hf */
    case 1827:  /* neon_vcmla_lane0v8hf */
    case 1826:  /* neon_vcmla_lane270v4hf */
    case 1825:  /* neon_vcmla_lane180v4hf */
    case 1824:  /* neon_vcmla_lane90v4hf */
    case 1823:  /* neon_vcmla_lane0v4hf */
    case 1822:  /* neon_vcmla270v4sf */
    case 1821:  /* neon_vcmla180v4sf */
    case 1820:  /* neon_vcmla90v4sf */
    case 1819:  /* neon_vcmla0v4sf */
    case 1818:  /* neon_vcmla270v2sf */
    case 1817:  /* neon_vcmla180v2sf */
    case 1816:  /* neon_vcmla90v2sf */
    case 1815:  /* neon_vcmla0v2sf */
    case 1814:  /* neon_vcmla270v8hf */
    case 1813:  /* neon_vcmla180v8hf */
    case 1812:  /* neon_vcmla90v8hf */
    case 1811:  /* neon_vcmla0v8hf */
    case 1810:  /* neon_vcmla270v4hf */
    case 1809:  /* neon_vcmla180v4hf */
    case 1808:  /* neon_vcmla90v4hf */
    case 1807:  /* neon_vcmla0v4hf */
    case 1806:  /* neon_vcadd270v4sf */
    case 1805:  /* neon_vcadd90v4sf */
    case 1804:  /* neon_vcadd270v2sf */
    case 1803:  /* neon_vcadd90v2sf */
    case 1802:  /* neon_vcadd270v8hf */
    case 1801:  /* neon_vcadd90v8hf */
    case 1800:  /* neon_vcadd270v4hf */
    case 1799:  /* neon_vcadd90v4hf */
    case 917:  /* thumb2_eh_return */
    case 855:  /* *cstoresi_ne0_thumb1_insn */
    case 809:  /* no_literal_pool_sf_immediate */
    case 808:  /* no_literal_pool_df_immediate */
    case 745:  /* *cmpdf_trap_split_vfp */
    case 744:  /* *cmpdf_split_vfp */
    case 743:  /* *cmpsf_trap_split_vfp */
    case 742:  /* *cmpsf_split_vfp */
    case 425:  /* mrrc2 */
    case 424:  /* mrrc */
    case 423:  /* mcrr2 */
    case 422:  /* mcrr */
    case 421:  /* mrc2 */
    case 420:  /* mrc */
    case 419:  /* mcr2 */
    case 418:  /* mcr */
    case 417:  /* *stc */
    case 416:  /* *stc */
    case 415:  /* *stc */
    case 414:  /* *stc */
    case 413:  /* *ldc */
    case 412:  /* *ldc */
    case 411:  /* *ldc */
    case 410:  /* *ldc */
    case 409:  /* cdp2 */
    case 408:  /* cdp */
    case 407:  /* *load_multiple */
    case 326:  /* arm_eh_return */
    case 323:  /* ctzsi2 */
    case 240:  /* trap */
    case 234:  /* *stack_protect_combined_test_insn */
    case 232:  /* *stack_protect_combined_set_insn */
      if ((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 26 /* 0x1a */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      extract_constrain_insn_cached (insn);
      if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 0;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_pack (insn) == WMMXT_PACK_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_shift (insn) == WMMXT_SHIFT_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 6;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 7;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 8;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 9;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 10 /* 0xa */;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 11 /* 0xb */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 12 /* 0xc */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 13 /* 0xd */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 14 /* 0xe */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 15 /* 0xf */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 17 /* 0x11 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 18 /* 0x12 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 19 /* 0x13 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)) && ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2))))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)) && (! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2)))))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (! (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16) || (cached_type == TYPE_STORE_4)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_NO)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 25 /* 0x19 */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_MULTI) && (! (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16) || (cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16))) && (! (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((! (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_SINGLE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 45 /* 0x2d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 46 /* 0x2e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 47 /* 0x2f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 49 /* 0x31 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 53 /* 0x35 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 57 /* 0x39 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_CVTF2I)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 71 /* 0x47 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 73 /* 0x49 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 92 /* 0x5c */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 94 /* 0x5e */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 95 /* 0x5f */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 96 /* 0x60 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 97 /* 0x61 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 98 /* 0x62 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))
        {
	  return 99 /* 0x63 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))
        {
	  return 100 /* 0x64 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 101 /* 0x65 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 102 /* 0x66 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 103 /* 0x67 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 104 /* 0x68 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_4))
        {
	  return 105 /* 0x69 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 106 /* 0x6a */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 107 /* 0x6b */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 108 /* 0x6c */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 109 /* 0x6d */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 110 /* 0x6e */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX)))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 140 /* 0x8c */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 141 /* 0x8d */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 142 /* 0x8e */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 143 /* 0x8f */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 146 /* 0x92 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 149 /* 0x95 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 150 /* 0x96 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 151 /* 0x97 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 152 /* 0x98 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 153 /* 0x99 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 182 /* 0xb6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 183 /* 0xb7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 186 /* 0xba */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 187 /* 0xbb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 189 /* 0xbd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 190 /* 0xbe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 194 /* 0xc2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 196 /* 0xc4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)) || (((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG)) && (! (get_attr_length (insn) == 8)))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (get_attr_is_neon_type (insn) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND)))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS)))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL)))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMMLA) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 288 /* 0x120 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 392 /* 0x188 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 393 /* 0x189 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 447 /* 0x1bf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 448 /* 0x1c0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 449 /* 0x1c1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 450 /* 0x1c2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 451 /* 0x1c3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 452 /* 0x1c4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 453 /* 0x1c5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 454 /* 0x1c6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 455 /* 0x1c7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 456 /* 0x1c8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 457 /* 0x1c9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 458 /* 0x1ca */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 459 /* 0x1cb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 460 /* 0x1cc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 461 /* 0x1cd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 462 /* 0x1ce */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 463 /* 0x1cf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 464 /* 0x1d0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 465 /* 0x1d1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 466 /* 0x1d2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 467 /* 0x1d3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 468 /* 0x1d4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 469 /* 0x1d5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 470 /* 0x1d6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 471 /* 0x1d7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 472 /* 0x1d8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 473 /* 0x1d9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 474 /* 0x1da */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 475 /* 0x1db */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 476 /* 0x1dc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 477 /* 0x1dd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 478 /* 0x1de */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 479 /* 0x1df */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 480 /* 0x1e0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_REV) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA)))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD)))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 495 /* 0x1ef */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 496 /* 0x1f0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 497 /* 0x1f1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 498 /* 0x1f2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 499 /* 0x1f3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 500 /* 0x1f4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 501 /* 0x1f5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 502 /* 0x1f6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 503 /* 0x1f7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 504 /* 0x1f8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 505 /* 0x1f9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 506 /* 0x1fa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 507 /* 0x1fb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 508 /* 0x1fc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 509 /* 0x1fd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 510 /* 0x1fe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 511 /* 0x1ff */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 512 /* 0x200 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 513 /* 0x201 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 514 /* 0x202 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 515 /* 0x203 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 516 /* 0x204 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 517 /* 0x205 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 518 /* 0x206 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 519 /* 0x207 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 520 /* 0x208 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 521 /* 0x209 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 522 /* 0x20a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 523 /* 0x20b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 524 /* 0x20c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 525 /* 0x20d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 526 /* 0x20e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 527 /* 0x20f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 528 /* 0x210 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 529 /* 0x211 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 532 /* 0x214 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 533 /* 0x215 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 547 /* 0x223 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 548 /* 0x224 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 549 /* 0x225 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 550 /* 0x226 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 551 /* 0x227 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 552 /* 0x228 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 553 /* 0x229 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 554 /* 0x22a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 555 /* 0x22b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 556 /* 0x22c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 557 /* 0x22d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 558 /* 0x22e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 559 /* 0x22f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 560 /* 0x230 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 561 /* 0x231 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 562 /* 0x232 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 563 /* 0x233 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 564 /* 0x234 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 565 /* 0x235 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 566 /* 0x236 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 567 /* 0x237 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 568 /* 0x238 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MOV_SHIFT)))
        {
	  return 569 /* 0x239 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG)))
        {
	  return 570 /* 0x23a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 571 /* 0x23b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 572 /* 0x23c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 573 /* 0x23d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_ROTATE_IMM))
        {
	  return 574 /* 0x23e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 575 /* 0x23f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 576 /* 0x240 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_ACQ)))
        {
	  return 577 /* 0x241 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_REL)))
        {
	  return 578 /* 0x242 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 579 /* 0x243 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 580 /* 0x244 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 581 /* 0x245 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 582 /* 0x246 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 583 /* 0x247 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCSEL) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 584 /* 0x248 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 585 /* 0x249 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 586 /* 0x24a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))
        {
	  return 587 /* 0x24b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 588 /* 0x24c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 589 /* 0x24d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q)))
        {
	  return 590 /* 0x24e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 591 /* 0x24f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 592 /* 0x250 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64)))
        {
	  return 593 /* 0x251 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS)))
        {
	  return 594 /* 0x252 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64)))
        {
	  return 595 /* 0x253 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS)))
        {
	  return 596 /* 0x254 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU))
        {
	  return 597 /* 0x255 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q))
        {
	  return 598 /* 0x256 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL))
        {
	  return 599 /* 0x257 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q))
        {
	  return 600 /* 0x258 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S)))
        {
	  return 601 /* 0x259 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D)))
        {
	  return 602 /* 0x25a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q))
        {
	  return 603 /* 0x25b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q))
        {
	  return 604 /* 0x25c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 605 /* 0x25d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 606 /* 0x25e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 607 /* 0x25f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 608 /* 0x260 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 609 /* 0x261 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 610 /* 0x262 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 611 /* 0x263 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 612 /* 0x264 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 613 /* 0x265 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 614 /* 0x266 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 615 /* 0x267 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 616 /* 0x268 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 617 /* 0x269 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 618 /* 0x26a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 619 /* 0x26b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 620 /* 0x26c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 621 /* 0x26d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 622 /* 0x26e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 623 /* 0x26f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 624 /* 0x270 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 625 /* 0x271 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 626 /* 0x272 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 627 /* 0x273 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 628 /* 0x274 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 629 /* 0x275 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 630 /* 0x276 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 631 /* 0x277 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 632 /* 0x278 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 633 /* 0x279 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 634 /* 0x27a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 635 /* 0x27b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 636 /* 0x27c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 637 /* 0x27d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 638 /* 0x27e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 639 /* 0x27f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 640 /* 0x280 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 641 /* 0x281 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 642 /* 0x282 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 643 /* 0x283 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 644 /* 0x284 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 645 /* 0x285 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 646 /* 0x286 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 647 /* 0x287 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 648 /* 0x288 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 649 /* 0x289 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 650 /* 0x28a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 651 /* 0x28b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 652 /* 0x28c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 653 /* 0x28d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 654 /* 0x28e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 655 /* 0x28f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 656 /* 0x290 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 657 /* 0x291 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 658 /* 0x292 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 659 /* 0x293 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 660 /* 0x294 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 661 /* 0x295 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 662 /* 0x296 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 663 /* 0x297 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 664 /* 0x298 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 665 /* 0x299 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 666 /* 0x29a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 667 /* 0x29b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 668 /* 0x29c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 669 /* 0x29d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 670 /* 0x29e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 671 /* 0x29f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 672 /* 0x2a0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 673 /* 0x2a1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 674 /* 0x2a2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 675 /* 0x2a3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 676 /* 0x2a4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 677 /* 0x2a5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 678 /* 0x2a6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))
        {
	  return 679 /* 0x2a7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))
        {
	  return 680 /* 0x2a8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 681 /* 0x2a9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 682 /* 0x2aa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 683 /* 0x2ab */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 684 /* 0x2ac */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 685 /* 0x2ad */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 686 /* 0x2ae */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 687 /* 0x2af */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 688 /* 0x2b0 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 689 /* 0x2b1 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL)))
        {
	  return 690 /* 0x2b2 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 691 /* 0x2b3 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 692 /* 0x2b4 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 693 /* 0x2b5 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 694 /* 0x2b6 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL)))
        {
	  return 695 /* 0x2b7 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 696 /* 0x2b8 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 697 /* 0x2b9 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 698 /* 0x2ba */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 699 /* 0x2bb */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 700 /* 0x2bc */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 701 /* 0x2bd */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 702 /* 0x2be */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 703 /* 0x2bf */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 704 /* 0x2c0 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCMPS)))
        {
	  return 705 /* 0x2c1 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FMULS)))
        {
	  return 706 /* 0x2c2 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 707 /* 0x2c3 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 708 /* 0x2c4 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 709 /* 0x2c5 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 710 /* 0x2c6 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 711 /* 0x2c7 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 712 /* 0x2c8 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 713 /* 0x2c9 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FMULD)))
        {
	  return 714 /* 0x2ca */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 715 /* 0x2cb */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTD)))
        {
	  return 716 /* 0x2cc */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 717 /* 0x2cd */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 718 /* 0x2ce */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_STORED)))
        {
	  return 719 /* 0x2cf */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 720 /* 0x2d0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 721 /* 0x2d1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 722 /* 0x2d2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))
        {
	  return 723 /* 0x2d3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))
        {
	  return 724 /* 0x2d4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 725 /* 0x2d5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_EXTEND))
        {
	  return 726 /* 0x2d6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 727 /* 0x2d7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 728 /* 0x2d8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 729 /* 0x2d9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 730 /* 0x2da */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 731 /* 0x2db */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 732 /* 0x2dc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 733 /* 0x2dd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 734 /* 0x2de */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))
        {
	  return 735 /* 0x2df */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 736 /* 0x2e0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 737 /* 0x2e1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 738 /* 0x2e2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 739 /* 0x2e3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 740 /* 0x2e4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 741 /* 0x2e5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 742 /* 0x2e6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 743 /* 0x2e7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 744 /* 0x2e8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 745 /* 0x2e9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)) || ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 746 /* 0x2ea */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 747 /* 0x2eb */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (
#line 60 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 748 /* 0x2ec */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (! (
#line 60 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 749 /* 0x2ed */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 750 /* 0x2ee */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 751 /* 0x2ef */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 752 /* 0x2f0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 753 /* 0x2f1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 754 /* 0x2f2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 755 /* 0x2f3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 756 /* 0x2f4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 757 /* 0x2f5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 758 /* 0x2f6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 759 /* 0x2f7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 760 /* 0x2f8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 761 /* 0x2f9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 762 /* 0x2fa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 763 /* 0x2fb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 764 /* 0x2fc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 765 /* 0x2fd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 766 /* 0x2fe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 767 /* 0x2ff */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 768 /* 0x300 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 769 /* 0x301 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 770 /* 0x302 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 771 /* 0x303 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 772 /* 0x304 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 773 /* 0x305 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 774 /* 0x306 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 775 /* 0x307 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 776 /* 0x308 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 777 /* 0x309 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 778 /* 0x30a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 779 /* 0x30b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 780 /* 0x30c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 781 /* 0x30d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 782 /* 0x30e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 783 /* 0x30f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 784 /* 0x310 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 785 /* 0x311 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 786 /* 0x312 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE))
        {
	  return 787 /* 0x313 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 788 /* 0x314 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 789 /* 0x315 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_MLA) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG)))
        {
	  return 790 /* 0x316 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 791 /* 0x317 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC)))
        {
	  return 792 /* 0x318 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 793 /* 0x319 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY))
        {
	  return 794 /* 0x31a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ADD))
        {
	  return 795 /* 0x31b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ABD))
        {
	  return 796 /* 0x31c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE))
        {
	  return 797 /* 0x31d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX))
        {
	  return 798 /* 0x31e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD))
        {
	  return 799 /* 0x31f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND))
        {
	  return 800 /* 0x320 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_CVT))
        {
	  return 801 /* 0x321 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MUL))
        {
	  return 802 /* 0x322 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MLA))
        {
	  return 803 /* 0x323 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE))
        {
	  return 804 /* 0x324 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX))
        {
	  return 805 /* 0x325 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_STEP))
        {
	  return 806 /* 0x326 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS))
        {
	  return 807 /* 0x327 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 808 /* 0x328 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITINS))
        {
	  return 809 /* 0x329 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TBL))
        {
	  return 810 /* 0x32a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FROM_GP))
        {
	  return 811 /* 0x32b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TO_GP))
        {
	  return 812 /* 0x32c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LDP)))
        {
	  return 813 /* 0x32d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LDP_Q))
        {
	  return 814 /* 0x32e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL)))
        {
	  return 815 /* 0x32f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2))
        {
	  return 816 /* 0x330 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3))
        {
	  return 817 /* 0x331 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4))
        {
	  return 818 /* 0x332 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE))
        {
	  return 819 /* 0x333 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2))
        {
	  return 820 /* 0x334 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE))
        {
	  return 821 /* 0x335 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL))
        {
	  return 822 /* 0x336 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3))
        {
	  return 823 /* 0x337 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE))
        {
	  return 824 /* 0x338 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL))
        {
	  return 825 /* 0x339 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4))
        {
	  return 826 /* 0x33a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE))
        {
	  return 827 /* 0x33b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL))
        {
	  return 828 /* 0x33c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_NEON_STP)))
        {
	  return 829 /* 0x33d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_STP_Q))
        {
	  return 830 /* 0x33e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_1))
        {
	  return 831 /* 0x33f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_2))
        {
	  return 832 /* 0x340 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_3))
        {
	  return 833 /* 0x341 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_4))
        {
	  return 834 /* 0x342 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE))
        {
	  return 835 /* 0x343 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE2_2) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE)))
        {
	  return 836 /* 0x344 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE3_3) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE)))
        {
	  return 837 /* 0x345 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE4_4) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE)))
        {
	  return 838 /* 0x346 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 839 /* 0x347 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 840 /* 0x348 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 841 /* 0x349 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 842 /* 0x34a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 843 /* 0x34b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 844 /* 0x34c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 845 /* 0x34d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 846 /* 0x34e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 847 /* 0x34f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 848 /* 0x350 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 849 /* 0x351 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 850 /* 0x352 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q)))
        {
	  return 851 /* 0x353 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 852 /* 0x354 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 853 /* 0x355 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 854 /* 0x356 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 855 /* 0x357 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG)))
        {
	  return 856 /* 0x358 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG))
        {
	  return 857 /* 0x359 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRC))
        {
	  return 858 /* 0x35a */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 859 /* 0x35b */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 860 /* 0x35c */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 861 /* 0x35d */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 862 /* 0x35e */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 863 /* 0x35f */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 864 /* 0x360 */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 865 /* 0x361 */;
        }
      else if ((((((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 866 /* 0x362 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 867 /* 0x363 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 868 /* 0x364 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 869 /* 0x365 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 870 /* 0x366 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 871 /* 0x367 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 872 /* 0x368 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 873 /* 0x369 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 874 /* 0x36a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 875 /* 0x36b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 876 /* 0x36c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 877 /* 0x36d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 878 /* 0x36e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 879 /* 0x36f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 880 /* 0x370 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 881 /* 0x371 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 882 /* 0x372 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 883 /* 0x373 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 884 /* 0x374 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 885 /* 0x375 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 886 /* 0x376 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 887 /* 0x377 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 888 /* 0x378 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 889 /* 0x379 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 890 /* 0x37a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 891 /* 0x37b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 892 /* 0x37c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 893 /* 0x37d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 894 /* 0x37e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 895 /* 0x37f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN))
        {
	  return 896 /* 0x380 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 897 /* 0x381 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 898 /* 0x382 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 899 /* 0x383 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 900 /* 0x384 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MCR))
        {
	  return 901 /* 0x385 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MRC))
        {
	  return 902 /* 0x386 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 903 /* 0x387 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 904 /* 0x388 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)) && (get_attr_fp (insn) == FP_YES))
        {
	  return 905 /* 0x389 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 906 /* 0x38a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 907 /* 0x38b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS)))
        {
	  return 908 /* 0x38c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CSEL))
        {
	  return 909 /* 0x38d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 910 /* 0x38e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG))
        {
	  return 911 /* 0x38f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_REV))
        {
	  return 912 /* 0x390 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 913 /* 0x391 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 914 /* 0x392 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 915 /* 0x393 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 916 /* 0x394 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCCMPS)))
        {
	  return 917 /* 0x395 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 918 /* 0x396 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFX))
        {
	  return 919 /* 0x397 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFM))
        {
	  return 920 /* 0x398 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 921 /* 0x399 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 922 /* 0x39a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 923 /* 0x39b */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 924 /* 0x39c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))
        {
	  return 925 /* 0x39d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 926 /* 0x39e */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 927 /* 0x39f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FSQRTD))
        {
	  return 928 /* 0x3a0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 929 /* 0x3a1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 930 /* 0x3a2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 931 /* 0x3a3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 932 /* 0x3a4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 933 /* 0x3a5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 934 /* 0x3a6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 935 /* 0x3a7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))
        {
	  return 936 /* 0x3a8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 937 /* 0x3a9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q)))
        {
	  return 938 /* 0x3aa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 939 /* 0x3ab */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 940 /* 0x3ac */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))
        {
	  return 941 /* 0x3ad */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))
        {
	  return 942 /* 0x3ae */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 943 /* 0x3af */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 944 /* 0x3b0 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 945 /* 0x3b1 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 946 /* 0x3b2 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 947 /* 0x3b3 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 948 /* 0x3b4 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 949 /* 0x3b5 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 950 /* 0x3b6 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 951 /* 0x3b7 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))
        {
	  return 952 /* 0x3b8 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 953 /* 0x3b9 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 954 /* 0x3ba */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 955 /* 0x3bb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 956 /* 0x3bc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 957 /* 0x3bd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))
        {
	  return 958 /* 0x3be */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))
        {
	  return 959 /* 0x3bf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 960 /* 0x3c0 */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    }
}

