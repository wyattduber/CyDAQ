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
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
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
	  return 32 /* 0x20 */;
        }
      else if (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))
        {
	  return 4;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
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
    case 4057:  /* *p iwmmxt_tmiatt */
    case 4056:  /* *p iwmmxt_tmiabt */
    case 4055:  /* *p iwmmxt_tmiatb */
    case 4054:  /* *p iwmmxt_tmiabb */
    case 4053:  /* *p iwmmxt_tmiaph */
    case 4052:  /* *p iwmmxt_tmia */
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
    case 567:  /* iwmmxt_tmiatt */
    case 566:  /* iwmmxt_tmiabt */
    case 565:  /* iwmmxt_tmiatb */
    case 564:  /* iwmmxt_tmiabb */
    case 563:  /* iwmmxt_tmiaph */
    case 562:  /* iwmmxt_tmia */
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
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 4099:  /* *p iwmmxt_wqmulmr */
    case 4097:  /* *p iwmmxt_wqmulm */
    case 4094:  /* *p iwmmxt_wmulwsmr */
    case 4093:  /* *p iwmmxt_wmulumr */
    case 4092:  /* *p iwmmxt_wmulsmr */
    case 4073:  /* *p iwmmxt_wsadhz */
    case 4072:  /* *p iwmmxt_wsadbz */
    case 4071:  /* *p iwmmxt_wsadh */
    case 4070:  /* *p iwmmxt_wsadb */
    case 3959:  /* *p umulv4hi3_highpart */
    case 3958:  /* *p smulv4hi3_highpart */
    case 3957:  /* *p *mulv4hi3_iwmmxt */
    case 609:  /* iwmmxt_wqmulmr */
    case 607:  /* iwmmxt_wqmulm */
    case 604:  /* iwmmxt_wmulwsmr */
    case 603:  /* iwmmxt_wmulumr */
    case 602:  /* iwmmxt_wmulsmr */
    case 583:  /* iwmmxt_wsadhz */
    case 582:  /* iwmmxt_wsadbz */
    case 581:  /* iwmmxt_wsadh */
    case 580:  /* iwmmxt_wsadb */
    case 469:  /* umulv4hi3_highpart */
    case 468:  /* smulv4hi3_highpart */
    case 467:  /* *mulv4hi3_iwmmxt */
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
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 4127:  /* *p iwmmxt_wmerge */
    case 4079:  /* *p iwmmxt_wabsdiffw */
    case 4078:  /* *p iwmmxt_wabsdiffh */
    case 4077:  /* *p iwmmxt_wabsdiffb */
    case 4076:  /* *p iwmmxt_wabsv8qi3 */
    case 4075:  /* *p iwmmxt_wabsv4hi3 */
    case 4074:  /* *p iwmmxt_wabsv2si3 */
    case 4069:  /* *p iwmmxt_walignr3 */
    case 4068:  /* *p iwmmxt_walignr2 */
    case 4067:  /* *p iwmmxt_walignr1 */
    case 4066:  /* *p iwmmxt_walignr0 */
    case 4065:  /* *p iwmmxt_walignr */
    case 4064:  /* *p iwmmxt_waligni */
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
    case 3974:  /* *p iwmmxt_tinsrw */
    case 3973:  /* *p iwmmxt_tinsrh */
    case 3972:  /* *p iwmmxt_tinsrb */
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
    case 3922:  /* *p tbcstv2si */
    case 3921:  /* *p tbcstv4hi */
    case 3920:  /* *p tbcstv8qi */
    case 637:  /* iwmmxt_wmerge */
    case 589:  /* iwmmxt_wabsdiffw */
    case 588:  /* iwmmxt_wabsdiffh */
    case 587:  /* iwmmxt_wabsdiffb */
    case 586:  /* iwmmxt_wabsv8qi3 */
    case 585:  /* iwmmxt_wabsv4hi3 */
    case 584:  /* iwmmxt_wabsv2si3 */
    case 579:  /* iwmmxt_walignr3 */
    case 578:  /* iwmmxt_walignr2 */
    case 577:  /* iwmmxt_walignr1 */
    case 576:  /* iwmmxt_walignr0 */
    case 575:  /* iwmmxt_walignr */
    case 574:  /* iwmmxt_waligni */
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
    case 484:  /* iwmmxt_tinsrw */
    case 483:  /* iwmmxt_tinsrh */
    case 482:  /* iwmmxt_tinsrb */
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
    case 429:  /* tbcstv2si */
    case 428:  /* tbcstv4hi */
    case 427:  /* tbcstv8qi */
      if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) || ((! (((((
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
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 0;
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
	  return 1;
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
	  return 1;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 0;
        }
      else if (((
#line 56 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 5;
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
	  return 5;
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
	  return 7;
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
	  return 9;
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
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 3;
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
	  return 4;
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
	  return 5;
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
	  return 1;
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
	  return 3;
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
	  return 2;
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
	  return 2;
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
#line 274 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
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
	  return 4;
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
	  return 32 /* 0x20 */;
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
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 5;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 5;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_CVTF2I)))
        {
	  return 5;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 1;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if ((((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 110 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 5;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))
        {
	  return 5;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))
        {
	  return 3;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_4))
        {
	  return 3;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 3;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 4;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 1;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)) || (((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG)) && (! (get_attr_length (insn) == 8)))))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (get_attr_is_neon_type (insn) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMMLA) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_REV) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MOV_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_ROTATE_IMM))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_ACQ)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_REL)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCSEL) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
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
	  return 2;
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
	  return 2;
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
	  return 2;
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
	  return 2;
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
	  return 4;
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
	  return 3;
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
	  return 4;
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
	  return 3;
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
	  return 3;
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
	  return 4;
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
	  return 9;
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
	  return 10 /* 0xa */;
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
	  return 0;
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
	  return 32 /* 0x20 */;
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
	  return 3;
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
	  return 4;
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
	  return 0;
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
	  return 0;
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
	  return 2;
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
	  return 2;
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
	  return 3;
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
	  return 6;
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
	  return 17 /* 0x11 */;
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
	  return 2;
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
	  return 1;
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
	  return 2;
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
	  return 3;
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
	  return 20 /* 0x14 */;
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
	  return 10 /* 0xa */;
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
	  return 97 /* 0x61 */;
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
	  return 2;
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
	  return 2;
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
	  return 8;
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
	  return 8;
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
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_EXTEND))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)) || ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (
#line 60 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 1;
        }
      else if (((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (! (
#line 60 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_MLA) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ADD))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ABD))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_CVT))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MLA))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_STEP))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITINS))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TBL))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FROM_GP))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TO_GP))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LDP)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LDP_Q))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_NEON_STP)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_STP_Q))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_1))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_2))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_3))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_4))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE2_2) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE3_3) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE4_4) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRC))
        {
	  return 2;
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
	  return 4;
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
	  return 8;
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
	  return 9;
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
	  return 19 /* 0x13 */;
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
	  return 33 /* 0x21 */;
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
	  return 4;
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
	  return 4;
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
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 9;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MCR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MRC))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)) && (get_attr_fp (insn) == FP_YES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CSEL))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_REV))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCCMPS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFX))
        {
	  return 1;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFM))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FSQRTD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 7;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 4;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 8;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    }
}

