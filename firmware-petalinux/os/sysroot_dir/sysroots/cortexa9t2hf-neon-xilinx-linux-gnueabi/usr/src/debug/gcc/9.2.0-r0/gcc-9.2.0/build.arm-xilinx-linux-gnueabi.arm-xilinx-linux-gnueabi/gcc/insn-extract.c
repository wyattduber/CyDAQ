/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 4316:  /* *p arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4261:  /* *p arm_store_release_exclusivesi */
    case 4260:  /* *p arm_store_release_exclusivehi */
    case 4259:  /* *p arm_store_release_exclusiveqi */
    case 4258:  /* *p arm_store_release_exclusivedi */
    case 4257:  /* *p arm_store_exclusivedi */
    case 4256:  /* *p arm_store_exclusivesi */
    case 4255:  /* *p arm_store_exclusivehi */
    case 4254:  /* *p arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4230:  /* *p *thumb2_mulsi_short */
    case 4229:  /* *p *thumb2_subsi_short */
    case 4228:  /* *p *thumb2_addsi_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4227:  /* *p *thumb2_movsi_shortim */
    case 4226:  /* *p *thumb2_movhi_shortim */
    case 4225:  /* *p *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4224:  /* *p *thumb2_shiftsi3_short */
    case 4223:  /* *p *thumb2_alusi3_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4207:  /* *p *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4182:  /* *p *fnmadddf4 */
    case 4181:  /* *p *fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4180:  /* *p *fnmsubdf4 */
    case 4179:  /* *p *fnmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4178:  /* *p *fmsubdf4 */
    case 4177:  /* *p *fmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4174:  /* *p *muldf3negdfsubdf_vfp */
    case 4173:  /* *p *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4172:  /* *p *fmuldf3negdfadddf_vfp */
    case 4171:  /* *p *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4139:  /* *p iwmmxt_textrcv8qi3 */
    case 4138:  /* *p iwmmxt_textrcv4hi3 */
    case 4137:  /* *p iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4127:  /* *p iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 4118:  /* *p iwmmxt_wmiattn */
    case 4117:  /* *p iwmmxt_wmiatbn */
    case 4116:  /* *p iwmmxt_wmiabtn */
    case 4115:  /* *p iwmmxt_wmiabbn */
    case 4114:  /* *p iwmmxt_wmiatt */
    case 4113:  /* *p iwmmxt_wmiatb */
    case 4112:  /* *p iwmmxt_wmiabt */
    case 4111:  /* *p iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 4110:  /* *p iwmmxt_wqmiattn */
    case 4109:  /* *p iwmmxt_wqmiatbn */
    case 4108:  /* *p iwmmxt_wqmiabtn */
    case 4107:  /* *p iwmmxt_wqmiabbn */
    case 4106:  /* *p iwmmxt_wqmiatt */
    case 4105:  /* *p iwmmxt_wqmiatb */
    case 4104:  /* *p iwmmxt_wqmiabt */
    case 4103:  /* *p iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4102:  /* *p iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4101:  /* *p iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4085:  /* *p iwmmxt_avg4r */
    case 4084:  /* *p iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4083:  /* *p addcv2si3 */
    case 4082:  /* *p addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4081:  /* *p iwmmxt_wsubaddhx */
    case 4080:  /* *p iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4069:  /* *p iwmmxt_walignr3 */
    case 4068:  /* *p iwmmxt_walignr2 */
    case 4067:  /* *p iwmmxt_walignr1 */
    case 4066:  /* *p iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4065:  /* *p iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4064:  /* *p iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4057:  /* *p iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4056:  /* *p iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4055:  /* *p iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4126:  /* *p iwmmxt_wmiawttn */
    case 4125:  /* *p iwmmxt_wmiawtbn */
    case 4124:  /* *p iwmmxt_wmiawbtn */
    case 4123:  /* *p iwmmxt_wmiawbbn */
    case 4122:  /* *p iwmmxt_wmiawtt */
    case 4121:  /* *p iwmmxt_wmiawtb */
    case 4120:  /* *p iwmmxt_wmiawbt */
    case 4119:  /* *p iwmmxt_wmiawbb */
    case 4054:  /* *p iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4053:  /* *p iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 4052:  /* *p iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4089:  /* *p iwmmxt_wmaddun */
    case 4088:  /* *p iwmmxt_wmaddsn */
    case 4087:  /* *p iwmmxt_wmaddux */
    case 4086:  /* *p iwmmxt_wmaddsx */
    case 4051:  /* *p iwmmxt_wmaddu */
    case 4050:  /* *p iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4192:  /* *p fixuns_truncdfsi2 */
    case 4191:  /* *p fixuns_truncsfsi2 */
    case 4190:  /* *p *truncsidf2_vfp */
    case 4189:  /* *p *truncsisf2_vfp */
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
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3979:  /* *p iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3978:  /* *p iwmmxt_textrmsh */
    case 3977:  /* *p iwmmxt_textrmuh */
    case 3976:  /* *p iwmmxt_textrmsb */
    case 3975:  /* *p iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3974:  /* *p iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3973:  /* *p iwmmxt_tinsrh */
    case 3972:  /* *p iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4095:  /* *p iwmmxt_wmulwumr */
    case 4094:  /* *p iwmmxt_wmulwsmr */
    case 4093:  /* *p iwmmxt_wmulumr */
    case 4092:  /* *p iwmmxt_wmulsmr */
    case 3969:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3968:  /* *p iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4244:  /* *p atomic_storesi */
    case 4243:  /* *p atomic_storehi */
    case 4242:  /* *p atomic_storeqi */
    case 4241:  /* *p atomic_loadsi */
    case 4240:  /* *p atomic_loadhi */
    case 4239:  /* *p atomic_loadqi */
    case 4100:  /* *p iwmmxt_wqmulwmr */
    case 4099:  /* *p iwmmxt_wqmulmr */
    case 4098:  /* *p iwmmxt_wqmulwm */
    case 4097:  /* *p iwmmxt_wqmulm */
    case 4073:  /* *p iwmmxt_wsadhz */
    case 4072:  /* *p iwmmxt_wsadbz */
    case 3989:  /* *p gtv2si3 */
    case 3988:  /* *p gtv4hi3 */
    case 3987:  /* *p gtv8qi3 */
    case 3986:  /* *p gtuv2si3 */
    case 3985:  /* *p gtuv4hi3 */
    case 3984:  /* *p gtuv8qi3 */
    case 3983:  /* *p eqv2si3 */
    case 3982:  /* *p eqv4hi3 */
    case 3981:  /* *p eqv8qi3 */
    case 3980:  /* *p iwmmxt_wshufh */
    case 3963:  /* *p iwmmxt_wmacuz */
    case 3961:  /* *p iwmmxt_wmacsz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4071:  /* *p iwmmxt_wsadh */
    case 4070:  /* *p iwmmxt_wsadb */
    case 3962:  /* *p iwmmxt_wmacu */
    case 3960:  /* *p iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4091:  /* *p iwmmxt_wmulwum */
    case 4090:  /* *p iwmmxt_wmulwsm */
    case 4079:  /* *p iwmmxt_wabsdiffw */
    case 4078:  /* *p iwmmxt_wabsdiffh */
    case 4077:  /* *p iwmmxt_wabsdiffb */
    case 3971:  /* *p iwmmxt_uavgv4hi3 */
    case 3970:  /* *p iwmmxt_uavgv8qi3 */
    case 3959:  /* *p umulv4hi3_highpart */
    case 3958:  /* *p smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3926:  /* *p iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3919:  /* *p *load_multiple */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3914:  /* *p *stm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3913:  /* *p *stm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3912:  /* *p *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3911:  /* *p *ldm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3918:  /* *p *stm2_db_update */
    case 3910:  /* *p *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3917:  /* *p *stm2_db */
    case 3909:  /* *p *stm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3916:  /* *p *ldm2_db_update */
    case 3908:  /* *p *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3915:  /* *p *ldm2_db */
    case 3907:  /* *p *ldm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3906:  /* *p *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3905:  /* *p *stm2_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3904:  /* *p *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3903:  /* *p *ldm2_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3898:  /* *p *stm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3897:  /* *p *stm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3896:  /* *p *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3895:  /* *p *ldm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3902:  /* *p *stm3_db_update */
    case 3894:  /* *p *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3901:  /* *p *stm3_db */
    case 3893:  /* *p *stm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3900:  /* *p *ldm3_db_update */
    case 3892:  /* *p *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3899:  /* *p *ldm3_db */
    case 3891:  /* *p *ldm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3890:  /* *p *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3889:  /* *p *stm3_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3888:  /* *p *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3887:  /* *p *ldm3_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3882:  /* *p *stm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3881:  /* *p *stm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3880:  /* *p *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3879:  /* *p *ldm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3886:  /* *p *stm4_db_update */
    case 3878:  /* *p *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3885:  /* *p *stm4_db */
    case 3877:  /* *p *stm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3884:  /* *p *ldm4_db_update */
    case 3876:  /* *p *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3883:  /* *p *ldm4_db */
    case 3875:  /* *p *ldm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3874:  /* *p *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3873:  /* *p *stm4_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3872:  /* *p *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3871:  /* *p *ldm4_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3870:  /* *p *arm_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3869:  /* *p *arm_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3868:  /* *p *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3867:  /* *p *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3866:  /* *p *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3865:  /* *p *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3864:  /* *p *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3863:  /* *p *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3861:  /* *p *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3857:  /* *p *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3856:  /* *p *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3855:  /* *p *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 3854:  /* *p *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 3853:  /* *p *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3852:  /* *p *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3851:  /* *p *and_shiftsi */
    case 3850:  /* *p *eor_shiftsi */
    case 3849:  /* *p *orr_shiftsi */
    case 3848:  /* *p *rsb_shiftsi */
    case 3847:  /* *p *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4170:  /* *p *muldf3subdf_vfp */
    case 4169:  /* *p *mulsf3subsf_vfp */
    case 4168:  /* *p *muldf3adddf_vfp */
    case 4167:  /* *p *mulsf3addsf_vfp */
    case 3846:  /* *p *and_multsi */
    case 3845:  /* *p *eor_multsi */
    case 3844:  /* *p *orr_multsi */
    case 3843:  /* *p *rsb_multsi */
    case 3842:  /* *p *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3841:  /* *p *load_indirect_jump */
    case 3840:  /* *p *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4217:  /* *p *thumb2_pop_single */
    case 3967:  /* *p iwmmxt_clrv2si */
    case 3966:  /* *p iwmmxt_clrv4hi */
    case 3965:  /* *p iwmmxt_clrv8qi */
    case 3964:  /* *p iwmmxt_clrdi */
    case 3860:  /* *p load_tp_hard */
    case 3839:  /* *p probe_stack */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4136:  /* *p iwmmxt_torvscv8qi3 */
    case 4135:  /* *p iwmmxt_torvscv4hi3 */
    case 4134:  /* *p iwmmxt_torvscv2si3 */
    case 4133:  /* *p iwmmxt_torcv8qi3 */
    case 4132:  /* *p iwmmxt_torcv4hi3 */
    case 4131:  /* *p iwmmxt_torcv2si3 */
    case 4130:  /* *p iwmmxt_tandcv8qi3 */
    case 4129:  /* *p iwmmxt_tandcv4hi3 */
    case 4128:  /* *p iwmmxt_tandcv2si3 */
    case 3838:  /* *p *arm_simple_return */
    case 3837:  /* *p *arm_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3835:  /* *p *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4202:  /* *p *cmpdf_trap_vfp */
    case 4201:  /* *p *cmpdf_vfp */
    case 4200:  /* *p *cmpsf_trap_vfp */
    case 4199:  /* *p *cmpsf_vfp */
    case 3834:  /* *p *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3828:  /* *p tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3827:  /* *p pic_add_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3836:  /* *p *arm_jump */
    case 3818:  /* *p *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4216:  /* *p *thumb2_neg_abssi2 */
    case 3803:  /* *p *arm_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4232:  /* *p *thumb2_negsi2_short */
    case 4231:  /* *p *thumb2_one_cmplsi2_short */
    case 4215:  /* *p *thumb2_abssi2 */
    case 3802:  /* *p *arm_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4176:  /* *p fmadf4 */
    case 4175:  /* *p fmasf4 */
    case 3798:  /* *p extzv_t2 */
    case 3797:  /* *p *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4249:  /* *p arm_load_acquire_exclusivehi */
    case 4248:  /* *p arm_load_acquire_exclusiveqi */
    case 4247:  /* *p arm_load_exclusivehi */
    case 4246:  /* *p arm_load_exclusiveqi */
    case 3794:  /* *p unaligned_loadhiu */
    case 3793:  /* *p unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4253:  /* *p arm_load_acquire_exclusivedi */
    case 4252:  /* *p arm_load_exclusivedi */
    case 4251:  /* *p arm_load_acquire_exclusivesi */
    case 4250:  /* *p arm_load_exclusivesi */
    case 4245:  /* *p arm_atomic_loaddi2_ldrd */
    case 4213:  /* *p rintdf2 */
    case 4212:  /* *p nearbyintdf2 */
    case 4211:  /* *p btruncdf2 */
    case 4210:  /* *p rintsf2 */
    case 4209:  /* *p nearbyintsf2 */
    case 4208:  /* *p btruncsf2 */
    case 4076:  /* *p iwmmxt_wabsv8qi3 */
    case 4075:  /* *p iwmmxt_wabsv4hi3 */
    case 4074:  /* *p iwmmxt_wabsv2si3 */
    case 4063:  /* *p iwmmxt_waccw */
    case 4062:  /* *p iwmmxt_wacch */
    case 4061:  /* *p iwmmxt_waccb */
    case 4060:  /* *p iwmmxt_tmovmskw */
    case 4059:  /* *p iwmmxt_tmovmskh */
    case 4058:  /* *p iwmmxt_tmovmskb */
    case 3859:  /* *p rbitsi2 */
    case 3796:  /* *p unaligned_storehi */
    case 3795:  /* *p unaligned_storesi */
    case 3792:  /* *p unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3791:  /* *p *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3790:  /* *p *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3789:  /* *p *satsi_smax_shift */
    case 3788:  /* *p *satsi_smin_shift */
    case 3787:  /* *p *satsi_smax_shift */
    case 3786:  /* *p *satsi_smin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3785:  /* *p *satsi_smax */
    case 3784:  /* *p *satsi_smin */
    case 3783:  /* *p *satsi_smax */
    case 3782:  /* *p *satsi_smin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4317:  /* *p arm_usatsihi */
    case 4222:  /* *p thumb2_zero_extendqisi2_v6 */
    case 4221:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 4220:  /* *p *thumb2_extendqisi_v6 */
    case 4198:  /* *p *sqrtdf2_vfp */
    case 4197:  /* *p *sqrtsf2_vfp */
    case 4196:  /* *p floatunssidf2 */
    case 4195:  /* *p floatunssisf2 */
    case 4194:  /* *p *floatsidf2_vfp */
    case 4193:  /* *p *floatsisf2_vfp */
    case 4188:  /* *p truncsfhf2 */
    case 4187:  /* *p *extendhfdf2 */
    case 4186:  /* *p *truncdfhf2 */
    case 4185:  /* *p extendhfsf2 */
    case 4184:  /* *p *truncdfsf2_vfp */
    case 4183:  /* *p *extendsfdf2_vfp */
    case 4154:  /* *p *negdf2_vfp */
    case 4153:  /* *p *negsf2_vfp */
    case 4152:  /* *p *absdf2_vfp */
    case 4151:  /* *p *abssf2_vfp */
    case 3922:  /* *p tbcstv2si */
    case 3921:  /* *p tbcstv4hi */
    case 3920:  /* *p tbcstv8qi */
    case 3862:  /* *p *arm_rev */
    case 3858:  /* *p clzsi2 */
    case 3823:  /* *p *arm_extendqisi_v6 */
    case 3822:  /* *p *arm_extendqisi */
    case 3821:  /* *p *arm_extendqihi_insn */
    case 3820:  /* *p *arm_extendhisi2_v6 */
    case 3819:  /* *p *arm_extendhisi2 */
    case 3816:  /* *p *arm_zero_extendqisi2_v6 */
    case 3815:  /* *p *arm_zero_extendqisi2 */
    case 3813:  /* *p *arm_zero_extendhisi2_v6 */
    case 3812:  /* *p *arm_zero_extendhisi2 */
    case 3811:  /* *p extendsidi2 */
    case 3810:  /* *p extendhidi2 */
    case 3809:  /* *p extendqidi2 */
    case 3808:  /* *p zero_extendsidi2 */
    case 3807:  /* *p zero_extendhidi2 */
    case 3806:  /* *p zero_extendqidi2 */
    case 3805:  /* *p *arm_one_cmplsi2 */
    case 3804:  /* *p *one_cmpldi2_insn */
    case 3801:  /* *p *arm_negsi2 */
    case 3781:  /* *p *smin_0 */
    case 3780:  /* *p *smax_m1 */
    case 3779:  /* *p *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3778:  /* *p *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3771:  /* *p andsi_not_shiftsi_si_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[3] = 3;
      break;

    case 3770:  /* *p andsi_not_shiftsi_si_scc_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4238:  /* *p *orsi_not_shiftsi_si */
    case 4214:  /* *p *thumb_andsi_not_shiftsi_si */
    case 3769:  /* *p andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4237:  /* *p *orsi_notsi_si */
    case 3776:  /* *p *xordi_sesidi_di */
    case 3775:  /* *p *xordi_zesidi_di */
    case 3773:  /* *p *iordi_sesidi_di */
    case 3772:  /* *p *iordi_zesidi_di */
    case 3768:  /* *p andsi_notsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4235:  /* *p *iordi_notdi_zesidi */
    case 3766:  /* *p *anddi_notdi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4236:  /* *p *iordi_notsesidi_di */
    case 4234:  /* *p *iordi_notzesidi_di */
    case 3767:  /* *p *anddi_notsesidi_di */
    case 3765:  /* *p *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4233:  /* *p *iordi_notdi_di */
    case 4206:  /* *p *combine_vcvt_f64_s32 */
    case 4205:  /* *p *combine_vcvt_f64_u32 */
    case 4204:  /* *p *combine_vcvt_f32_s32 */
    case 4203:  /* *p *combine_vcvt_f32_u32 */
    case 4165:  /* *p *muldf3negdf_vfp */
    case 4163:  /* *p *mulsf3negsf_vfp */
    case 3824:  /* *p *arm_extendqisi2addsi */
    case 3817:  /* *p *arm_zero_extendqisi2addsi */
    case 3814:  /* *p *arm_zero_extendhisi2addsi */
    case 3764:  /* *p *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3763:  /* *p insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3762:  /* *p insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3761:  /* *p *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3759:  /* *p *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3758:  /* *p *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3757:  /* *p maddhidi4 */
    case 3756:  /* *p *maddhisi4tt */
    case 3755:  /* *p *maddhisi4tb */
    case 3754:  /* *p maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3749:  /* *p *umulsi3_highpart_v6 */
    case 3748:  /* *p *umulsi3_highpart_nov6 */
    case 3747:  /* *p *smulsi3_highpart_v6 */
    case 3746:  /* *p *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

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
    case 3753:  /* *p *mulhisi3tt */
    case 3752:  /* *p *mulhisi3bt */
    case 3751:  /* *p *mulhisi3tb */
    case 3750:  /* *p mulhisi3 */
    case 3743:  /* *p *umulsidi3_v6 */
    case 3742:  /* *p *umulsidi3_nov6 */
    case 3741:  /* *p *mulsidi3_v6 */
    case 3740:  /* *p *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3745:  /* *p *umulsidi3adddi_v6 */
    case 3744:  /* *p *umulsidi3adddi */
    case 3739:  /* *p *mulsidi3adddi_v6 */
    case 3738:  /* *p *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3737:  /* *p *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3736:  /* *p *mulsi3addsi_v6 */
    case 3735:  /* *p *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3733:  /* *p *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3730:  /* *p *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3731:  /* *p *rsbsi3_carryin_shift */
    case 3728:  /* *p *addsi3_carryin_shift_geu */
    case 3727:  /* *p *addsi3_carryin_shift_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3726:  /* *p *addsi3_carryin_alt2_geu */
    case 3725:  /* *p *addsi3_carryin_alt2_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4166:  /* *p *negmuldf3_vfp */
    case 4164:  /* *p *negmulsf3_vfp */
    case 3729:  /* *p *subsi3_carryin */
    case 3724:  /* *p *addsi3_carryin_geu */
    case 3723:  /* *p *addsi3_carryin_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3722:  /* *p *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3721:  /* *p *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3720:  /* *p *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3719:  /* *p *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4315:  /* *p sssubsa3 */
    case 4314:  /* *p sssubsq3 */
    case 4313:  /* *p sssubha3 */
    case 4312:  /* *p sssubv2ha3 */
    case 4311:  /* *p sssubhq3 */
    case 4310:  /* *p sssubqq3 */
    case 4309:  /* *p sssubv2hq3 */
    case 4308:  /* *p sssubv4qq3 */
    case 4307:  /* *p ussubuha3 */
    case 4306:  /* *p ussubv2uha3 */
    case 4305:  /* *p ussubuhq3 */
    case 4304:  /* *p ussubuqq3 */
    case 4303:  /* *p ussubv2uhq3 */
    case 4302:  /* *p ussubv4uqq3 */
    case 4301:  /* *p subv2ha3 */
    case 4300:  /* *p subv2hq3 */
    case 4299:  /* *p subv4qq3 */
    case 4298:  /* *p subusa3 */
    case 4297:  /* *p subuha3 */
    case 4296:  /* *p subsa3 */
    case 4295:  /* *p subha3 */
    case 4294:  /* *p subusq3 */
    case 4293:  /* *p subuhq3 */
    case 4292:  /* *p subuqq3 */
    case 4291:  /* *p subsq3 */
    case 4290:  /* *p subhq3 */
    case 4289:  /* *p subqq3 */
    case 4288:  /* *p ssaddsa3 */
    case 4287:  /* *p ssaddsq3 */
    case 4286:  /* *p ssaddha3 */
    case 4285:  /* *p ssaddv2ha3 */
    case 4284:  /* *p ssaddhq3 */
    case 4283:  /* *p ssaddqq3 */
    case 4282:  /* *p ssaddv2hq3 */
    case 4281:  /* *p ssaddv4qq3 */
    case 4280:  /* *p usadduha3 */
    case 4279:  /* *p usaddv2uha3 */
    case 4278:  /* *p usadduhq3 */
    case 4277:  /* *p usadduqq3 */
    case 4276:  /* *p usaddv2uhq3 */
    case 4275:  /* *p usaddv4uqq3 */
    case 4274:  /* *p addv2ha3 */
    case 4273:  /* *p addv2hq3 */
    case 4272:  /* *p addv4qq3 */
    case 4271:  /* *p addusa3 */
    case 4270:  /* *p adduha3 */
    case 4269:  /* *p addsa3 */
    case 4268:  /* *p addha3 */
    case 4267:  /* *p addusq3 */
    case 4266:  /* *p adduhq3 */
    case 4265:  /* *p adduqq3 */
    case 4264:  /* *p addsq3 */
    case 4263:  /* *p addhq3 */
    case 4262:  /* *p addqq3 */
    case 4162:  /* *p *muldf3_vfp */
    case 4161:  /* *p *mulsf3_vfp */
    case 4160:  /* *p *divdf3_vfp */
    case 4159:  /* *p *divsf3_vfp */
    case 4158:  /* *p *subdf3_vfp */
    case 4157:  /* *p *subsf3_vfp */
    case 4156:  /* *p *adddf3_vfp */
    case 4155:  /* *p *addsf3_vfp */
    case 4096:  /* *p iwmmxt_wmulwl */
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
    case 3957:  /* *p *mulv4hi3_iwmmxt */
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
    case 3938:  /* *p *xorv8qi3_iwmmxt */
    case 3937:  /* *p *xorv4hi3_iwmmxt */
    case 3936:  /* *p *xorv2si3_iwmmxt */
    case 3935:  /* *p *iorv8qi3_iwmmxt */
    case 3934:  /* *p *iorv4hi3_iwmmxt */
    case 3933:  /* *p *iorv2si3_iwmmxt */
    case 3932:  /* *p *andv8qi3_iwmmxt */
    case 3931:  /* *p *andv4hi3_iwmmxt */
    case 3930:  /* *p *andv2si3_iwmmxt */
    case 3925:  /* *p iwmmxt_anddi3 */
    case 3924:  /* *p iwmmxt_xordi3 */
    case 3923:  /* *p iwmmxt_iordi3 */
    case 3825:  /* *p *arm_movt */
    case 3800:  /* *p udivsi3 */
    case 3799:  /* *p divsi3 */
    case 3777:  /* *p *arm_xorsi3 */
    case 3774:  /* *p *iorsi3_insn */
    case 3760:  /* *p *arm_andsi3_insn */
    case 3734:  /* *p *arm_mulsi3_v6 */
    case 3732:  /* *p *arm_subsi3_insn */
    case 3718:  /* *p *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2820:  /* arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 2819:  /* usmulusa3 */
    case 2818:  /* ssmulsa3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 2763:  /* arm_store_release_exclusivesi */
    case 2762:  /* arm_store_release_exclusivehi */
    case 2761:  /* arm_store_release_exclusiveqi */
    case 2760:  /* arm_store_release_exclusivedi */
    case 2759:  /* arm_store_exclusivedi */
    case 2758:  /* arm_store_exclusivesi */
    case 2757:  /* arm_store_exclusivehi */
    case 2756:  /* arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 2747:  /* atomic_nand_fetchdi */
    case 2746:  /* atomic_nand_fetchsi */
    case 2745:  /* atomic_nand_fetchhi */
    case 2744:  /* atomic_nand_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2723:  /* atomic_fetch_nanddi */
    case 2722:  /* atomic_fetch_nandsi */
    case 2721:  /* atomic_fetch_nandhi */
    case 2720:  /* atomic_fetch_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2699:  /* atomic_nanddi */
    case 2698:  /* atomic_nandsi */
    case 2697:  /* atomic_nandhi */
    case 2696:  /* atomic_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2675:  /* atomic_exchangedi */
    case 2674:  /* atomic_exchangesi */
    case 2673:  /* atomic_exchangehi */
    case 2672:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2671:  /* atomic_compare_and_swapt1di_1 */
    case 2670:  /* atomic_compare_and_swapt1si_1 */
    case 2669:  /* atomic_compare_and_swap32di_1 */
    case 2668:  /* atomic_compare_and_swap32si_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2667:  /* atomic_compare_and_swapt1hi_1 */
    case 2666:  /* atomic_compare_and_swapt1qi_1 */
    case 2665:  /* atomic_compare_and_swap32hi_1 */
    case 2664:  /* atomic_compare_and_swap32qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2656:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2655:  /* crypto_sha1p */
    case 2654:  /* crypto_sha1m */
    case 2653:  /* crypto_sha1c */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      break;

    case 2651:  /* crypto_sha1h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1), 0, 0));
      break;

    case 2640:  /* neon_vabdv4sf_3 */
    case 2639:  /* neon_vabdv2sf_3 */
    case 2638:  /* neon_vabdv8hf_3 */
    case 2637:  /* neon_vabdv4hf_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 2608:  /* neon_vec_umult_hi_v4si */
    case 2607:  /* neon_vec_smult_hi_v4si */
    case 2606:  /* neon_vec_umult_hi_v8hi */
    case 2605:  /* neon_vec_smult_hi_v8hi */
    case 2604:  /* neon_vec_umult_hi_v16qi */
    case 2603:  /* neon_vec_smult_hi_v16qi */
    case 2602:  /* neon_vec_umult_lo_v4si */
    case 2601:  /* neon_vec_smult_lo_v4si */
    case 2600:  /* neon_vec_umult_lo_v8hi */
    case 2599:  /* neon_vec_smult_lo_v8hi */
    case 2598:  /* neon_vec_umult_lo_v16qi */
    case 2597:  /* neon_vec_smult_lo_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 2367:  /* *neon_vuzpv4hf_insn */
    case 2366:  /* *neon_vuzpv8hf_insn */
    case 2365:  /* *neon_vuzpv4sf_insn */
    case 2364:  /* *neon_vuzpv2sf_insn */
    case 2363:  /* *neon_vuzpv4si_insn */
    case 2362:  /* *neon_vuzpv2si_insn */
    case 2361:  /* *neon_vuzpv8hi_insn */
    case 2360:  /* *neon_vuzpv4hi_insn */
    case 2359:  /* *neon_vuzpv16qi_insn */
    case 2358:  /* *neon_vuzpv8qi_insn */
    case 2357:  /* *neon_vzipv4hf_insn */
    case 2356:  /* *neon_vzipv8hf_insn */
    case 2355:  /* *neon_vzipv4sf_insn */
    case 2354:  /* *neon_vzipv2sf_insn */
    case 2353:  /* *neon_vzipv4si_insn */
    case 2352:  /* *neon_vzipv2si_insn */
    case 2351:  /* *neon_vzipv8hi_insn */
    case 2350:  /* *neon_vzipv4hi_insn */
    case 2349:  /* *neon_vzipv16qi_insn */
    case 2348:  /* *neon_vzipv8qi_insn */
    case 2347:  /* *neon_vtrnv4hf_insn */
    case 2346:  /* *neon_vtrnv8hf_insn */
    case 2345:  /* *neon_vtrnv4sf_insn */
    case 2344:  /* *neon_vtrnv2sf_insn */
    case 2343:  /* *neon_vtrnv4si_insn */
    case 2342:  /* *neon_vtrnv2si_insn */
    case 2341:  /* *neon_vtrnv8hi_insn */
    case 2340:  /* *neon_vtrnv4hi_insn */
    case 2339:  /* *neon_vtrnv16qi_insn */
    case 2338:  /* *neon_vtrnv8qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2079:  /* neon_vqdmlsl_lanev2si */
    case 2078:  /* neon_vqdmlsl_lanev4hi */
    case 2077:  /* neon_vmlslu_lanev2si */
    case 2076:  /* neon_vmlsls_lanev2si */
    case 2075:  /* neon_vmlslu_lanev4hi */
    case 2074:  /* neon_vmlsls_lanev4hi */
    case 2073:  /* neon_vmls_lanev4sf */
    case 2072:  /* neon_vmls_lanev4si */
    case 2071:  /* neon_vmls_lanev8hi */
    case 2070:  /* neon_vmls_lanev2sf */
    case 2069:  /* neon_vmls_lanev2si */
    case 2068:  /* neon_vmls_lanev4hi */
    case 2067:  /* neon_vqdmlal_lanev2si */
    case 2066:  /* neon_vqdmlal_lanev4hi */
    case 2065:  /* neon_vmlalu_lanev2si */
    case 2064:  /* neon_vmlals_lanev2si */
    case 2063:  /* neon_vmlalu_lanev4hi */
    case 2062:  /* neon_vmlals_lanev4hi */
    case 2061:  /* neon_vmla_lanev4sf */
    case 2060:  /* neon_vmla_lanev4si */
    case 2059:  /* neon_vmla_lanev8hi */
    case 2058:  /* neon_vmla_lanev2sf */
    case 2057:  /* neon_vmla_lanev2si */
    case 2056:  /* neon_vmla_lanev4hi */
    case 2055:  /* neon_vqrdmlsh_lanev2si */
    case 2054:  /* neon_vqrdmlah_lanev2si */
    case 2053:  /* neon_vqrdmlsh_lanev4hi */
    case 2052:  /* neon_vqrdmlah_lanev4hi */
    case 2051:  /* neon_vqrdmlsh_lanev4si */
    case 2050:  /* neon_vqrdmlah_lanev4si */
    case 2049:  /* neon_vqrdmlsh_lanev8hi */
    case 2048:  /* neon_vqrdmlah_lanev8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1943:  /* *neon_vswpv2di */
    case 1942:  /* *neon_vswpdi */
    case 1941:  /* *neon_vswpv4sf */
    case 1940:  /* *neon_vswpv2sf */
    case 1939:  /* *neon_vswpv8hf */
    case 1938:  /* *neon_vswpv4hf */
    case 1937:  /* *neon_vswpv4si */
    case 1936:  /* *neon_vswpv2si */
    case 1935:  /* *neon_vswpv8hi */
    case 1934:  /* *neon_vswpv4hi */
    case 1933:  /* *neon_vswpv16qi */
    case 1932:  /* *neon_vswpv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1862:  /* neon_udot_lanev16qi */
    case 1861:  /* neon_sdot_lanev16qi */
    case 1860:  /* neon_udot_lanev8qi */
    case 1859:  /* neon_sdot_lanev8qi */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      break;

    case 1858:  /* neon_udotv16qi */
    case 1857:  /* neon_sdotv16qi */
    case 1856:  /* neon_udotv8qi */
    case 1855:  /* neon_sdotv8qi */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1693:  /* neon_vabaluv2si */
    case 1692:  /* neon_vabalsv2si */
    case 1691:  /* neon_vabaluv4hi */
    case 1690:  /* neon_vabalsv4hi */
    case 1689:  /* neon_vabaluv8qi */
    case 1688:  /* neon_vabalsv8qi */
    case 1687:  /* neon_vabauv4si */
    case 1686:  /* neon_vabasv4si */
    case 1685:  /* neon_vabauv2si */
    case 1684:  /* neon_vabasv2si */
    case 1683:  /* neon_vabauv8hi */
    case 1682:  /* neon_vabasv8hi */
    case 1681:  /* neon_vabauv4hi */
    case 1680:  /* neon_vabasv4hi */
    case 1679:  /* neon_vabauv16qi */
    case 1678:  /* neon_vabasv16qi */
    case 1677:  /* neon_vabauv8qi */
    case 1676:  /* neon_vabasv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1639:  /* neon_vcalev4hf_fp16insn */
    case 1638:  /* neon_vcaltv4hf_fp16insn */
    case 1637:  /* neon_vcagev4hf_fp16insn */
    case 1636:  /* neon_vcagtv4hf_fp16insn */
    case 1635:  /* neon_vcalev8hf_fp16insn */
    case 1634:  /* neon_vcaltv8hf_fp16insn */
    case 1633:  /* neon_vcagev8hf_fp16insn */
    case 1632:  /* neon_vcagtv8hf_fp16insn */
    case 1627:  /* neon_vcagev4sf_insn */
    case 1626:  /* neon_vcagtv4sf_insn */
    case 1625:  /* neon_vcagev2sf_insn */
    case 1624:  /* neon_vcagtv2sf_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 1434:  /* vfmsl_lane_highv4sf_intrinsic */
    case 1433:  /* vfmsl_lane_highv2sf_intrinsic */
    case 1432:  /* vfmsl_lane_highv4hfv4sf_intrinsic */
    case 1431:  /* vfmsl_lane_highv8hfv2sf_intrinsic */
    case 1430:  /* vfmsl_lane_lowv4hfv4sf_intrinsic */
    case 1429:  /* vfmsl_lane_lowv8hfv2sf_intrinsic */
    case 1428:  /* vfmsl_lane_lowv4sf_intrinsic */
    case 1427:  /* vfmsl_lane_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 1426:  /* vfmal_lane_highv4sf_intrinsic */
    case 1425:  /* vfmal_lane_highv2sf_intrinsic */
    case 1424:  /* vfmal_lane_highv4hfv4sf_intrinsic */
    case 1423:  /* vfmal_lane_highv8hfv2sf_intrinsic */
    case 1422:  /* vfmal_lane_lowv4hfv4sf_intrinsic */
    case 1421:  /* vfmal_lane_lowv8hfv2sf_intrinsic */
    case 1420:  /* vfmal_lane_lowv4sf_intrinsic */
    case 1419:  /* vfmal_lane_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 1418:  /* vfmsl_lowv4sf_intrinsic */
    case 1417:  /* vfmsl_lowv2sf_intrinsic */
    case 1414:  /* vfmsl_highv4sf_intrinsic */
    case 1413:  /* vfmsl_highv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1416:  /* vfmal_highv4sf_intrinsic */
    case 1415:  /* vfmal_highv2sf_intrinsic */
    case 1412:  /* vfmal_lowv4sf_intrinsic */
    case 1411:  /* vfmal_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1306:  /* quad_halves_umaxv16qi */
    case 1305:  /* quad_halves_uminv16qi */
    case 1304:  /* quad_halves_smaxv16qi */
    case 1303:  /* quad_halves_sminv16qi */
    case 1302:  /* quad_halves_plusv16qi */
    case 1301:  /* quad_halves_umaxv8hi */
    case 1300:  /* quad_halves_uminv8hi */
    case 1299:  /* quad_halves_smaxv8hi */
    case 1298:  /* quad_halves_sminv8hi */
    case 1297:  /* quad_halves_plusv8hi */
    case 1296:  /* quad_halves_smaxv4sf */
    case 1295:  /* quad_halves_sminv4sf */
    case 1294:  /* quad_halves_plusv4sf */
    case 1293:  /* quad_halves_umaxv4si */
    case 1292:  /* quad_halves_uminv4si */
    case 1291:  /* quad_halves_smaxv4si */
    case 1290:  /* quad_halves_sminv4si */
    case 1289:  /* quad_halves_plusv4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1285:  /* vec_sel_widen_usum_hiv4siv2si3 */
    case 1284:  /* vec_sel_widen_usum_hiv8hiv4hi3 */
    case 1283:  /* vec_sel_widen_usum_hiv16qiv8qi3 */
    case 1282:  /* vec_sel_widen_usum_lov4siv2si3 */
    case 1281:  /* vec_sel_widen_usum_lov8hiv4hi3 */
    case 1280:  /* vec_sel_widen_usum_lov16qiv8qi3 */
    case 1276:  /* vec_sel_widen_ssum_hiv4siv2si3 */
    case 1275:  /* vec_sel_widen_ssum_hiv8hiv4hi3 */
    case 1274:  /* vec_sel_widen_ssum_hiv16qiv8qi3 */
    case 1273:  /* vec_sel_widen_ssum_lov4siv2si3 */
    case 1272:  /* vec_sel_widen_ssum_lov8hiv4hi3 */
    case 1271:  /* vec_sel_widen_ssum_lov16qiv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1270:  /* lshrdi3_neon */
    case 1269:  /* ashrdi3_neon */
    case 1264:  /* ashldi3_neon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 991:  /* vec_setv2di_internal */
    case 990:  /* vec_setv4sf_internal */
    case 989:  /* vec_setv4si_internal */
    case 988:  /* vec_setv8hf_internal */
    case 987:  /* vec_setv8hi_internal */
    case 986:  /* vec_setv16qi_internal */
    case 985:  /* vec_setv2sf_internal */
    case 984:  /* vec_setv2si_internal */
    case 983:  /* vec_setv4hf_internal */
    case 982:  /* vec_setv4hi_internal */
    case 981:  /* vec_setv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 931:  /* *thumb2_cbnz */
    case 930:  /* *thumb2_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 922:  /* *thumb2_movsi_shortim */
    case 921:  /* *thumb2_movhi_shortim */
    case 920:  /* *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 914:  /* *thumb2_casesi_internal_pic */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 913:  /* *thumb2_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 903:  /* *thumb2_ior_scc_strict_it */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 888:  /* *thumb2_cmpsi_neg_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 887:  /* *thumb2_storewb_pairsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 885:  /* tls_load_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      break;

    case 875:  /* thumb1_stack_protect_test_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 873:  /* *thumb1_tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 868:  /* thumb1_casesi_dispatch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      break;

    case 899:  /* *nonsecure_call_value_reg_thumb2 */
    case 864:  /* *nonsecure_call_value_reg_thumb1_v5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 897:  /* *nonsecure_call_reg_thumb2 */
    case 861:  /* *nonsecure_call_reg_thumb1_v5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 858:  /* thumb1_addsi3_addgeu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 852:  /* *addsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 851:  /* *addsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 850:  /* *cbranchne_decr1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 849:  /* *tstsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 848:  /* *tlobits_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 847:  /* *tbit_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 846:  /* *negated_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 845:  /* cbranchsi4_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 844:  /* cbranchsi4_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 843:  /* thumb1_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 842:  /* movmem8b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 841:  /* movmem12b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 827:  /* *thumb1_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1183:  /* negdi2_neon */
    case 855:  /* *cstoresi_ne0_thumb1_insn */
    case 854:  /* *cstoresi_eq0_thumb1_insn */
    case 832:  /* thumb1_extendhisi2 */
    case 826:  /* *thumb1_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 809:  /* no_literal_pool_sf_immediate */
    case 808:  /* no_literal_pool_df_immediate */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 762:  /* neon_vcvthu_nsi_unspec */
    case 761:  /* neon_vcvths_nsi_unspec */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 760:  /* neon_vcvthu_nhf_unspec */
    case 759:  /* neon_vcvths_nhf_unspec */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 754:  /* *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 722:  /* *fnmadddf4 */
    case 721:  /* *fnmaddsf4 */
    case 720:  /* *fnmaddhf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 719:  /* *fnmsubdf4 */
    case 718:  /* *fnmsubsf4 */
    case 717:  /* *fnmsubhf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1074:  /* fmsubv4hf4_intrinsic */
    case 1073:  /* fmsubv8hf4_intrinsic */
    case 1072:  /* fmsubv4sf4_intrinsic */
    case 1071:  /* fmsubv2sf4_intrinsic */
    case 1070:  /* *fmsubv4sf4 */
    case 1069:  /* *fmsubv2sf4 */
    case 716:  /* *fmsubdf4 */
    case 715:  /* *fmsubsf4 */
    case 714:  /* fmsubhf4_fp16 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 710:  /* *muldf3negdfsubdf_vfp */
    case 709:  /* *mulsf3negsfsubsf_vfp */
    case 708:  /* *mulhf3neghfsubhf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1060:  /* mulv4sf3negv4sfaddv4sf_neon */
    case 1059:  /* mulv2sf3negv2sfaddv2sf_neon */
    case 1058:  /* mulv4si3negv4siaddv4si_neon */
    case 1057:  /* mulv2si3negv2siaddv2si_neon */
    case 1056:  /* mulv8hi3negv8hiaddv8hi_neon */
    case 1055:  /* mulv4hi3negv4hiaddv4hi_neon */
    case 1054:  /* mulv16qi3negv16qiaddv16qi_neon */
    case 1053:  /* mulv8qi3negv8qiaddv8qi_neon */
    case 707:  /* *fmuldf3negdfadddf_vfp */
    case 706:  /* *mulsf3negsfaddsf_vfp */
    case 705:  /* *mulhf3neghfaddhf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 649:  /* iwmmxt_textrcv8qi3 */
    case 648:  /* iwmmxt_textrcv4hi3 */
    case 647:  /* iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 637:  /* iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 628:  /* iwmmxt_wmiattn */
    case 627:  /* iwmmxt_wmiatbn */
    case 626:  /* iwmmxt_wmiabtn */
    case 625:  /* iwmmxt_wmiabbn */
    case 624:  /* iwmmxt_wmiatt */
    case 623:  /* iwmmxt_wmiatb */
    case 622:  /* iwmmxt_wmiabt */
    case 621:  /* iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 620:  /* iwmmxt_wqmiattn */
    case 619:  /* iwmmxt_wqmiatbn */
    case 618:  /* iwmmxt_wqmiabtn */
    case 617:  /* iwmmxt_wqmiabbn */
    case 616:  /* iwmmxt_wqmiatt */
    case 615:  /* iwmmxt_wqmiatb */
    case 614:  /* iwmmxt_wqmiabt */
    case 613:  /* iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 612:  /* iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      break;

    case 611:  /* iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      break;

    case 595:  /* iwmmxt_avg4r */
    case 594:  /* iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 593:  /* addcv2si3 */
    case 592:  /* addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 591:  /* iwmmxt_wsubaddhx */
    case 590:  /* iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 579:  /* iwmmxt_walignr3 */
    case 578:  /* iwmmxt_walignr2 */
    case 577:  /* iwmmxt_walignr1 */
    case 576:  /* iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 575:  /* iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 574:  /* iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      break;

    case 567:  /* iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 566:  /* iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 565:  /* iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 636:  /* iwmmxt_wmiawttn */
    case 635:  /* iwmmxt_wmiawtbn */
    case 634:  /* iwmmxt_wmiawbtn */
    case 633:  /* iwmmxt_wmiawbbn */
    case 632:  /* iwmmxt_wmiawtt */
    case 631:  /* iwmmxt_wmiawtb */
    case 630:  /* iwmmxt_wmiawbt */
    case 629:  /* iwmmxt_wmiawbb */
    case 564:  /* iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 563:  /* iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 562:  /* iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 599:  /* iwmmxt_wmaddun */
    case 598:  /* iwmmxt_wmaddsn */
    case 597:  /* iwmmxt_wmaddux */
    case 596:  /* iwmmxt_wmaddsx */
    case 561:  /* iwmmxt_wmaddu */
    case 560:  /* iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1002:  /* vec_extractv2didi */
    case 1001:  /* vec_extractv4sfsf */
    case 1000:  /* vec_extractv4sisi */
    case 999:  /* vec_extractv8hfhf */
    case 998:  /* vec_extractv8hihi */
    case 997:  /* vec_extractv16qiqi */
    case 996:  /* vec_extractv2sfsf */
    case 995:  /* vec_extractv2sisi */
    case 994:  /* vec_extractv4hfhf */
    case 993:  /* vec_extractv4hihi */
    case 992:  /* vec_extractv8qiqi */
    case 489:  /* iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1931:  /* neon_vdup_lanev4hf_internal */
    case 1930:  /* neon_vdup_lanev8hf_internal */
    case 1929:  /* neon_vdup_lanev4sf_internal */
    case 1928:  /* neon_vdup_lanev2sf_internal */
    case 1927:  /* neon_vdup_lanev4si_internal */
    case 1926:  /* neon_vdup_lanev2si_internal */
    case 1925:  /* neon_vdup_lanev8hi_internal */
    case 1924:  /* neon_vdup_lanev4hi_internal */
    case 1923:  /* neon_vdup_lanev16qi_internal */
    case 1922:  /* neon_vdup_lanev8qi_internal */
    case 1910:  /* neon_vget_lanev4sf_zext_internal */
    case 1909:  /* neon_vget_lanev4si_zext_internal */
    case 1908:  /* neon_vget_lanev8hf_zext_internal */
    case 1907:  /* neon_vget_lanev8hi_zext_internal */
    case 1906:  /* neon_vget_lanev16qi_zext_internal */
    case 1905:  /* neon_vget_lanev4sf_sext_internal */
    case 1904:  /* neon_vget_lanev4si_sext_internal */
    case 1903:  /* neon_vget_lanev8hf_sext_internal */
    case 1902:  /* neon_vget_lanev8hi_sext_internal */
    case 1901:  /* neon_vget_lanev16qi_sext_internal */
    case 1900:  /* neon_vget_lanev2sf_zext_internal */
    case 1899:  /* neon_vget_lanev2si_zext_internal */
    case 1898:  /* neon_vget_lanev4hi_zext_internal */
    case 1897:  /* neon_vget_lanev8qi_zext_internal */
    case 1896:  /* neon_vget_lanev2sf_sext_internal */
    case 1895:  /* neon_vget_lanev2si_sext_internal */
    case 1894:  /* neon_vget_lanev4hi_sext_internal */
    case 1893:  /* neon_vget_lanev8qi_sext_internal */
    case 488:  /* iwmmxt_textrmsh */
    case 487:  /* iwmmxt_textrmuh */
    case 486:  /* iwmmxt_textrmsb */
    case 485:  /* iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 484:  /* iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 483:  /* iwmmxt_tinsrh */
    case 482:  /* iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 605:  /* iwmmxt_wmulwumr */
    case 604:  /* iwmmxt_wmulwsmr */
    case 603:  /* iwmmxt_wmulumr */
    case 602:  /* iwmmxt_wmulsmr */
    case 479:  /* iwmmxt_uavgrndv4hi3 */
    case 478:  /* iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 601:  /* iwmmxt_wmulwum */
    case 600:  /* iwmmxt_wmulwsm */
    case 589:  /* iwmmxt_wabsdiffw */
    case 588:  /* iwmmxt_wabsdiffh */
    case 587:  /* iwmmxt_wabsdiffb */
    case 481:  /* iwmmxt_uavgv4hi3 */
    case 480:  /* iwmmxt_uavgv8qi3 */
    case 469:  /* umulv4hi3_highpart */
    case 468:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 4219:  /* *p *thumb2_movhi_insn */
    case 4218:  /* *p *thumb2_movsi_insn */
    case 4150:  /* *p *movdf_vfp */
    case 4149:  /* *p *thumb2_movsf_vfp */
    case 4148:  /* *p *movsf_vfp */
    case 4147:  /* *p *movhf_vfp_fp16 */
    case 4146:  /* *p *movdi_vfp */
    case 4145:  /* *p *thumb2_movsi_vfp */
    case 4144:  /* *p *arm_movsi_vfp */
    case 4143:  /* *p *thumb2_movhi_fp16 */
    case 4142:  /* *p *arm_movhi_fp16 */
    case 4141:  /* *p *thumb2_movhi_vfp */
    case 4140:  /* *p *arm_movhi_vfp */
    case 3929:  /* *p movv8qi_internal */
    case 3928:  /* *p movv4hi_internal */
    case 3927:  /* *p movv2si_internal */
    case 3833:  /* *p *arm_movsf_soft_insn */
    case 3832:  /* *p *arm32_movhf */
    case 3831:  /* *p *arm_movqi_insn */
    case 3830:  /* *p *movhi_bytes */
    case 3829:  /* *p *movhi_insn_arch4 */
    case 3826:  /* *p *arm_movsi_insn */
    case 436:  /* *cond_iwmmxt_movsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 433:  /* iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2650:  /* crypto_sha256su1 */
    case 2649:  /* crypto_sha256h2 */
    case 2648:  /* crypto_sha256h */
    case 2647:  /* crypto_sha1su0 */
    case 2553:  /* neon_vld4_lanev4sf */
    case 2552:  /* neon_vld4_lanev4si */
    case 2551:  /* neon_vld4_lanev8hf */
    case 2550:  /* neon_vld4_lanev8hi */
    case 2549:  /* neon_vld4_lanev2sf */
    case 2548:  /* neon_vld4_lanev2si */
    case 2547:  /* neon_vld4_lanev4hf */
    case 2546:  /* neon_vld4_lanev4hi */
    case 2545:  /* neon_vld4_lanev8qi */
    case 2497:  /* neon_vld3_lanev4sf */
    case 2496:  /* neon_vld3_lanev4si */
    case 2495:  /* neon_vld3_lanev8hf */
    case 2494:  /* neon_vld3_lanev8hi */
    case 2493:  /* neon_vld3_lanev2sf */
    case 2492:  /* neon_vld3_lanev2si */
    case 2491:  /* neon_vld3_lanev4hf */
    case 2490:  /* neon_vld3_lanev4hi */
    case 2489:  /* neon_vld3_lanev8qi */
    case 2446:  /* neon_vld2_lanev4sf */
    case 2445:  /* neon_vld2_lanev4si */
    case 2444:  /* neon_vld2_lanev8hf */
    case 2443:  /* neon_vld2_lanev8hi */
    case 2442:  /* neon_vld2_lanev2sf */
    case 2441:  /* neon_vld2_lanev2si */
    case 2440:  /* neon_vld2_lanev4hf */
    case 2439:  /* neon_vld2_lanev4hi */
    case 2438:  /* neon_vld2_lanev8qi */
    case 2391:  /* neon_vld1_lanev2di */
    case 2390:  /* neon_vld1_lanev4sf */
    case 2389:  /* neon_vld1_lanev4si */
    case 2388:  /* neon_vld1_lanev8hf */
    case 2387:  /* neon_vld1_lanev8hi */
    case 2386:  /* neon_vld1_lanev16qi */
    case 2385:  /* neon_vld1_lanedi */
    case 2384:  /* neon_vld1_lanev2sf */
    case 2383:  /* neon_vld1_lanev2si */
    case 2382:  /* neon_vld1_lanev4hf */
    case 2381:  /* neon_vld1_lanev4hi */
    case 2380:  /* neon_vld1_lanev8qi */
    case 2337:  /* neon_vtbx4v8qi */
    case 2336:  /* neon_vtbx3v8qi */
    case 2335:  /* neon_vtbx2v8qi */
    case 2334:  /* neon_vtbx1v8qi */
    case 2326:  /* neon_vsli_nv2di */
    case 2325:  /* neon_vsli_ndi */
    case 2324:  /* neon_vsli_nv4si */
    case 2323:  /* neon_vsli_nv2si */
    case 2322:  /* neon_vsli_nv8hi */
    case 2321:  /* neon_vsli_nv4hi */
    case 2320:  /* neon_vsli_nv16qi */
    case 2319:  /* neon_vsli_nv8qi */
    case 2318:  /* neon_vsri_nv2di */
    case 2317:  /* neon_vsri_ndi */
    case 2316:  /* neon_vsri_nv4si */
    case 2315:  /* neon_vsri_nv2si */
    case 2314:  /* neon_vsri_nv8hi */
    case 2313:  /* neon_vsri_nv4hi */
    case 2312:  /* neon_vsri_nv16qi */
    case 2311:  /* neon_vsri_nv8qi */
    case 2310:  /* neon_vrsrau_nv2di */
    case 2309:  /* neon_vrsras_nv2di */
    case 2308:  /* neon_vsrau_nv2di */
    case 2307:  /* neon_vsras_nv2di */
    case 2306:  /* neon_vrsrau_ndi */
    case 2305:  /* neon_vrsras_ndi */
    case 2304:  /* neon_vsrau_ndi */
    case 2303:  /* neon_vsras_ndi */
    case 2302:  /* neon_vrsrau_nv4si */
    case 2301:  /* neon_vrsras_nv4si */
    case 2300:  /* neon_vsrau_nv4si */
    case 2299:  /* neon_vsras_nv4si */
    case 2298:  /* neon_vrsrau_nv2si */
    case 2297:  /* neon_vrsras_nv2si */
    case 2296:  /* neon_vsrau_nv2si */
    case 2295:  /* neon_vsras_nv2si */
    case 2294:  /* neon_vrsrau_nv8hi */
    case 2293:  /* neon_vrsras_nv8hi */
    case 2292:  /* neon_vsrau_nv8hi */
    case 2291:  /* neon_vsras_nv8hi */
    case 2290:  /* neon_vrsrau_nv4hi */
    case 2289:  /* neon_vrsras_nv4hi */
    case 2288:  /* neon_vsrau_nv4hi */
    case 2287:  /* neon_vsras_nv4hi */
    case 2286:  /* neon_vrsrau_nv16qi */
    case 2285:  /* neon_vrsras_nv16qi */
    case 2284:  /* neon_vsrau_nv16qi */
    case 2283:  /* neon_vsras_nv16qi */
    case 2282:  /* neon_vrsrau_nv8qi */
    case 2281:  /* neon_vrsras_nv8qi */
    case 2280:  /* neon_vsrau_nv8qi */
    case 2279:  /* neon_vsras_nv8qi */
    case 2120:  /* neon_vbslv2di_internal */
    case 2119:  /* neon_vbsldi_internal */
    case 2118:  /* neon_vbslv4sf_internal */
    case 2117:  /* neon_vbslv2sf_internal */
    case 2116:  /* neon_vbslv8hf_internal */
    case 2115:  /* neon_vbslv4hf_internal */
    case 2114:  /* neon_vbslv4si_internal */
    case 2113:  /* neon_vbslv2si_internal */
    case 2112:  /* neon_vbslv8hi_internal */
    case 2111:  /* neon_vbslv4hi_internal */
    case 2110:  /* neon_vbslv16qi_internal */
    case 2109:  /* neon_vbslv8qi_internal */
    case 2091:  /* neon_vextv2di */
    case 2090:  /* neon_vextdi */
    case 2089:  /* neon_vextv4sf */
    case 2088:  /* neon_vextv2sf */
    case 2087:  /* neon_vextv8hf */
    case 2086:  /* neon_vextv4hf */
    case 2085:  /* neon_vextv4si */
    case 2084:  /* neon_vextv2si */
    case 2083:  /* neon_vextv8hi */
    case 2082:  /* neon_vextv4hi */
    case 2081:  /* neon_vextv16qi */
    case 2080:  /* neon_vextv8qi */
    case 2047:  /* neon_vqrdmulh_lanev2si */
    case 2046:  /* neon_vqdmulh_lanev2si */
    case 2045:  /* neon_vqrdmulh_lanev4hi */
    case 2044:  /* neon_vqdmulh_lanev4hi */
    case 2043:  /* neon_vqrdmulh_lanev4si */
    case 2042:  /* neon_vqdmulh_lanev4si */
    case 2041:  /* neon_vqrdmulh_lanev8hi */
    case 2040:  /* neon_vqdmulh_lanev8hi */
    case 2039:  /* neon_vqdmull_lanev2si */
    case 2038:  /* neon_vqdmull_lanev4hi */
    case 2037:  /* neon_vmullu_lanev2si */
    case 2036:  /* neon_vmulls_lanev2si */
    case 2035:  /* neon_vmullu_lanev4hi */
    case 2034:  /* neon_vmulls_lanev4hi */
    case 2033:  /* neon_vmul_lanev4hf */
    case 2032:  /* neon_vmul_lanev8hf */
    case 2031:  /* neon_vmul_lanev4sf */
    case 2030:  /* neon_vmul_lanev4si */
    case 2029:  /* neon_vmul_lanev8hi */
    case 2028:  /* neon_vmul_lanev2sf */
    case 2027:  /* neon_vmul_lanev2si */
    case 2026:  /* neon_vmul_lanev4hi */
    case 1482:  /* neon_vqdmlslv2si */
    case 1481:  /* neon_vqdmlslv4hi */
    case 1480:  /* neon_vqdmlalv2si */
    case 1479:  /* neon_vqdmlalv4hi */
    case 1478:  /* neon_vqrdmlshv4si */
    case 1477:  /* neon_vqrdmlahv4si */
    case 1476:  /* neon_vqrdmlshv8hi */
    case 1475:  /* neon_vqrdmlahv8hi */
    case 1474:  /* neon_vqrdmlshv2si */
    case 1473:  /* neon_vqrdmlahv2si */
    case 1472:  /* neon_vqrdmlshv4hi */
    case 1471:  /* neon_vqrdmlahv4hi */
    case 1462:  /* neon_vmlsluv2si */
    case 1461:  /* neon_vmlslsv2si */
    case 1460:  /* neon_vmlsluv4hi */
    case 1459:  /* neon_vmlslsv4hi */
    case 1458:  /* neon_vmlsluv8qi */
    case 1457:  /* neon_vmlslsv8qi */
    case 1456:  /* neon_vmlsv4sf_unspec */
    case 1455:  /* neon_vmlsv2sf_unspec */
    case 1454:  /* neon_vmlsv4si_unspec */
    case 1453:  /* neon_vmlsv2si_unspec */
    case 1452:  /* neon_vmlsv8hi_unspec */
    case 1451:  /* neon_vmlsv4hi_unspec */
    case 1450:  /* neon_vmlsv16qi_unspec */
    case 1449:  /* neon_vmlsv8qi_unspec */
    case 1448:  /* neon_vmlaluv2si */
    case 1447:  /* neon_vmlalsv2si */
    case 1446:  /* neon_vmlaluv4hi */
    case 1445:  /* neon_vmlalsv4hi */
    case 1444:  /* neon_vmlaluv8qi */
    case 1443:  /* neon_vmlalsv8qi */
    case 1442:  /* neon_vmlav4sf_unspec */
    case 1441:  /* neon_vmlav2sf_unspec */
    case 1440:  /* neon_vmlav4si_unspec */
    case 1439:  /* neon_vmlav2si_unspec */
    case 1438:  /* neon_vmlav8hi_unspec */
    case 1437:  /* neon_vmlav4hi_unspec */
    case 1436:  /* neon_vmlav16qi_unspec */
    case 1435:  /* neon_vmlav8qi_unspec */
    case 581:  /* iwmmxt_wsadh */
    case 580:  /* iwmmxt_wsadb */
    case 472:  /* iwmmxt_wmacu */
    case 470:  /* iwmmxt_wmacs */
    case 425:  /* mrrc2 */
    case 424:  /* mrrc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 423:  /* mcrr2 */
    case 422:  /* mcrr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 421:  /* mrc2 */
    case 420:  /* mrc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 419:  /* mcr2 */
    case 418:  /* mcr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 5));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 417:  /* *stc */
    case 416:  /* *stc */
    case 415:  /* *stc */
    case 414:  /* *stc */
    case 413:  /* *ldc */
    case 412:  /* *ldc */
    case 411:  /* *ldc */
    case 410:  /* *ldc */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 409:  /* cdp2 */
    case 408:  /* cdp */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (pat, 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 5));
      break;

    case 407:  /* *load_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 402:  /* *stm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 401:  /* *stm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 400:  /* *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 399:  /* *ldm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 406:  /* *stm2_db_update */
    case 398:  /* *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 405:  /* *stm2_db */
    case 397:  /* *stm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 404:  /* *ldm2_db_update */
    case 396:  /* *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 403:  /* *ldm2_db */
    case 395:  /* *ldm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 394:  /* *thumb_stm2_ia_update */
    case 393:  /* *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 392:  /* *stm2_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 391:  /* *thumb_ldm2_ia_update */
    case 390:  /* *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 389:  /* *thumb_ldm2_ia */
    case 388:  /* *ldm2_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 383:  /* *stm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 382:  /* *stm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 381:  /* *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 380:  /* *ldm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 387:  /* *stm3_db_update */
    case 379:  /* *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 386:  /* *stm3_db */
    case 378:  /* *stm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 385:  /* *ldm3_db_update */
    case 377:  /* *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 384:  /* *ldm3_db */
    case 376:  /* *ldm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 375:  /* *thumb_stm3_ia_update */
    case 374:  /* *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 373:  /* *stm3_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 372:  /* *thumb_ldm3_ia_update */
    case 371:  /* *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 370:  /* *thumb_ldm3_ia */
    case 369:  /* *ldm3_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 364:  /* *stm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 363:  /* *stm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 362:  /* *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 361:  /* *ldm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 368:  /* *stm4_db_update */
    case 360:  /* *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 367:  /* *stm4_db */
    case 359:  /* *stm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 366:  /* *ldm4_db_update */
    case 358:  /* *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 365:  /* *ldm4_db */
    case 357:  /* *ldm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 356:  /* *thumb_stm4_ia_update */
    case 355:  /* *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 354:  /* *stm4_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 353:  /* *thumb_ldm4_ia_update */
    case 352:  /* *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 351:  /* *thumb_ldm4_ia */
    case 350:  /* *ldm4_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 349:  /* *arm_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 348:  /* *arm_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 341:  /* *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 340:  /* *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 339:  /* *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 338:  /* *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 337:  /* *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 336:  /* *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 335:  /* arm_rev16si2_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 334:  /* arm_rev16si2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 330:  /* *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 329:  /* tlscall */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 917:  /* thumb2_eh_return */
    case 874:  /* thumb_eh_return */
    case 326:  /* arm_eh_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 324:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 806:  /* set_fpscr */
    case 325:  /* force_register_use */
    case 320:  /* consttable_16 */
    case 319:  /* consttable_8 */
    case 318:  /* consttable_4 */
    case 317:  /* consttable_2 */
    case 316:  /* consttable_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 311:  /* *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      break;

    case 310:  /* *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 309:  /* *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 312:  /* *vfp_pop_multiple_with_writeback */
    case 308:  /* *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 307:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 771:  /* *push_multi_vfp */
    case 306:  /* *push_multi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 305:  /* *not_signextract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 304:  /* *sign_extract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 302:  /* *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 297:  /* *if_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 296:  /* *ifcompare_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 295:  /* *if_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 294:  /* *ifcompare_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 292:  /* *ifcompare_shift_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 291:  /* *if_move_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 289:  /* *if_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 288:  /* *ifcompare_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 299:  /* *if_neg_move */
    case 287:  /* *if_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 298:  /* *ifcompare_neg_move */
    case 286:  /* *ifcompare_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 303:  /* *cond_move_not */
    case 301:  /* *if_move_neg */
    case 285:  /* *if_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 300:  /* *ifcompare_move_neg */
    case 284:  /* *ifcompare_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 283:  /* *if_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 290:  /* *ifcompare_move_shift */
    case 282:  /* *ifcompare_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 281:  /* *if_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 280:  /* *ifcompare_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 293:  /* *if_shift_shift */
    case 279:  /* *if_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 278:  /* *ifcompare_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 277:  /* *if_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 276:  /* *ifcompare_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 275:  /* *if_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 274:  /* *ifcompare_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 909:  /* *thumb2_movcond */
    case 273:  /* movcond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 272:  /* movcond_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 908:  /* *thumb2_negscc */
    case 271:  /* *negscc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 269:  /* *and_scc_scc_cmp */
    case 267:  /* *ior_scc_scc_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 6;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[4] = 5;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[5] = 4;
      break;

    case 270:  /* *and_scc_scc_nodom */
    case 268:  /* *and_scc_scc */
    case 266:  /* *ior_scc_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 265:  /* *cmp_ior */
    case 264:  /* *cmp_and */
    case 263:  /* *cmp_ite1 */
    case 262:  /* *cmp_ite0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      break;

    case 906:  /* *thumb2_cond_arith_strict_it */
    case 905:  /* *thumb2_cond_arith */
    case 260:  /* *cond_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 904:  /* *thumb2_cond_move */
    case 259:  /* *cond_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 258:  /* *compare_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 902:  /* *thumb2_ior_scc */
    case 901:  /* *thumb2_and_scc */
    case 257:  /* *ior_scc */
    case 256:  /* *and_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 255:  /* *sub_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 254:  /* *sub_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 253:  /* *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 252:  /* *arith_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 251:  /* *arith_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 4;
      break;

    case 250:  /* *and_shiftsi */
    case 249:  /* *eor_shiftsi */
    case 248:  /* *orr_shiftsi */
    case 247:  /* *rsb_shiftsi */
    case 246:  /* *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1052:  /* mulv4hf3addv4hf_neon */
    case 1051:  /* mulv8hf3addv8hf_neon */
    case 1050:  /* mulv4sf3addv4sf_neon */
    case 1049:  /* mulv2sf3addv2sf_neon */
    case 1048:  /* mulv4si3addv4si_neon */
    case 1047:  /* mulv2si3addv2si_neon */
    case 1046:  /* mulv8hi3addv8hi_neon */
    case 1045:  /* mulv4hi3addv4hi_neon */
    case 1044:  /* mulv16qi3addv16qi_neon */
    case 1043:  /* mulv8qi3addv8qi_neon */
    case 704:  /* *muldf3subdf_vfp */
    case 703:  /* *mulsf3subsf_vfp */
    case 702:  /* *mulhf3subhf_vfp */
    case 701:  /* *muldf3adddf_vfp */
    case 700:  /* *mulsf3addsf_vfp */
    case 699:  /* *mulsf3addhf_vfp */
    case 245:  /* *and_multsi */
    case 244:  /* *eor_multsi */
    case 243:  /* *orr_multsi */
    case 242:  /* *rsb_multsi */
    case 241:  /* *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 900:  /* *thumb2_indirect_jump */
    case 869:  /* *thumb1_indirect_jump */
    case 238:  /* *load_indirect_jump */
    case 237:  /* *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 236:  /* *arm_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 235:  /* arm_stack_protect_test_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 234:  /* *stack_protect_combined_test_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 233:  /* *stack_protect_set_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 232:  /* *stack_protect_combined_set_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 883:  /* *thumb2_pop_single */
    case 872:  /* *thumb1_movpc_insn */
    case 807:  /* get_fpscr */
    case 477:  /* iwmmxt_clrv2si */
    case 476:  /* iwmmxt_clrv4hi */
    case 475:  /* iwmmxt_clrv8qi */
    case 474:  /* iwmmxt_clrdi */
    case 327:  /* load_tp_hard */
    case 230:  /* probe_stack */
    case 228:  /* *check_arch2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 226:  /* *cond_simple_return_inverted */
    case 225:  /* *cond_return_inverted */
    case 224:  /* *cond_simple_return */
    case 223:  /* *cond_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 916:  /* *thumb2_cmse_entry_return */
    case 915:  /* *thumb2_return */
    case 871:  /* *epilogue_insns */
    case 870:  /* prologue_thumb1_interwork */
    case 741:  /* *movcc_vfp */
    case 646:  /* iwmmxt_torvscv8qi3 */
    case 645:  /* iwmmxt_torvscv4hi3 */
    case 644:  /* iwmmxt_torvscv2si3 */
    case 643:  /* iwmmxt_torcv8qi3 */
    case 642:  /* iwmmxt_torcv4hi3 */
    case 641:  /* iwmmxt_torcv2si3 */
    case 640:  /* iwmmxt_tandcv8qi3 */
    case 639:  /* iwmmxt_tandcv4hi3 */
    case 638:  /* iwmmxt_tandcv2si3 */
    case 426:  /* *speculation_barrier_insn */
    case 328:  /* load_tp_soft */
    case 315:  /* consttable_end */
    case 314:  /* align_8 */
    case 313:  /* align_4 */
    case 240:  /* trap */
    case 239:  /* nop */
    case 229:  /* blockage */
    case 227:  /* *arm_simple_return */
    case 222:  /* *arm_return */
      break;

    case 221:  /* *sibcall_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 220:  /* *sibcall_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 898:  /* *call_value_reg_thumb2 */
    case 867:  /* *call_value_insn */
    case 865:  /* *call_value_reg_thumb1 */
    case 863:  /* *call_value_reg_thumb1_v5 */
    case 219:  /* *call_value_symbol */
    case 217:  /* *call_value_reg_arm */
    case 216:  /* *call_value_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 896:  /* *call_reg_thumb2 */
    case 866:  /* *call_insn */
    case 862:  /* *call_reg_thumb1 */
    case 860:  /* *call_reg_thumb1_v5 */
    case 218:  /* *call_symbol */
    case 215:  /* *call_reg_arm */
    case 214:  /* *call_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 895:  /* *thumb2_movsfcc_soft_insn */
    case 894:  /* *thumb2_movsicc_insn */
    case 667:  /* *thumb2_movdfcc_vfp */
    case 666:  /* *movdfcc_vfp */
    case 665:  /* *thumb2_movsfcc_vfp */
    case 664:  /* *movsfcc_vfp */
    case 212:  /* *movsfcc_soft_insn */
    case 211:  /* *movsicc_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 210:  /* *cmovhf */
    case 209:  /* *cmovdf */
    case 208:  /* *cmovsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 893:  /* *thumb2_mov_notscc_strict_it */
    case 892:  /* *thumb2_mov_notscc */
    case 891:  /* *thumb2_mov_negscc_strict_it */
    case 890:  /* *thumb2_mov_negscc */
    case 207:  /* *mov_notscc */
    case 206:  /* *mov_negscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 889:  /* *thumb2_mov_scc */
    case 205:  /* *mov_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 204:  /* *arm_cond_branch_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 203:  /* arm_cond_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 202:  /* *deleted_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (pat, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 853:  /* *thumb_cmpdi_zero */
    case 201:  /* *arm_cmpdi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 199:  /* *arm_cmpdi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 198:  /* *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 197:  /* *cmpsi_shiftsi_swp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 196:  /* *cmpsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 749:  /* *cmpdf_trap_vfp */
    case 748:  /* *cmpdf_vfp */
    case 747:  /* *cmpsf_trap_vfp */
    case 746:  /* *cmpsf_vfp */
    case 745:  /* *cmpdf_trap_split_vfp */
    case 744:  /* *cmpdf_split_vfp */
    case 743:  /* *cmpsf_trap_split_vfp */
    case 742:  /* *cmpsf_split_vfp */
    case 200:  /* *arm_cmpdi_unsigned */
    case 195:  /* *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 188:  /* *movsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 187:  /* tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 186:  /* pic_add_dot_plus_eight */
    case 185:  /* pic_add_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2662:  /* atomic_storesi */
    case 2661:  /* atomic_storehi */
    case 2660:  /* atomic_storeqi */
    case 2659:  /* atomic_loadsi */
    case 2658:  /* atomic_loadhi */
    case 2657:  /* atomic_loadqi */
    case 2652:  /* crypto_vmullp64 */
    case 2646:  /* crypto_sha256su0 */
    case 2645:  /* crypto_sha1su1 */
    case 2644:  /* crypto_aese */
    case 2643:  /* crypto_aesd */
    case 2584:  /* neon_vst4_lanev4sf */
    case 2583:  /* neon_vst4_lanev4si */
    case 2582:  /* neon_vst4_lanev8hf */
    case 2581:  /* neon_vst4_lanev8hi */
    case 2580:  /* neon_vst4_lanev2sf */
    case 2579:  /* neon_vst4_lanev2si */
    case 2578:  /* neon_vst4_lanev4hf */
    case 2577:  /* neon_vst4_lanev4hi */
    case 2576:  /* neon_vst4_lanev8qi */
    case 2544:  /* neon_vld4qbv4sf */
    case 2543:  /* neon_vld4qbv4si */
    case 2542:  /* neon_vld4qbv8hf */
    case 2541:  /* neon_vld4qbv8hi */
    case 2540:  /* neon_vld4qbv16qi */
    case 2528:  /* neon_vst3_lanev4sf */
    case 2527:  /* neon_vst3_lanev4si */
    case 2526:  /* neon_vst3_lanev8hf */
    case 2525:  /* neon_vst3_lanev8hi */
    case 2524:  /* neon_vst3_lanev2sf */
    case 2523:  /* neon_vst3_lanev2si */
    case 2522:  /* neon_vst3_lanev4hf */
    case 2521:  /* neon_vst3_lanev4hi */
    case 2520:  /* neon_vst3_lanev8qi */
    case 2488:  /* neon_vld3qbv4sf */
    case 2487:  /* neon_vld3qbv4si */
    case 2486:  /* neon_vld3qbv8hf */
    case 2485:  /* neon_vld3qbv8hi */
    case 2484:  /* neon_vld3qbv16qi */
    case 2472:  /* neon_vst2_lanev4sf */
    case 2471:  /* neon_vst2_lanev4si */
    case 2470:  /* neon_vst2_lanev8hf */
    case 2469:  /* neon_vst2_lanev8hi */
    case 2468:  /* neon_vst2_lanev2sf */
    case 2467:  /* neon_vst2_lanev2si */
    case 2466:  /* neon_vst2_lanev4hf */
    case 2465:  /* neon_vst2_lanev4hi */
    case 2464:  /* neon_vst2_lanev8qi */
    case 2426:  /* neon_vst1_lanev2di */
    case 2425:  /* neon_vst1_lanev4sf */
    case 2424:  /* neon_vst1_lanev4si */
    case 2423:  /* neon_vst1_lanev8hf */
    case 2422:  /* neon_vst1_lanev8hi */
    case 2421:  /* neon_vst1_lanev16qi */
    case 2420:  /* neon_vst1_lanedi */
    case 2419:  /* neon_vst1_lanev2sf */
    case 2418:  /* neon_vst1_lanev2si */
    case 2417:  /* neon_vst1_lanev4hf */
    case 2416:  /* neon_vst1_lanev4hi */
    case 2415:  /* neon_vst1_lanev8qi */
    case 2333:  /* neon_vcombinev16qi */
    case 2332:  /* neon_vtbl2v16qi */
    case 2331:  /* neon_vtbl1v16qi */
    case 2330:  /* neon_vtbl4v8qi */
    case 2329:  /* neon_vtbl3v8qi */
    case 2328:  /* neon_vtbl2v8qi */
    case 2327:  /* neon_vtbl1v8qi */
    case 2278:  /* neon_vshllu_nv2si */
    case 2277:  /* neon_vshlls_nv2si */
    case 2276:  /* neon_vshllu_nv4hi */
    case 2275:  /* neon_vshlls_nv4hi */
    case 2274:  /* neon_vshllu_nv8qi */
    case 2273:  /* neon_vshlls_nv8qi */
    case 2272:  /* neon_vqshlu_nv2di */
    case 2271:  /* neon_vqshlu_ndi */
    case 2270:  /* neon_vqshlu_nv4si */
    case 2269:  /* neon_vqshlu_nv2si */
    case 2268:  /* neon_vqshlu_nv8hi */
    case 2267:  /* neon_vqshlu_nv4hi */
    case 2266:  /* neon_vqshlu_nv16qi */
    case 2265:  /* neon_vqshlu_nv8qi */
    case 2264:  /* neon_vqshl_u_nv2di */
    case 2263:  /* neon_vqshl_s_nv2di */
    case 2262:  /* neon_vqshl_u_ndi */
    case 2261:  /* neon_vqshl_s_ndi */
    case 2260:  /* neon_vqshl_u_nv4si */
    case 2259:  /* neon_vqshl_s_nv4si */
    case 2258:  /* neon_vqshl_u_nv2si */
    case 2257:  /* neon_vqshl_s_nv2si */
    case 2256:  /* neon_vqshl_u_nv8hi */
    case 2255:  /* neon_vqshl_s_nv8hi */
    case 2254:  /* neon_vqshl_u_nv4hi */
    case 2253:  /* neon_vqshl_s_nv4hi */
    case 2252:  /* neon_vqshl_u_nv16qi */
    case 2251:  /* neon_vqshl_s_nv16qi */
    case 2250:  /* neon_vqshl_u_nv8qi */
    case 2249:  /* neon_vqshl_s_nv8qi */
    case 2248:  /* neon_vshl_nv2di */
    case 2247:  /* neon_vshl_ndi */
    case 2246:  /* neon_vshl_nv4si */
    case 2245:  /* neon_vshl_nv2si */
    case 2244:  /* neon_vshl_nv8hi */
    case 2243:  /* neon_vshl_nv4hi */
    case 2242:  /* neon_vshl_nv16qi */
    case 2241:  /* neon_vshl_nv8qi */
    case 2240:  /* neon_vqrshrun_nv2di */
    case 2239:  /* neon_vqshrun_nv2di */
    case 2238:  /* neon_vqrshrun_nv4si */
    case 2237:  /* neon_vqshrun_nv4si */
    case 2236:  /* neon_vqrshrun_nv8hi */
    case 2235:  /* neon_vqshrun_nv8hi */
    case 2234:  /* neon_vqrshrnu_nv2di */
    case 2233:  /* neon_vqrshrns_nv2di */
    case 2232:  /* neon_vqshrnu_nv2di */
    case 2231:  /* neon_vqshrns_nv2di */
    case 2230:  /* neon_vqrshrnu_nv4si */
    case 2229:  /* neon_vqrshrns_nv4si */
    case 2228:  /* neon_vqshrnu_nv4si */
    case 2227:  /* neon_vqshrns_nv4si */
    case 2226:  /* neon_vqrshrnu_nv8hi */
    case 2225:  /* neon_vqrshrns_nv8hi */
    case 2224:  /* neon_vqshrnu_nv8hi */
    case 2223:  /* neon_vqshrns_nv8hi */
    case 2222:  /* neon_vrshrn_nv2di */
    case 2221:  /* neon_vshrn_nv2di */
    case 2220:  /* neon_vrshrn_nv4si */
    case 2219:  /* neon_vshrn_nv4si */
    case 2218:  /* neon_vrshrn_nv8hi */
    case 2217:  /* neon_vshrn_nv8hi */
    case 2216:  /* neon_vrshru_nv2di */
    case 2215:  /* neon_vrshrs_nv2di */
    case 2214:  /* neon_vshru_nv2di */
    case 2213:  /* neon_vshrs_nv2di */
    case 2212:  /* neon_vrshru_ndi */
    case 2211:  /* neon_vrshrs_ndi */
    case 2210:  /* neon_vshru_ndi */
    case 2209:  /* neon_vshrs_ndi */
    case 2208:  /* neon_vrshru_nv4si */
    case 2207:  /* neon_vrshrs_nv4si */
    case 2206:  /* neon_vshru_nv4si */
    case 2205:  /* neon_vshrs_nv4si */
    case 2204:  /* neon_vrshru_nv2si */
    case 2203:  /* neon_vrshrs_nv2si */
    case 2202:  /* neon_vshru_nv2si */
    case 2201:  /* neon_vshrs_nv2si */
    case 2200:  /* neon_vrshru_nv8hi */
    case 2199:  /* neon_vrshrs_nv8hi */
    case 2198:  /* neon_vshru_nv8hi */
    case 2197:  /* neon_vshrs_nv8hi */
    case 2196:  /* neon_vrshru_nv4hi */
    case 2195:  /* neon_vrshrs_nv4hi */
    case 2194:  /* neon_vshru_nv4hi */
    case 2193:  /* neon_vshrs_nv4hi */
    case 2192:  /* neon_vrshru_nv16qi */
    case 2191:  /* neon_vrshrs_nv16qi */
    case 2190:  /* neon_vshru_nv16qi */
    case 2189:  /* neon_vshrs_nv16qi */
    case 2188:  /* neon_vrshru_nv8qi */
    case 2187:  /* neon_vrshrs_nv8qi */
    case 2186:  /* neon_vshru_nv8qi */
    case 2185:  /* neon_vshrs_nv8qi */
    case 2184:  /* neon_vqrshluv2di */
    case 2183:  /* neon_vqrshlsv2di */
    case 2182:  /* neon_vqshluv2di */
    case 2181:  /* neon_vqshlsv2di */
    case 2180:  /* neon_vqrshludi */
    case 2179:  /* neon_vqrshlsdi */
    case 2178:  /* neon_vqshludi */
    case 2177:  /* neon_vqshlsdi */
    case 2176:  /* neon_vqrshluv4si */
    case 2175:  /* neon_vqrshlsv4si */
    case 2174:  /* neon_vqshluv4si */
    case 2173:  /* neon_vqshlsv4si */
    case 2172:  /* neon_vqrshluv2si */
    case 2171:  /* neon_vqrshlsv2si */
    case 2170:  /* neon_vqshluv2si */
    case 2169:  /* neon_vqshlsv2si */
    case 2168:  /* neon_vqrshluv8hi */
    case 2167:  /* neon_vqrshlsv8hi */
    case 2166:  /* neon_vqshluv8hi */
    case 2165:  /* neon_vqshlsv8hi */
    case 2164:  /* neon_vqrshluv4hi */
    case 2163:  /* neon_vqrshlsv4hi */
    case 2162:  /* neon_vqshluv4hi */
    case 2161:  /* neon_vqshlsv4hi */
    case 2160:  /* neon_vqrshluv16qi */
    case 2159:  /* neon_vqrshlsv16qi */
    case 2158:  /* neon_vqshluv16qi */
    case 2157:  /* neon_vqshlsv16qi */
    case 2156:  /* neon_vqrshluv8qi */
    case 2155:  /* neon_vqrshlsv8qi */
    case 2154:  /* neon_vqshluv8qi */
    case 2153:  /* neon_vqshlsv8qi */
    case 2152:  /* neon_vrshluv2di */
    case 2151:  /* neon_vrshlsv2di */
    case 2150:  /* neon_vshluv2di */
    case 2149:  /* neon_vshlsv2di */
    case 2148:  /* neon_vrshludi */
    case 2147:  /* neon_vrshlsdi */
    case 2146:  /* neon_vshludi */
    case 2145:  /* neon_vshlsdi */
    case 2144:  /* neon_vrshluv4si */
    case 2143:  /* neon_vrshlsv4si */
    case 2142:  /* neon_vshluv4si */
    case 2141:  /* neon_vshlsv4si */
    case 2140:  /* neon_vrshluv2si */
    case 2139:  /* neon_vrshlsv2si */
    case 2138:  /* neon_vshluv2si */
    case 2137:  /* neon_vshlsv2si */
    case 2136:  /* neon_vrshluv8hi */
    case 2135:  /* neon_vrshlsv8hi */
    case 2134:  /* neon_vshluv8hi */
    case 2133:  /* neon_vshlsv8hi */
    case 2132:  /* neon_vrshluv4hi */
    case 2131:  /* neon_vrshlsv4hi */
    case 2130:  /* neon_vshluv4hi */
    case 2129:  /* neon_vshlsv4hi */
    case 2128:  /* neon_vrshluv16qi */
    case 2127:  /* neon_vrshlsv16qi */
    case 2126:  /* neon_vshluv16qi */
    case 2125:  /* neon_vshlsv16qi */
    case 2124:  /* neon_vrshluv8qi */
    case 2123:  /* neon_vrshlsv8qi */
    case 2122:  /* neon_vshluv8qi */
    case 2121:  /* neon_vshlsv8qi */
    case 1991:  /* neon_vcvtu_nv8hi */
    case 1990:  /* neon_vcvts_nv8hi */
    case 1989:  /* neon_vcvtu_nv4hi */
    case 1988:  /* neon_vcvts_nv4hi */
    case 1987:  /* neon_vcvtu_nv4si */
    case 1986:  /* neon_vcvts_nv4si */
    case 1985:  /* neon_vcvtu_nv2si */
    case 1984:  /* neon_vcvts_nv2si */
    case 1983:  /* neon_vcvtu_nv4hf */
    case 1982:  /* neon_vcvts_nv4hf */
    case 1981:  /* neon_vcvtu_nv8hf */
    case 1980:  /* neon_vcvts_nv8hf */
    case 1979:  /* neon_vcvtu_nv4sf */
    case 1978:  /* neon_vcvts_nv4sf */
    case 1977:  /* neon_vcvtu_nv2sf */
    case 1976:  /* neon_vcvts_nv2sf */
    case 1806:  /* neon_vcadd270v4sf */
    case 1805:  /* neon_vcadd90v4sf */
    case 1804:  /* neon_vcadd270v2sf */
    case 1803:  /* neon_vcadd90v2sf */
    case 1802:  /* neon_vcadd270v8hf */
    case 1801:  /* neon_vcadd90v8hf */
    case 1800:  /* neon_vcadd270v4hf */
    case 1799:  /* neon_vcadd90v4hf */
    case 1787:  /* neon_vrsqrtsv4hf */
    case 1786:  /* neon_vrsqrtsv8hf */
    case 1785:  /* neon_vrsqrtsv4sf */
    case 1784:  /* neon_vrsqrtsv2sf */
    case 1783:  /* neon_vrecpsv4hf */
    case 1782:  /* neon_vrecpsv8hf */
    case 1781:  /* neon_vrecpsv4sf */
    case 1780:  /* neon_vrecpsv2sf */
    case 1779:  /* neon_vpminfv4sf */
    case 1778:  /* neon_vpmaxfv4sf */
    case 1777:  /* neon_vpminfv2sf */
    case 1776:  /* neon_vpmaxfv2sf */
    case 1775:  /* neon_vpminuv2si */
    case 1774:  /* neon_vpminsv2si */
    case 1773:  /* neon_vpmaxuv2si */
    case 1772:  /* neon_vpmaxsv2si */
    case 1771:  /* neon_vpminuv4hi */
    case 1770:  /* neon_vpminsv4hi */
    case 1769:  /* neon_vpmaxuv4hi */
    case 1768:  /* neon_vpmaxsv4hi */
    case 1767:  /* neon_vpminuv8qi */
    case 1766:  /* neon_vpminsv8qi */
    case 1765:  /* neon_vpmaxuv8qi */
    case 1764:  /* neon_vpmaxsv8qi */
    case 1763:  /* neon_vpadaluv4si */
    case 1762:  /* neon_vpadalsv4si */
    case 1761:  /* neon_vpadaluv2si */
    case 1760:  /* neon_vpadalsv2si */
    case 1759:  /* neon_vpadaluv8hi */
    case 1758:  /* neon_vpadalsv8hi */
    case 1757:  /* neon_vpadaluv4hi */
    case 1756:  /* neon_vpadalsv4hi */
    case 1755:  /* neon_vpadaluv16qi */
    case 1754:  /* neon_vpadalsv16qi */
    case 1753:  /* neon_vpadaluv8qi */
    case 1752:  /* neon_vpadalsv8qi */
    case 1739:  /* fminv4sf3 */
    case 1738:  /* fmaxv4sf3 */
    case 1737:  /* fminv2sf3 */
    case 1736:  /* fmaxv2sf3 */
    case 1735:  /* neon_vminnmv4sf */
    case 1734:  /* neon_vmaxnmv4sf */
    case 1733:  /* neon_vminnmv2sf */
    case 1732:  /* neon_vmaxnmv2sf */
    case 1731:  /* neon_vminnmv4hf */
    case 1730:  /* neon_vmaxnmv4hf */
    case 1729:  /* neon_vminnmv8hf */
    case 1728:  /* neon_vmaxnmv8hf */
    case 1727:  /* neon_vpminfv4hf */
    case 1726:  /* neon_vpmaxfv4hf */
    case 1725:  /* neon_vminfv4hf */
    case 1724:  /* neon_vmaxfv4hf */
    case 1723:  /* neon_vminfv8hf */
    case 1722:  /* neon_vmaxfv8hf */
    case 1721:  /* neon_vminfv4sf */
    case 1720:  /* neon_vmaxfv4sf */
    case 1719:  /* neon_vminfv2sf */
    case 1718:  /* neon_vmaxfv2sf */
    case 1717:  /* neon_vminuv4si */
    case 1716:  /* neon_vminsv4si */
    case 1715:  /* neon_vmaxuv4si */
    case 1714:  /* neon_vmaxsv4si */
    case 1713:  /* neon_vminuv2si */
    case 1712:  /* neon_vminsv2si */
    case 1711:  /* neon_vmaxuv2si */
    case 1710:  /* neon_vmaxsv2si */
    case 1709:  /* neon_vminuv8hi */
    case 1708:  /* neon_vminsv8hi */
    case 1707:  /* neon_vmaxuv8hi */
    case 1706:  /* neon_vmaxsv8hi */
    case 1705:  /* neon_vminuv4hi */
    case 1704:  /* neon_vminsv4hi */
    case 1703:  /* neon_vmaxuv4hi */
    case 1702:  /* neon_vmaxsv4hi */
    case 1701:  /* neon_vminuv16qi */
    case 1700:  /* neon_vminsv16qi */
    case 1699:  /* neon_vmaxuv16qi */
    case 1698:  /* neon_vmaxsv16qi */
    case 1697:  /* neon_vminuv8qi */
    case 1696:  /* neon_vminsv8qi */
    case 1695:  /* neon_vmaxuv8qi */
    case 1694:  /* neon_vmaxsv8qi */
    case 1675:  /* neon_vabdluv2si */
    case 1674:  /* neon_vabdlsv2si */
    case 1673:  /* neon_vabdluv4hi */
    case 1672:  /* neon_vabdlsv4hi */
    case 1671:  /* neon_vabdluv8qi */
    case 1670:  /* neon_vabdlsv8qi */
    case 1669:  /* neon_vabdfv4sf */
    case 1668:  /* neon_vabdfv2sf */
    case 1667:  /* neon_vabdv4hf */
    case 1666:  /* neon_vabdv8hf */
    case 1665:  /* neon_vabduv4si */
    case 1664:  /* neon_vabdsv4si */
    case 1663:  /* neon_vabduv2si */
    case 1662:  /* neon_vabdsv2si */
    case 1661:  /* neon_vabduv8hi */
    case 1660:  /* neon_vabdsv8hi */
    case 1659:  /* neon_vabduv4hi */
    case 1658:  /* neon_vabdsv4hi */
    case 1657:  /* neon_vabduv16qi */
    case 1656:  /* neon_vabdsv16qi */
    case 1655:  /* neon_vabduv8qi */
    case 1654:  /* neon_vabdsv8qi */
    case 1653:  /* neon_vtstv4si */
    case 1652:  /* neon_vtstv2si */
    case 1651:  /* neon_vtstv8hi */
    case 1650:  /* neon_vtstv4hi */
    case 1649:  /* neon_vtstv16qi */
    case 1648:  /* neon_vtstv8qi */
    case 1647:  /* neon_vcaltv4hf_fp16insn_unspec */
    case 1646:  /* neon_vcalev4hf_fp16insn_unspec */
    case 1645:  /* neon_vcagtv4hf_fp16insn_unspec */
    case 1644:  /* neon_vcagev4hf_fp16insn_unspec */
    case 1643:  /* neon_vcaltv8hf_fp16insn_unspec */
    case 1642:  /* neon_vcalev8hf_fp16insn_unspec */
    case 1641:  /* neon_vcagtv8hf_fp16insn_unspec */
    case 1640:  /* neon_vcagev8hf_fp16insn_unspec */
    case 1631:  /* neon_vcagtv4sf_insn_unspec */
    case 1630:  /* neon_vcagev4sf_insn_unspec */
    case 1629:  /* neon_vcagtv2sf_insn_unspec */
    case 1628:  /* neon_vcagev2sf_insn_unspec */
    case 1611:  /* neon_vclev4hf_fp16insn_unspec */
    case 1610:  /* neon_vcltv4hf_fp16insn_unspec */
    case 1609:  /* neon_vcgev4hf_fp16insn_unspec */
    case 1608:  /* neon_vcgtv4hf_fp16insn_unspec */
    case 1607:  /* neon_vceqv4hf_fp16insn_unspec */
    case 1606:  /* neon_vclev8hf_fp16insn_unspec */
    case 1605:  /* neon_vcltv8hf_fp16insn_unspec */
    case 1604:  /* neon_vcgev8hf_fp16insn_unspec */
    case 1603:  /* neon_vcgtv8hf_fp16insn_unspec */
    case 1602:  /* neon_vceqv8hf_fp16insn_unspec */
    case 1591:  /* neon_vclev4sf_insn_unspec */
    case 1590:  /* neon_vcltv4sf_insn_unspec */
    case 1589:  /* neon_vcgev4sf_insn_unspec */
    case 1588:  /* neon_vcgtv4sf_insn_unspec */
    case 1587:  /* neon_vceqv4sf_insn_unspec */
    case 1586:  /* neon_vclev2sf_insn_unspec */
    case 1585:  /* neon_vcltv2sf_insn_unspec */
    case 1584:  /* neon_vcgev2sf_insn_unspec */
    case 1583:  /* neon_vcgtv2sf_insn_unspec */
    case 1582:  /* neon_vceqv2sf_insn_unspec */
    case 1541:  /* neon_vrsubhnv2di */
    case 1540:  /* neon_vsubhnv2di */
    case 1539:  /* neon_vrsubhnv4si */
    case 1538:  /* neon_vsubhnv4si */
    case 1537:  /* neon_vrsubhnv8hi */
    case 1536:  /* neon_vsubhnv8hi */
    case 1535:  /* neon_vhsubuv4si */
    case 1534:  /* neon_vhsubsv4si */
    case 1533:  /* neon_vhsubuv2si */
    case 1532:  /* neon_vhsubsv2si */
    case 1531:  /* neon_vhsubuv8hi */
    case 1530:  /* neon_vhsubsv8hi */
    case 1529:  /* neon_vhsubuv4hi */
    case 1528:  /* neon_vhsubsv4hi */
    case 1527:  /* neon_vhsubuv16qi */
    case 1526:  /* neon_vhsubsv16qi */
    case 1525:  /* neon_vhsubuv8qi */
    case 1524:  /* neon_vhsubsv8qi */
    case 1523:  /* neon_vqsubuv2di */
    case 1522:  /* neon_vqsubsv2di */
    case 1521:  /* neon_vqsubudi */
    case 1520:  /* neon_vqsubsdi */
    case 1519:  /* neon_vqsubuv4si */
    case 1518:  /* neon_vqsubsv4si */
    case 1517:  /* neon_vqsubuv2si */
    case 1516:  /* neon_vqsubsv2si */
    case 1515:  /* neon_vqsubuv8hi */
    case 1514:  /* neon_vqsubsv8hi */
    case 1513:  /* neon_vqsubuv4hi */
    case 1512:  /* neon_vqsubsv4hi */
    case 1511:  /* neon_vqsubuv16qi */
    case 1510:  /* neon_vqsubsv16qi */
    case 1509:  /* neon_vqsubuv8qi */
    case 1508:  /* neon_vqsubsv8qi */
    case 1507:  /* neon_vsubwuv2si */
    case 1506:  /* neon_vsubwsv2si */
    case 1505:  /* neon_vsubwuv4hi */
    case 1504:  /* neon_vsubwsv4hi */
    case 1503:  /* neon_vsubwuv8qi */
    case 1502:  /* neon_vsubwsv8qi */
    case 1501:  /* neon_vsubluv2si */
    case 1500:  /* neon_vsublsv2si */
    case 1499:  /* neon_vsubluv4hi */
    case 1498:  /* neon_vsublsv4hi */
    case 1497:  /* neon_vsubluv8qi */
    case 1496:  /* neon_vsublsv8qi */
    case 1495:  /* neon_vsubv4sf_unspec */
    case 1494:  /* neon_vsubv2sf_unspec */
    case 1493:  /* neon_vqdmullv2si */
    case 1492:  /* neon_vqdmullv4hi */
    case 1491:  /* neon_vmullpv2si */
    case 1490:  /* neon_vmulluv2si */
    case 1489:  /* neon_vmullsv2si */
    case 1488:  /* neon_vmullpv4hi */
    case 1487:  /* neon_vmulluv4hi */
    case 1486:  /* neon_vmullsv4hi */
    case 1485:  /* neon_vmullpv8qi */
    case 1484:  /* neon_vmulluv8qi */
    case 1483:  /* neon_vmullsv8qi */
    case 1470:  /* neon_vqrdmulhv4si */
    case 1469:  /* neon_vqdmulhv4si */
    case 1468:  /* neon_vqrdmulhv8hi */
    case 1467:  /* neon_vqdmulhv8hi */
    case 1466:  /* neon_vqrdmulhv2si */
    case 1465:  /* neon_vqdmulhv2si */
    case 1464:  /* neon_vqrdmulhv4hi */
    case 1463:  /* neon_vqdmulhv4hi */
    case 1406:  /* neon_vmulfv4sf */
    case 1405:  /* neon_vmulfv2sf */
    case 1404:  /* neon_vmulpv16qi */
    case 1403:  /* neon_vmulpv8qi */
    case 1402:  /* neon_vraddhnv2di */
    case 1401:  /* neon_vaddhnv2di */
    case 1400:  /* neon_vraddhnv4si */
    case 1399:  /* neon_vaddhnv4si */
    case 1398:  /* neon_vraddhnv8hi */
    case 1397:  /* neon_vaddhnv8hi */
    case 1396:  /* neon_vqadduv2di */
    case 1395:  /* neon_vqaddsv2di */
    case 1394:  /* neon_vqaddudi */
    case 1393:  /* neon_vqaddsdi */
    case 1392:  /* neon_vqadduv4si */
    case 1391:  /* neon_vqaddsv4si */
    case 1390:  /* neon_vqadduv2si */
    case 1389:  /* neon_vqaddsv2si */
    case 1388:  /* neon_vqadduv8hi */
    case 1387:  /* neon_vqaddsv8hi */
    case 1386:  /* neon_vqadduv4hi */
    case 1385:  /* neon_vqaddsv4hi */
    case 1384:  /* neon_vqadduv16qi */
    case 1383:  /* neon_vqaddsv16qi */
    case 1382:  /* neon_vqadduv8qi */
    case 1381:  /* neon_vqaddsv8qi */
    case 1380:  /* neon_vhadduv4si */
    case 1379:  /* neon_vhaddsv4si */
    case 1378:  /* neon_vrhadduv4si */
    case 1377:  /* neon_vrhaddsv4si */
    case 1376:  /* neon_vhadduv2si */
    case 1375:  /* neon_vhaddsv2si */
    case 1374:  /* neon_vrhadduv2si */
    case 1373:  /* neon_vrhaddsv2si */
    case 1372:  /* neon_vhadduv8hi */
    case 1371:  /* neon_vhaddsv8hi */
    case 1370:  /* neon_vrhadduv8hi */
    case 1369:  /* neon_vrhaddsv8hi */
    case 1368:  /* neon_vhadduv4hi */
    case 1367:  /* neon_vhaddsv4hi */
    case 1366:  /* neon_vrhadduv4hi */
    case 1365:  /* neon_vrhaddsv4hi */
    case 1364:  /* neon_vhadduv16qi */
    case 1363:  /* neon_vhaddsv16qi */
    case 1362:  /* neon_vrhadduv16qi */
    case 1361:  /* neon_vrhaddsv16qi */
    case 1360:  /* neon_vhadduv8qi */
    case 1359:  /* neon_vhaddsv8qi */
    case 1358:  /* neon_vrhadduv8qi */
    case 1357:  /* neon_vrhaddsv8qi */
    case 1356:  /* neon_vaddwuv2si */
    case 1355:  /* neon_vaddwsv2si */
    case 1354:  /* neon_vaddwuv4hi */
    case 1353:  /* neon_vaddwsv4hi */
    case 1352:  /* neon_vaddwuv8qi */
    case 1351:  /* neon_vaddwsv8qi */
    case 1350:  /* neon_vaddluv2si */
    case 1349:  /* neon_vaddlsv2si */
    case 1348:  /* neon_vaddluv4hi */
    case 1347:  /* neon_vaddlsv4hi */
    case 1346:  /* neon_vaddluv8qi */
    case 1345:  /* neon_vaddlsv8qi */
    case 1344:  /* neon_vaddv4sf_unspec */
    case 1343:  /* neon_vaddv2sf_unspec */
    case 1326:  /* neon_vpumaxv2si */
    case 1325:  /* neon_vpumaxv4hi */
    case 1324:  /* neon_vpumaxv8qi */
    case 1323:  /* neon_vpuminv2si */
    case 1322:  /* neon_vpuminv4hi */
    case 1321:  /* neon_vpuminv8qi */
    case 1320:  /* neon_vpsmaxv2sf */
    case 1319:  /* neon_vpsmaxv2si */
    case 1318:  /* neon_vpsmaxv4hi */
    case 1317:  /* neon_vpsmaxv8qi */
    case 1316:  /* neon_vpsminv2sf */
    case 1315:  /* neon_vpsminv2si */
    case 1314:  /* neon_vpsminv4hi */
    case 1313:  /* neon_vpsminv8qi */
    case 1312:  /* neon_vpaddv4hf */
    case 1311:  /* neon_vpadd_internalv2sf */
    case 1310:  /* neon_vpadd_internalv2si */
    case 1309:  /* neon_vpadd_internalv4hi */
    case 1308:  /* neon_vpadd_internalv8qi */
    case 1266:  /* unsigned_shift_di3_neon */
    case 1265:  /* signed_shift_di3_neon */
    case 1261:  /* ashlv2di3_unsigned */
    case 1260:  /* ashlv4si3_unsigned */
    case 1259:  /* ashlv2si3_unsigned */
    case 1258:  /* ashlv8hi3_unsigned */
    case 1257:  /* ashlv4hi3_unsigned */
    case 1256:  /* ashlv16qi3_unsigned */
    case 1255:  /* ashlv8qi3_unsigned */
    case 1254:  /* ashlv2di3_signed */
    case 1253:  /* ashlv4si3_signed */
    case 1252:  /* ashlv2si3_signed */
    case 1251:  /* ashlv8hi3_signed */
    case 1250:  /* ashlv4hi3_signed */
    case 1249:  /* ashlv16qi3_signed */
    case 1248:  /* ashlv8qi3_signed */
    case 805:  /* fmindf3 */
    case 804:  /* fmaxdf3 */
    case 803:  /* fminsf3 */
    case 802:  /* fmaxsf3 */
    case 801:  /* neon_vminnmhf */
    case 800:  /* neon_vmaxnmhf */
    case 738:  /* neon_vrsqrtshf */
    case 610:  /* iwmmxt_wqmulwmr */
    case 609:  /* iwmmxt_wqmulmr */
    case 608:  /* iwmmxt_wqmulwm */
    case 607:  /* iwmmxt_wqmulm */
    case 583:  /* iwmmxt_wsadhz */
    case 582:  /* iwmmxt_wsadbz */
    case 499:  /* gtv2si3 */
    case 498:  /* gtv4hi3 */
    case 497:  /* gtv8qi3 */
    case 496:  /* gtuv2si3 */
    case 495:  /* gtuv4hi3 */
    case 494:  /* gtuv8qi3 */
    case 493:  /* eqv2si3 */
    case 492:  /* eqv4hi3 */
    case 491:  /* eqv8qi3 */
    case 490:  /* iwmmxt_wshufh */
    case 473:  /* iwmmxt_wmacuz */
    case 471:  /* iwmmxt_wmacsz */
    case 347:  /* crc32cw */
    case 346:  /* crc32ch */
    case 345:  /* crc32cb */
    case 344:  /* crc32w */
    case 343:  /* crc32h */
    case 342:  /* crc32b */
    case 231:  /* probe_stack_range */
    case 182:  /* pic_load_addr_unified */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 956:  /* *neon_movxi */
    case 955:  /* *neon_movci */
    case 954:  /* *neon_movoi */
    case 953:  /* *neon_movei */
    case 952:  /* *neon_movti */
    case 951:  /* *neon_movv2di */
    case 950:  /* *neon_movv4sf */
    case 949:  /* *neon_movv4si */
    case 948:  /* *neon_movv8hf */
    case 947:  /* *neon_movv8hi */
    case 946:  /* *neon_movv16qi */
    case 945:  /* *neon_movdi */
    case 944:  /* *neon_movv2sf */
    case 943:  /* *neon_movv2si */
    case 942:  /* *neon_movv4hf */
    case 941:  /* *neon_movv4hi */
    case 940:  /* *neon_movv8qi */
    case 886:  /* *thumb2_movhi_insn */
    case 884:  /* *thumb2_movsi_insn */
    case 840:  /* *thumb_movdf_insn */
    case 839:  /* *thumb1_movsf_insn */
    case 838:  /* *thumb1_movhf */
    case 837:  /* *thumb1_movqi_insn */
    case 836:  /* *thumb1_movhi_insn */
    case 835:  /* *thumb1_movsi_insn */
    case 834:  /* *thumb1_movdi_insn */
    case 663:  /* *thumb2_movdf_vfp */
    case 662:  /* *movdf_vfp */
    case 661:  /* *thumb2_movsf_vfp */
    case 660:  /* *movsf_vfp */
    case 659:  /* *movhf_vfp */
    case 658:  /* *movhf_vfp_neon */
    case 657:  /* *movhf_vfp_fp16 */
    case 656:  /* *movdi_vfp */
    case 655:  /* *thumb2_movsi_vfp */
    case 654:  /* *arm_movsi_vfp */
    case 653:  /* *thumb2_movhi_fp16 */
    case 652:  /* *arm_movhi_fp16 */
    case 651:  /* *thumb2_movhi_vfp */
    case 650:  /* *arm_movhi_vfp */
    case 439:  /* movv8qi_internal */
    case 438:  /* movv4hi_internal */
    case 437:  /* movv2si_internal */
    case 435:  /* *iwmmxt_movsi_insn */
    case 434:  /* *iwmmxt_arm_movdi */
    case 194:  /* *movdf_soft_insn */
    case 193:  /* *arm_movsf_soft_insn */
    case 192:  /* *arm32_movhf */
    case 191:  /* *arm_movqi_insn */
    case 190:  /* *movhi_bytes */
    case 189:  /* *movhi_insn_arch4 */
    case 181:  /* *arm_movsi_insn */
    case 179:  /* *arm_movdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 859:  /* *thumb_jump */
    case 213:  /* *arm_jump */
    case 171:  /* *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 158:  /* *notsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 157:  /* *notsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 882:  /* *thumb2_neg_abssi2 */
    case 154:  /* *arm_neg_abssi2 */
    case 152:  /* *negdi_zero_extendsidi */
    case 151:  /* *negdi_extendsidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 732:  /* fixuns_truncdfsi2 */
    case 731:  /* fixuns_truncsfsi2 */
    case 730:  /* *truncsidf2_vfp */
    case 729:  /* *truncsisf2_vfp */
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
    case 332:  /* *arm_revsh */
    case 150:  /* *zextendsidi_negsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 148:  /* *negsi2_carryin_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 933:  /* *thumb2_negsi2_short */
    case 932:  /* *thumb2_one_cmplsi2_short */
    case 881:  /* *thumb2_abssi2 */
    case 824:  /* *thumb1_negdi2 */
    case 153:  /* *arm_abssi2 */
    case 147:  /* *negdi2_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 146:  /* negdi2_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1068:  /* fmav4hf4_intrinsic */
    case 1067:  /* fmav8hf4_intrinsic */
    case 1066:  /* fmav4hf4 */
    case 1065:  /* fmav8hf4 */
    case 1064:  /* fmav4sf4_intrinsic */
    case 1063:  /* fmav2sf4_intrinsic */
    case 1062:  /* fmav4sf4 */
    case 1061:  /* fmav2sf4 */
    case 713:  /* fmadf4 */
    case 712:  /* fmasf4 */
    case 711:  /* fmahf4 */
    case 143:  /* extzv_t2 */
    case 142:  /* *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2751:  /* arm_load_acquire_exclusivehi */
    case 2750:  /* arm_load_acquire_exclusiveqi */
    case 2749:  /* arm_load_exclusivehi */
    case 2748:  /* arm_load_exclusiveqi */
    case 1098:  /* neon_vcvtauv4sfv4si */
    case 1097:  /* neon_vcvtmuv4sfv4si */
    case 1096:  /* neon_vcvtpuv4sfv4si */
    case 1095:  /* neon_vcvtav4sfv4si */
    case 1094:  /* neon_vcvtmv4sfv4si */
    case 1093:  /* neon_vcvtpv4sfv4si */
    case 1092:  /* neon_vcvtauv2sfv2si */
    case 1091:  /* neon_vcvtmuv2sfv2si */
    case 1090:  /* neon_vcvtpuv2sfv2si */
    case 1089:  /* neon_vcvtav2sfv2si */
    case 1088:  /* neon_vcvtmv2sfv2si */
    case 1087:  /* neon_vcvtpv2sfv2si */
    case 795:  /* lroundudfsi2 */
    case 794:  /* lfloorudfsi2 */
    case 793:  /* lceiludfsi2 */
    case 792:  /* lrounddfsi2 */
    case 791:  /* lfloordfsi2 */
    case 790:  /* lceildfsi2 */
    case 789:  /* lroundusfsi2 */
    case 788:  /* lfloorusfsi2 */
    case 787:  /* lceilusfsi2 */
    case 786:  /* lroundsfsi2 */
    case 785:  /* lfloorsfsi2 */
    case 784:  /* lceilsfsi2 */
    case 139:  /* unaligned_loadhiu */
    case 138:  /* unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2755:  /* arm_load_acquire_exclusivedi */
    case 2754:  /* arm_load_exclusivedi */
    case 2753:  /* arm_load_acquire_exclusivesi */
    case 2752:  /* arm_load_exclusivesi */
    case 2663:  /* arm_atomic_loaddi2_ldrd */
    case 2642:  /* crypto_aesimc */
    case 2641:  /* crypto_aesmc */
    case 2575:  /* neon_vst4qbv4sf */
    case 2574:  /* neon_vst4qbv4si */
    case 2573:  /* neon_vst4qbv8hf */
    case 2572:  /* neon_vst4qbv8hi */
    case 2571:  /* neon_vst4qbv16qi */
    case 2570:  /* neon_vst4qav4sf */
    case 2569:  /* neon_vst4qav4si */
    case 2568:  /* neon_vst4qav8hf */
    case 2567:  /* neon_vst4qav8hi */
    case 2566:  /* neon_vst4qav16qi */
    case 2565:  /* neon_vst4di */
    case 2564:  /* neon_vst4v2sf */
    case 2563:  /* neon_vst4v2si */
    case 2562:  /* neon_vst4v4hf */
    case 2561:  /* neon_vst4v4hi */
    case 2560:  /* neon_vst4v8qi */
    case 2559:  /* neon_vld4_dupdi */
    case 2558:  /* neon_vld4_dupv2sf */
    case 2557:  /* neon_vld4_dupv2si */
    case 2556:  /* neon_vld4_dupv4hf */
    case 2555:  /* neon_vld4_dupv4hi */
    case 2554:  /* neon_vld4_dupv8qi */
    case 2539:  /* neon_vld4qav4sf */
    case 2538:  /* neon_vld4qav4si */
    case 2537:  /* neon_vld4qav8hf */
    case 2536:  /* neon_vld4qav8hi */
    case 2535:  /* neon_vld4qav16qi */
    case 2534:  /* neon_vld4di */
    case 2533:  /* neon_vld4v2sf */
    case 2532:  /* neon_vld4v2si */
    case 2531:  /* neon_vld4v4hf */
    case 2530:  /* neon_vld4v4hi */
    case 2529:  /* neon_vld4v8qi */
    case 2519:  /* neon_vst3qbv4sf */
    case 2518:  /* neon_vst3qbv4si */
    case 2517:  /* neon_vst3qbv8hf */
    case 2516:  /* neon_vst3qbv8hi */
    case 2515:  /* neon_vst3qbv16qi */
    case 2514:  /* neon_vst3qav4sf */
    case 2513:  /* neon_vst3qav4si */
    case 2512:  /* neon_vst3qav8hf */
    case 2511:  /* neon_vst3qav8hi */
    case 2510:  /* neon_vst3qav16qi */
    case 2509:  /* neon_vst3di */
    case 2508:  /* neon_vst3v2sf */
    case 2507:  /* neon_vst3v2si */
    case 2506:  /* neon_vst3v4hf */
    case 2505:  /* neon_vst3v4hi */
    case 2504:  /* neon_vst3v8qi */
    case 2503:  /* neon_vld3_dupdi */
    case 2502:  /* neon_vld3_dupv2sf */
    case 2501:  /* neon_vld3_dupv2si */
    case 2500:  /* neon_vld3_dupv4hf */
    case 2499:  /* neon_vld3_dupv4hi */
    case 2498:  /* neon_vld3_dupv8qi */
    case 2483:  /* neon_vld3qav4sf */
    case 2482:  /* neon_vld3qav4si */
    case 2481:  /* neon_vld3qav8hf */
    case 2480:  /* neon_vld3qav8hi */
    case 2479:  /* neon_vld3qav16qi */
    case 2478:  /* neon_vld3di */
    case 2477:  /* neon_vld3v2sf */
    case 2476:  /* neon_vld3v2si */
    case 2475:  /* neon_vld3v4hf */
    case 2474:  /* neon_vld3v4hi */
    case 2473:  /* neon_vld3v8qi */
    case 2463:  /* neon_vst2v4sf */
    case 2462:  /* neon_vst2v4si */
    case 2461:  /* neon_vst2v8hf */
    case 2460:  /* neon_vst2v8hi */
    case 2459:  /* neon_vst2v16qi */
    case 2458:  /* neon_vst2di */
    case 2457:  /* neon_vst2v2sf */
    case 2456:  /* neon_vst2v2si */
    case 2455:  /* neon_vst2v4hf */
    case 2454:  /* neon_vst2v4hi */
    case 2453:  /* neon_vst2v8qi */
    case 2452:  /* neon_vld2_dupdi */
    case 2451:  /* neon_vld2_dupv2sf */
    case 2450:  /* neon_vld2_dupv2si */
    case 2449:  /* neon_vld2_dupv4hf */
    case 2448:  /* neon_vld2_dupv4hi */
    case 2447:  /* neon_vld2_dupv8qi */
    case 2437:  /* neon_vld2v4sf */
    case 2436:  /* neon_vld2v4si */
    case 2435:  /* neon_vld2v8hf */
    case 2434:  /* neon_vld2v8hi */
    case 2433:  /* neon_vld2v16qi */
    case 2432:  /* neon_vld2di */
    case 2431:  /* neon_vld2v2sf */
    case 2430:  /* neon_vld2v2si */
    case 2429:  /* neon_vld2v4hf */
    case 2428:  /* neon_vld2v4hi */
    case 2427:  /* neon_vld2v8qi */
    case 2414:  /* neon_vst1v2di */
    case 2413:  /* neon_vst1di */
    case 2412:  /* neon_vst1v4sf */
    case 2411:  /* neon_vst1v2sf */
    case 2410:  /* neon_vst1v8hf */
    case 2409:  /* neon_vst1v4hf */
    case 2408:  /* neon_vst1v4si */
    case 2407:  /* neon_vst1v2si */
    case 2406:  /* neon_vst1v8hi */
    case 2405:  /* neon_vst1v4hi */
    case 2404:  /* neon_vst1v16qi */
    case 2403:  /* neon_vst1v8qi */
    case 2379:  /* neon_vld1v2di */
    case 2378:  /* neon_vld1di */
    case 2377:  /* neon_vld1v4sf */
    case 2376:  /* neon_vld1v2sf */
    case 2375:  /* neon_vld1v8hf */
    case 2374:  /* neon_vld1v4hf */
    case 2373:  /* neon_vld1v4si */
    case 2372:  /* neon_vld1v2si */
    case 2371:  /* neon_vld1v8hi */
    case 2370:  /* neon_vld1v4hi */
    case 2369:  /* neon_vld1v16qi */
    case 2368:  /* neon_vld1v8qi */
    case 2108:  /* neon_vrev16v16qi */
    case 2107:  /* neon_vrev16v8qi */
    case 2106:  /* neon_vrev32v8hi */
    case 2105:  /* neon_vrev32v16qi */
    case 2104:  /* neon_vrev32v4hi */
    case 2103:  /* neon_vrev32v8qi */
    case 2102:  /* neon_vrev64v2di */
    case 2101:  /* neon_vrev64v4sf */
    case 2100:  /* neon_vrev64v2sf */
    case 2099:  /* neon_vrev64v8hf */
    case 2098:  /* neon_vrev64v4hf */
    case 2097:  /* neon_vrev64v4si */
    case 2096:  /* neon_vrev64v2si */
    case 2095:  /* neon_vrev64v8hi */
    case 2094:  /* neon_vrev64v4hi */
    case 2093:  /* neon_vrev64v16qi */
    case 2092:  /* neon_vrev64v8qi */
    case 2025:  /* neon_vmovluv2si */
    case 2024:  /* neon_vmovlsv2si */
    case 2023:  /* neon_vmovluv4hi */
    case 2022:  /* neon_vmovlsv4hi */
    case 2021:  /* neon_vmovluv8qi */
    case 2020:  /* neon_vmovlsv8qi */
    case 2019:  /* neon_vqmovunv2di */
    case 2018:  /* neon_vqmovunv4si */
    case 2017:  /* neon_vqmovunv8hi */
    case 2016:  /* neon_vqmovnuv2di */
    case 2015:  /* neon_vqmovnsv2di */
    case 2014:  /* neon_vqmovnuv4si */
    case 2013:  /* neon_vqmovnsv4si */
    case 2012:  /* neon_vqmovnuv8hi */
    case 2011:  /* neon_vqmovnsv8hi */
    case 2010:  /* neon_vmovnv2di */
    case 2009:  /* neon_vmovnv4si */
    case 2008:  /* neon_vmovnv8hi */
    case 2007:  /* neon_vcvtpuv4hf */
    case 2006:  /* neon_vcvtpsv4hf */
    case 2005:  /* neon_vcvtnuv4hf */
    case 2004:  /* neon_vcvtnsv4hf */
    case 2003:  /* neon_vcvtmuv4hf */
    case 2002:  /* neon_vcvtmsv4hf */
    case 2001:  /* neon_vcvtauv4hf */
    case 2000:  /* neon_vcvtasv4hf */
    case 1999:  /* neon_vcvtpuv8hf */
    case 1998:  /* neon_vcvtpsv8hf */
    case 1997:  /* neon_vcvtnuv8hf */
    case 1996:  /* neon_vcvtnsv8hf */
    case 1995:  /* neon_vcvtmuv8hf */
    case 1994:  /* neon_vcvtmsv8hf */
    case 1993:  /* neon_vcvtauv8hf */
    case 1992:  /* neon_vcvtasv8hf */
    case 1975:  /* neon_vcvtuv4hf */
    case 1974:  /* neon_vcvtsv4hf */
    case 1973:  /* neon_vcvtuv8hf */
    case 1972:  /* neon_vcvtsv8hf */
    case 1971:  /* neon_vcvtuv8hi */
    case 1970:  /* neon_vcvtsv8hi */
    case 1969:  /* neon_vcvtuv4hi */
    case 1968:  /* neon_vcvtsv4hi */
    case 1967:  /* neon_vcvtv4hfv4sf */
    case 1966:  /* neon_vcvtv4sfv4hf */
    case 1965:  /* neon_vcvtuv4si */
    case 1964:  /* neon_vcvtsv4si */
    case 1963:  /* neon_vcvtuv2si */
    case 1962:  /* neon_vcvtsv2si */
    case 1961:  /* neon_vcvtuv4sf */
    case 1960:  /* neon_vcvtsv4sf */
    case 1959:  /* neon_vcvtuv2sf */
    case 1958:  /* neon_vcvtsv2sf */
    case 1892:  /* neon_vrsqrtev4sf */
    case 1891:  /* neon_vrsqrtev4si */
    case 1890:  /* neon_vrsqrtev2sf */
    case 1889:  /* neon_vrsqrtev2si */
    case 1888:  /* neon_vrecpev4sf */
    case 1887:  /* neon_vrecpev4si */
    case 1886:  /* neon_vrecpev2sf */
    case 1885:  /* neon_vrecpev2si */
    case 1884:  /* neon_vrecpev4hf */
    case 1883:  /* neon_vrecpev8hf */
    case 1874:  /* neon_vclsv4si */
    case 1873:  /* neon_vclsv2si */
    case 1872:  /* neon_vclsv8hi */
    case 1871:  /* neon_vclsv4hi */
    case 1870:  /* neon_vclsv16qi */
    case 1869:  /* neon_vclsv8qi */
    case 1868:  /* neon_vqnegv4si */
    case 1867:  /* neon_vqnegv2si */
    case 1866:  /* neon_vqnegv8hi */
    case 1865:  /* neon_vqnegv4hi */
    case 1864:  /* neon_vqnegv16qi */
    case 1863:  /* neon_vqnegv8qi */
    case 1793:  /* neon_vqabsv4si */
    case 1792:  /* neon_vqabsv2si */
    case 1791:  /* neon_vqabsv8hi */
    case 1790:  /* neon_vqabsv4hi */
    case 1789:  /* neon_vqabsv16qi */
    case 1788:  /* neon_vqabsv8qi */
    case 1751:  /* neon_vpaddluv4si */
    case 1750:  /* neon_vpaddlsv4si */
    case 1749:  /* neon_vpaddluv2si */
    case 1748:  /* neon_vpaddlsv2si */
    case 1747:  /* neon_vpaddluv8hi */
    case 1746:  /* neon_vpaddlsv8hi */
    case 1745:  /* neon_vpaddluv4hi */
    case 1744:  /* neon_vpaddlsv4hi */
    case 1743:  /* neon_vpaddluv16qi */
    case 1742:  /* neon_vpaddlsv16qi */
    case 1741:  /* neon_vpaddluv8qi */
    case 1740:  /* neon_vpaddlsv8qi */
    case 1307:  /* arm_reduc_plus_internal_v2di */
    case 1262:  /* neon_load_count */
    case 1201:  /* neon_vrsqrtev4hf */
    case 1200:  /* neon_vrsqrtev8hf */
    case 1199:  /* neon_vrndxv4hf */
    case 1198:  /* neon_vrndpv4hf */
    case 1197:  /* neon_vrndnv4hf */
    case 1196:  /* neon_vrndmv4hf */
    case 1195:  /* neon_vrndav4hf */
    case 1194:  /* neon_vrndv4hf */
    case 1193:  /* neon_vrndxv8hf */
    case 1192:  /* neon_vrndpv8hf */
    case 1191:  /* neon_vrndnv8hf */
    case 1190:  /* neon_vrndmv8hf */
    case 1189:  /* neon_vrndav8hf */
    case 1188:  /* neon_vrndv8hf */
    case 1086:  /* neon_vrintnv4sf */
    case 1085:  /* neon_vrintav4sf */
    case 1084:  /* neon_vrintxv4sf */
    case 1083:  /* neon_vrintmv4sf */
    case 1082:  /* neon_vrintzv4sf */
    case 1081:  /* neon_vrintpv4sf */
    case 1080:  /* neon_vrintnv2sf */
    case 1079:  /* neon_vrintav2sf */
    case 1078:  /* neon_vrintxv2sf */
    case 1077:  /* neon_vrintmv2sf */
    case 1076:  /* neon_vrintzv2sf */
    case 1075:  /* neon_vrintpv2sf */
    case 980:  /* *movmisalignv2di_neon_load */
    case 979:  /* *movmisalignv4sf_neon_load */
    case 978:  /* *movmisalignv4si_neon_load */
    case 977:  /* *movmisalignv8hf_neon_load */
    case 976:  /* *movmisalignv8hi_neon_load */
    case 975:  /* *movmisalignv16qi_neon_load */
    case 974:  /* *movmisalignv2di_neon_store */
    case 973:  /* *movmisalignv4sf_neon_store */
    case 972:  /* *movmisalignv4si_neon_store */
    case 971:  /* *movmisalignv8hf_neon_store */
    case 970:  /* *movmisalignv8hi_neon_store */
    case 969:  /* *movmisalignv16qi_neon_store */
    case 968:  /* *movmisaligndi_neon_load */
    case 967:  /* *movmisalignv2sf_neon_load */
    case 966:  /* *movmisalignv2si_neon_load */
    case 965:  /* *movmisalignv4hf_neon_load */
    case 964:  /* *movmisalignv4hi_neon_load */
    case 963:  /* *movmisalignv8qi_neon_load */
    case 962:  /* *movmisaligndi_neon_store */
    case 961:  /* *movmisalignv2sf_neon_store */
    case 960:  /* *movmisalignv2si_neon_store */
    case 959:  /* *movmisalignv4hf_neon_store */
    case 958:  /* *movmisalignv4hi_neon_store */
    case 957:  /* *movmisalignv8qi_neon_store */
    case 783:  /* rounddf2 */
    case 782:  /* rintdf2 */
    case 781:  /* nearbyintdf2 */
    case 780:  /* floordf2 */
    case 779:  /* ceildf2 */
    case 778:  /* btruncdf2 */
    case 777:  /* roundsf2 */
    case 776:  /* rintsf2 */
    case 775:  /* nearbyintsf2 */
    case 774:  /* floorsf2 */
    case 773:  /* ceilsf2 */
    case 772:  /* btruncsf2 */
    case 770:  /* neon_vcvtphusi */
    case 769:  /* neon_vcvtphssi */
    case 768:  /* neon_vcvtnhusi */
    case 767:  /* neon_vcvtnhssi */
    case 766:  /* neon_vcvtmhusi */
    case 765:  /* neon_vcvtmhssi */
    case 764:  /* neon_vcvtahusi */
    case 763:  /* neon_vcvtahssi */
    case 758:  /* neon_vcvthusi */
    case 757:  /* neon_vcvthssi */
    case 756:  /* neon_vcvthuhf */
    case 755:  /* neon_vcvthshf */
    case 680:  /* neon_vrndihf */
    case 679:  /* neon_vrndxhf */
    case 678:  /* neon_vrndphf */
    case 677:  /* neon_vrndnhf */
    case 676:  /* neon_vrndmhf */
    case 675:  /* neon_vrndahf */
    case 674:  /* neon_vrndhf */
    case 586:  /* iwmmxt_wabsv8qi3 */
    case 585:  /* iwmmxt_wabsv4hi3 */
    case 584:  /* iwmmxt_wabsv2si3 */
    case 573:  /* iwmmxt_waccw */
    case 572:  /* iwmmxt_wacch */
    case 571:  /* iwmmxt_waccb */
    case 570:  /* iwmmxt_tmovmskw */
    case 569:  /* iwmmxt_tmovmskh */
    case 568:  /* iwmmxt_tmovmskb */
    case 322:  /* rbitsi2 */
    case 184:  /* pic_load_addr_thumb1 */
    case 183:  /* pic_load_addr_32bit */
    case 141:  /* unaligned_storehi */
    case 140:  /* unaligned_storesi */
    case 137:  /* unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 136:  /* *not_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 135:  /* *not_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 134:  /* *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 133:  /* *shiftsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 132:  /* *shiftsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 131:  /* *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 130:  /* *satsi_smin_shift */
    case 129:  /* *satsi_smax_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 128:  /* *satsi_smin */
    case 127:  /* *satsi_smax */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 907:  /* *thumb2_cond_sub */
    case 261:  /* *cond_sub */
    case 126:  /* *minmax_arithsi_non_canon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 125:  /* *minmax_arithsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 919:  /* *thumb2_shiftsi3_short */
    case 918:  /* *thumb2_alusi3_short */
    case 124:  /* *store_minmaxsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 116:  /* *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 929:  /* *thumb2_mulsi_short_compare0_scratch */
    case 109:  /* *iorsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 103:  /* *andsi_notsi_si_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 102:  /* *andsi_notsi_si_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 101:  /* andsi_not_shiftsi_si_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 3;
      break;

    case 100:  /* andsi_not_shiftsi_si_scc_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 939:  /* *orsi_not_shiftsi_si */
    case 876:  /* *thumb_andsi_not_shiftsi_si */
    case 99:  /* andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 936:  /* *iordi_notdi_zesidi */
    case 96:  /* *anddi_notdi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 937:  /* *iordi_notsesidi_di */
    case 935:  /* *iordi_notzesidi_di */
    case 97:  /* *anddi_notsesidi_di */
    case 95:  /* *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1288:  /* widen_usumv2si3 */
    case 1287:  /* widen_usumv4hi3 */
    case 1286:  /* widen_usumv8qi3 */
    case 1279:  /* widen_ssumv2si3 */
    case 1278:  /* widen_ssumv4hi3 */
    case 1277:  /* widen_ssumv8qi3 */
    case 934:  /* *iordi_notdi_di */
    case 817:  /* thumb1_bicsi3 */
    case 753:  /* *combine_vcvt_f64_s32 */
    case 752:  /* *combine_vcvt_f64_u32 */
    case 751:  /* *combine_vcvt_f32_s32 */
    case 750:  /* *combine_vcvt_f32_u32 */
    case 697:  /* *muldf3negdf_vfp */
    case 695:  /* *mulsf3negsf_vfp */
    case 693:  /* *mulsf3neghf_vfp */
    case 178:  /* *arm_extendqisi2addsi */
    case 174:  /* *arm_extendhisi2addsi */
    case 170:  /* *arm_zero_extendqisi2addsi */
    case 167:  /* *arm_zero_extendhisi2addsi */
    case 94:  /* *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 93:  /* insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 92:  /* insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 91:  /* *ite_ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 90:  /* *ite_ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 88:  /* *ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 87:  /* *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 86:  /* *andsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1144:  /* bicdi3_neon */
    case 1143:  /* bicv2di3_neon */
    case 1142:  /* bicv4sf3_neon */
    case 1141:  /* bicv2sf3_neon */
    case 1140:  /* bicv8hf3_neon */
    case 1139:  /* bicv4hf3_neon */
    case 1138:  /* bicv4si3_neon */
    case 1137:  /* bicv2si3_neon */
    case 1136:  /* bicv8hi3_neon */
    case 1135:  /* bicv4hi3_neon */
    case 1134:  /* bicv16qi3_neon */
    case 1133:  /* bicv8qi3_neon */
    case 1132:  /* orndi3_neon */
    case 1131:  /* ornv2di3_neon */
    case 1130:  /* ornv4sf3_neon */
    case 1129:  /* ornv2sf3_neon */
    case 1128:  /* ornv8hf3_neon */
    case 1127:  /* ornv4hf3_neon */
    case 1126:  /* ornv4si3_neon */
    case 1125:  /* ornv2si3_neon */
    case 1124:  /* ornv8hi3_neon */
    case 1123:  /* ornv4hi3_neon */
    case 1122:  /* ornv16qi3_neon */
    case 1121:  /* ornv8qi3_neon */
    case 938:  /* *orsi_notsi_si */
    case 112:  /* *xordi_sesidi_di */
    case 111:  /* *xordi_zesidi_di */
    case 106:  /* *iordi_sesidi_di */
    case 105:  /* *iordi_zesidi_di */
    case 98:  /* andsi_notsi_si */
    case 83:  /* *anddi_sesdi_di */
    case 82:  /* *anddi_zesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 80:  /* *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 79:  /* *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 78:  /* maddhidi4 */
    case 77:  /* *maddhisi4tt */
    case 76:  /* *maddhisi4tb */
    case 75:  /* maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 70:  /* *umulsi3_highpart_v6 */
    case 69:  /* *umulsi3_highpart_nov6 */
    case 68:  /* *smulsi3_highpart_v6 */
    case 67:  /* *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 2629:  /* vec_pack_trunc_v2di */
    case 2628:  /* vec_pack_trunc_v4si */
    case 2627:  /* vec_pack_trunc_v8hi */
    case 2626:  /* neon_vec_umult_v2si */
    case 2625:  /* neon_vec_smult_v2si */
    case 2624:  /* neon_vec_umult_v4hi */
    case 2623:  /* neon_vec_smult_v4hi */
    case 2622:  /* neon_vec_umult_v8qi */
    case 2621:  /* neon_vec_smult_v8qi */
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
    case 74:  /* *mulhisi3tt */
    case 73:  /* *mulhisi3bt */
    case 72:  /* *mulhisi3tb */
    case 71:  /* mulhisi3 */
    case 64:  /* *umulsidi3_v6 */
    case 63:  /* *umulsidi3_nov6 */
    case 62:  /* *mulsidi3_v6 */
    case 61:  /* *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 66:  /* *umulsidi3adddi_v6 */
    case 65:  /* *umulsidi3adddi */
    case 60:  /* *mulsidi3adddi_v6 */
    case 59:  /* *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 58:  /* *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 57:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 56:  /* *mulsi3addsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 55:  /* *mulsi3addsi_compare0_v6 */
    case 54:  /* *mulsi3addsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 53:  /* *mulsi3addsi_v6 */
    case 52:  /* *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 51:  /* *mulsi_compare0_scratch_v6 */
    case 50:  /* *mulsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 49:  /* *mulsi3_compare0_v6 */
    case 48:  /* *mulsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 46:  /* *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 42:  /* *subdi_zesidi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 39:  /* *subdi_di_sesidi */
    case 38:  /* *subdi_di_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 35:  /* *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      break;

    case 34:  /* *subsi3_carryin_compare_const0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 33:  /* *subsi3_carryin_compare_const */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 32:  /* *subsi3_carryin_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 2821:  /* arm_usatsihi */
    case 2632:  /* neon_vec_pack_trunc_v2di */
    case 2631:  /* neon_vec_pack_trunc_v4si */
    case 2630:  /* neon_vec_pack_trunc_v8hi */
    case 2620:  /* neon_unpacku_v2si */
    case 2619:  /* neon_unpacks_v2si */
    case 2618:  /* neon_unpacku_v4hi */
    case 2617:  /* neon_unpacks_v4hi */
    case 2616:  /* neon_unpacku_v8qi */
    case 2615:  /* neon_unpacks_v8qi */
    case 2402:  /* neon_vld1_dupv2di */
    case 2401:  /* neon_vld1_dupv4sf */
    case 2400:  /* neon_vld1_dupv4si */
    case 2399:  /* neon_vld1_dupv8hf */
    case 2398:  /* neon_vld1_dupv8hi */
    case 2397:  /* neon_vld1_dupv16qi */
    case 2396:  /* neon_vld1_dupv2sf */
    case 2395:  /* neon_vld1_dupv2si */
    case 2394:  /* neon_vld1_dupv4hf */
    case 2393:  /* neon_vld1_dupv4hi */
    case 2392:  /* neon_vld1_dupv8qi */
    case 1957:  /* fixuns_truncv4sfv4si2 */
    case 1956:  /* fixuns_truncv2sfv2si2 */
    case 1955:  /* fix_truncv4sfv4si2 */
    case 1954:  /* fix_truncv2sfv2si2 */
    case 1953:  /* floatunsv4siv4sf2 */
    case 1952:  /* floatunsv2siv2sf2 */
    case 1951:  /* floatv4siv4sf2 */
    case 1950:  /* floatv2siv2sf2 */
    case 1921:  /* neon_vdup_nv2di */
    case 1920:  /* neon_vdup_nv4sf */
    case 1919:  /* neon_vdup_nv4si */
    case 1918:  /* neon_vdup_nv2sf */
    case 1917:  /* neon_vdup_nv2si */
    case 1916:  /* neon_vdup_nv8hf */
    case 1915:  /* neon_vdup_nv4hf */
    case 1914:  /* neon_vdup_nv8hi */
    case 1913:  /* neon_vdup_nv16qi */
    case 1912:  /* neon_vdup_nv4hi */
    case 1911:  /* neon_vdup_nv8qi */
    case 1882:  /* popcountv16qi2 */
    case 1881:  /* popcountv8qi2 */
    case 1880:  /* clzv4si2 */
    case 1879:  /* clzv2si2 */
    case 1878:  /* clzv8hi2 */
    case 1877:  /* clzv4hi2 */
    case 1876:  /* clzv16qi2 */
    case 1875:  /* clzv8qi2 */
    case 1798:  /* neon_bswapv2di */
    case 1797:  /* neon_bswapv4si */
    case 1796:  /* neon_bswapv2si */
    case 1795:  /* neon_bswapv8hi */
    case 1794:  /* neon_bswapv4hi */
    case 1187:  /* negv4hf2 */
    case 1186:  /* absv4hf2 */
    case 1185:  /* negv8hf2 */
    case 1184:  /* absv8hf2 */
    case 1182:  /* negv4sf2 */
    case 1181:  /* negv2sf2 */
    case 1180:  /* negv4si2 */
    case 1179:  /* negv2si2 */
    case 1178:  /* negv8hi2 */
    case 1177:  /* negv4hi2 */
    case 1176:  /* negv16qi2 */
    case 1175:  /* negv8qi2 */
    case 1174:  /* absv4sf2 */
    case 1173:  /* absv2sf2 */
    case 1172:  /* absv4si2 */
    case 1171:  /* absv2si2 */
    case 1170:  /* absv8hi2 */
    case 1169:  /* absv4hi2 */
    case 1168:  /* absv16qi2 */
    case 1167:  /* absv8qi2 */
    case 1166:  /* one_cmplv2di2 */
    case 1165:  /* one_cmplv4sf2 */
    case 1164:  /* one_cmplv2sf2 */
    case 1163:  /* one_cmplv8hf2 */
    case 1162:  /* one_cmplv4hf2 */
    case 1161:  /* one_cmplv4si2 */
    case 1160:  /* one_cmplv2si2 */
    case 1159:  /* one_cmplv8hi2 */
    case 1158:  /* one_cmplv4hi2 */
    case 1157:  /* one_cmplv16qi2 */
    case 1156:  /* one_cmplv8qi2 */
    case 912:  /* thumb2_zero_extendqisi2_v6 */
    case 911:  /* *thumb2_zero_extendhisi2_v6 */
    case 910:  /* *thumb2_extendqisi_v6 */
    case 833:  /* thumb1_extendqisi2 */
    case 831:  /* *thumb1_zero_extendqisi2_v6 */
    case 830:  /* *thumb1_zero_extendqisi2 */
    case 829:  /* *thumb1_zero_extendhisi2 */
    case 828:  /* *thumb1_one_cmplsi2 */
    case 825:  /* *thumb1_negsi2 */
    case 740:  /* *sqrtdf2_vfp */
    case 739:  /* *sqrtsf2_vfp */
    case 737:  /* neon_vsqrthf */
    case 736:  /* floatunssidf2 */
    case 735:  /* floatunssisf2 */
    case 734:  /* *floatsidf2_vfp */
    case 733:  /* *floatsisf2_vfp */
    case 728:  /* truncsfhf2 */
    case 727:  /* *extendhfdf2 */
    case 726:  /* *truncdfhf2 */
    case 725:  /* extendhfsf2 */
    case 724:  /* *truncdfsf2_vfp */
    case 723:  /* *extendsfdf2_vfp */
    case 673:  /* neghf2 */
    case 672:  /* abshf2 */
    case 671:  /* *negdf2_vfp */
    case 670:  /* *negsf2_vfp */
    case 669:  /* *absdf2_vfp */
    case 668:  /* *abssf2_vfp */
    case 429:  /* tbcstv2si */
    case 428:  /* tbcstv4hi */
    case 427:  /* tbcstv8qi */
    case 333:  /* *arm_rev16 */
    case 331:  /* *arm_rev */
    case 323:  /* ctzsi2 */
    case 321:  /* clzsi2 */
    case 177:  /* *arm_extendqisi_v6 */
    case 176:  /* *arm_extendqisi */
    case 175:  /* *arm_extendqihi_insn */
    case 173:  /* *arm_extendhisi2_v6 */
    case 172:  /* *arm_extendhisi2 */
    case 169:  /* *arm_zero_extendqisi2_v6 */
    case 168:  /* *arm_zero_extendqisi2 */
    case 166:  /* *arm_zero_extendhisi2_v6 */
    case 165:  /* *arm_zero_extendhisi2 */
    case 164:  /* extendsidi2 */
    case 163:  /* extendhidi2 */
    case 162:  /* extendqidi2 */
    case 161:  /* zero_extendsidi2 */
    case 160:  /* zero_extendhidi2 */
    case 159:  /* zero_extendqidi2 */
    case 156:  /* *arm_one_cmplsi2 */
    case 155:  /* *one_cmpldi2_insn */
    case 149:  /* *arm_negsi2 */
    case 120:  /* *smin_0 */
    case 118:  /* *smax_m1 */
    case 117:  /* *smax_0 */
    case 31:  /* *subsi3_carryin_const0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 45:  /* subsi3_compare */
    case 28:  /* subsi3_compare1 */
    case 27:  /* subdi3_compare1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 89:  /* *ne_zeroextractsi_shifted */
    case 26:  /* *addsi3_carryin_clobercc_geu */
    case 25:  /* *addsi3_carryin_clobercc_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 36:  /* *rsbsi3_carryin_shift */
    case 24:  /* *addsi3_carryin_shift_geu */
    case 23:  /* *addsi3_carryin_shift_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 22:  /* *addsi3_carryin_alt2_geu */
    case 21:  /* *addsi3_carryin_alt2_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2636:  /* neon_vabdv4sf_2 */
    case 2635:  /* neon_vabdv2sf_2 */
    case 2634:  /* neon_vabdv8hf_2 */
    case 2633:  /* neon_vabdv4hf_2 */
    case 2614:  /* neon_vec_ushiftl_v2si */
    case 2613:  /* neon_vec_sshiftl_v2si */
    case 2612:  /* neon_vec_ushiftl_v4hi */
    case 2611:  /* neon_vec_sshiftl_v4hi */
    case 2610:  /* neon_vec_ushiftl_v8qi */
    case 2609:  /* neon_vec_sshiftl_v8qi */
    case 2596:  /* neon_vec_unpacku_hi_v4si */
    case 2595:  /* neon_vec_unpacks_hi_v4si */
    case 2594:  /* neon_vec_unpacku_hi_v8hi */
    case 2593:  /* neon_vec_unpacks_hi_v8hi */
    case 2592:  /* neon_vec_unpacku_hi_v16qi */
    case 2591:  /* neon_vec_unpacks_hi_v16qi */
    case 2590:  /* neon_vec_unpacku_lo_v4si */
    case 2589:  /* neon_vec_unpacks_lo_v4si */
    case 2588:  /* neon_vec_unpacku_lo_v8hi */
    case 2587:  /* neon_vec_unpacks_lo_v8hi */
    case 2586:  /* neon_vec_unpacku_lo_v16qi */
    case 2585:  /* neon_vec_unpacks_lo_v16qi */
    case 1623:  /* neon_vcgeuv4si */
    case 1622:  /* neon_vcgtuv4si */
    case 1621:  /* neon_vcgeuv2si */
    case 1620:  /* neon_vcgtuv2si */
    case 1619:  /* neon_vcgeuv8hi */
    case 1618:  /* neon_vcgtuv8hi */
    case 1617:  /* neon_vcgeuv4hi */
    case 1616:  /* neon_vcgtuv4hi */
    case 1615:  /* neon_vcgeuv16qi */
    case 1614:  /* neon_vcgtuv16qi */
    case 1613:  /* neon_vcgeuv8qi */
    case 1612:  /* neon_vcgtuv8qi */
    case 1601:  /* neon_vcltv4hf_fp16insn */
    case 1600:  /* neon_vclev4hf_fp16insn */
    case 1599:  /* neon_vcgev4hf_fp16insn */
    case 1598:  /* neon_vcgtv4hf_fp16insn */
    case 1597:  /* neon_vceqv4hf_fp16insn */
    case 1596:  /* neon_vcltv8hf_fp16insn */
    case 1595:  /* neon_vclev8hf_fp16insn */
    case 1594:  /* neon_vcgev8hf_fp16insn */
    case 1593:  /* neon_vcgtv8hf_fp16insn */
    case 1592:  /* neon_vceqv8hf_fp16insn */
    case 1581:  /* neon_vcltv4sf_insn */
    case 1580:  /* neon_vclev4sf_insn */
    case 1579:  /* neon_vcgev4sf_insn */
    case 1578:  /* neon_vcgtv4sf_insn */
    case 1577:  /* neon_vceqv4sf_insn */
    case 1576:  /* neon_vcltv2sf_insn */
    case 1575:  /* neon_vclev2sf_insn */
    case 1574:  /* neon_vcgev2sf_insn */
    case 1573:  /* neon_vcgtv2sf_insn */
    case 1572:  /* neon_vceqv2sf_insn */
    case 1571:  /* neon_vcltv4si_insn */
    case 1570:  /* neon_vclev4si_insn */
    case 1569:  /* neon_vcgev4si_insn */
    case 1568:  /* neon_vcgtv4si_insn */
    case 1567:  /* neon_vceqv4si_insn */
    case 1566:  /* neon_vcltv2si_insn */
    case 1565:  /* neon_vclev2si_insn */
    case 1564:  /* neon_vcgev2si_insn */
    case 1563:  /* neon_vcgtv2si_insn */
    case 1562:  /* neon_vceqv2si_insn */
    case 1561:  /* neon_vcltv8hi_insn */
    case 1560:  /* neon_vclev8hi_insn */
    case 1559:  /* neon_vcgev8hi_insn */
    case 1558:  /* neon_vcgtv8hi_insn */
    case 1557:  /* neon_vceqv8hi_insn */
    case 1556:  /* neon_vcltv4hi_insn */
    case 1555:  /* neon_vclev4hi_insn */
    case 1554:  /* neon_vcgev4hi_insn */
    case 1553:  /* neon_vcgtv4hi_insn */
    case 1552:  /* neon_vceqv4hi_insn */
    case 1551:  /* neon_vcltv16qi_insn */
    case 1550:  /* neon_vclev16qi_insn */
    case 1549:  /* neon_vcgev16qi_insn */
    case 1548:  /* neon_vcgtv16qi_insn */
    case 1547:  /* neon_vceqv16qi_insn */
    case 1546:  /* neon_vcltv8qi_insn */
    case 1545:  /* neon_vclev8qi_insn */
    case 1544:  /* neon_vcgev8qi_insn */
    case 1543:  /* neon_vcgtv8qi_insn */
    case 1542:  /* neon_vceqv8qi_insn */
    case 856:  /* cstoresi_nltu_thumb1 */
    case 698:  /* *negmuldf3_vfp */
    case 696:  /* *negmulsf3_vfp */
    case 694:  /* *negmulhf3_vfp */
    case 30:  /* *subsi3_carryin_const */
    case 29:  /* *subsi3_carryin */
    case 20:  /* *addsi3_carryin_geu */
    case 19:  /* *addsi3_carryin_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 18:  /* *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 17:  /* *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 16:  /* *addsi3_compare_op2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 15:  /* *addsi3_compare_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 14:  /* cmpsi2_addneg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 13:  /* *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 926:  /* *thumb2_addsi3_compare0_scratch */
    case 115:  /* *xorsi3_compare0_scratch */
    case 12:  /* *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 928:  /* *thumb2_mulsi_short_compare0 */
    case 925:  /* thumb2_addsi3_compare0 */
    case 114:  /* *xorsi3_compare0 */
    case 108:  /* *iorsi3_compare0 */
    case 85:  /* *andsi3_compare0 */
    case 44:  /* subsi3_compare0 */
    case 11:  /* addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 9:  /* *addsi3_compareC_upper */
    case 7:  /* *addsi3_compareV_upper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 10:  /* addsi3_compareC */
    case 8:  /* adddi3_compareC */
    case 6:  /* addsi3_compareV */
    case 5:  /* adddi3_compareV */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 2817:  /* sssubsa3 */
    case 2816:  /* sssubsq3 */
    case 2815:  /* sssubha3 */
    case 2814:  /* sssubv2ha3 */
    case 2813:  /* sssubhq3 */
    case 2812:  /* sssubqq3 */
    case 2811:  /* sssubv2hq3 */
    case 2810:  /* sssubv4qq3 */
    case 2809:  /* ussubuha3 */
    case 2808:  /* ussubv2uha3 */
    case 2807:  /* ussubuhq3 */
    case 2806:  /* ussubuqq3 */
    case 2805:  /* ussubv2uhq3 */
    case 2804:  /* ussubv4uqq3 */
    case 2803:  /* subv2ha3 */
    case 2802:  /* subv2hq3 */
    case 2801:  /* subv4qq3 */
    case 2800:  /* subusa3 */
    case 2799:  /* subuha3 */
    case 2798:  /* subsa3 */
    case 2797:  /* subha3 */
    case 2796:  /* subusq3 */
    case 2795:  /* subuhq3 */
    case 2794:  /* subuqq3 */
    case 2793:  /* subsq3 */
    case 2792:  /* subhq3 */
    case 2791:  /* subqq3 */
    case 2790:  /* ssaddsa3 */
    case 2789:  /* ssaddsq3 */
    case 2788:  /* ssaddha3 */
    case 2787:  /* ssaddv2ha3 */
    case 2786:  /* ssaddhq3 */
    case 2785:  /* ssaddqq3 */
    case 2784:  /* ssaddv2hq3 */
    case 2783:  /* ssaddv4qq3 */
    case 2782:  /* usadduha3 */
    case 2781:  /* usaddv2uha3 */
    case 2780:  /* usadduhq3 */
    case 2779:  /* usadduqq3 */
    case 2778:  /* usaddv2uhq3 */
    case 2777:  /* usaddv4uqq3 */
    case 2776:  /* addv2ha3 */
    case 2775:  /* addv2hq3 */
    case 2774:  /* addv4qq3 */
    case 2773:  /* addusa3 */
    case 2772:  /* adduha3 */
    case 2771:  /* addsa3 */
    case 2770:  /* addha3 */
    case 2769:  /* addusq3 */
    case 2768:  /* adduhq3 */
    case 2767:  /* adduqq3 */
    case 2766:  /* addsq3 */
    case 2765:  /* addhq3 */
    case 2764:  /* addqq3 */
    case 1949:  /* neon_vcombinedi */
    case 1948:  /* neon_vcombinev2sf */
    case 1947:  /* neon_vcombinev2si */
    case 1946:  /* neon_vcombinev4hf */
    case 1945:  /* neon_vcombinev4hi */
    case 1944:  /* neon_vcombinev8qi */
    case 1410:  /* neon_vmulfv4hf */
    case 1409:  /* neon_vmulfv8hf */
    case 1408:  /* mulv4hf3 */
    case 1407:  /* mulv8hf3 */
    case 1342:  /* *us_subv2sf_neon */
    case 1341:  /* *us_subv2si_neon */
    case 1340:  /* *us_subv4hi_neon */
    case 1339:  /* *us_subv8qi_neon */
    case 1338:  /* *ss_subv2sf_neon */
    case 1337:  /* *ss_subv2si_neon */
    case 1336:  /* *ss_subv4hi_neon */
    case 1335:  /* *ss_subv8qi_neon */
    case 1334:  /* *us_addv2sf_neon */
    case 1333:  /* *us_addv2si_neon */
    case 1332:  /* *us_addv4hi_neon */
    case 1331:  /* *us_addv8qi_neon */
    case 1330:  /* *ss_addv2sf_neon */
    case 1329:  /* *ss_addv2si_neon */
    case 1328:  /* *ss_addv4hi_neon */
    case 1327:  /* *ss_addv8qi_neon */
    case 1268:  /* lshrdi3_neon_imm_noclobber */
    case 1267:  /* ashrdi3_neon_imm_noclobber */
    case 1263:  /* ashldi3_neon_noclobber */
    case 1247:  /* vlshrv4si3_imm */
    case 1246:  /* vlshrv2si3_imm */
    case 1245:  /* vlshrv8hi3_imm */
    case 1244:  /* vlshrv4hi3_imm */
    case 1243:  /* vlshrv16qi3_imm */
    case 1242:  /* vlshrv8qi3_imm */
    case 1241:  /* vashrv4si3_imm */
    case 1240:  /* vashrv2si3_imm */
    case 1239:  /* vashrv8hi3_imm */
    case 1238:  /* vashrv4hi3_imm */
    case 1237:  /* vashrv16qi3_imm */
    case 1236:  /* vashrv8qi3_imm */
    case 1235:  /* vashlv4si3 */
    case 1234:  /* vashlv2si3 */
    case 1233:  /* vashlv8hi3 */
    case 1232:  /* vashlv4hi3 */
    case 1231:  /* vashlv16qi3 */
    case 1230:  /* vashlv8qi3 */
    case 1229:  /* *smaxv4sf3_neon */
    case 1228:  /* *smaxv2sf3_neon */
    case 1227:  /* *smaxv4si3_neon */
    case 1226:  /* *smaxv2si3_neon */
    case 1225:  /* *smaxv8hi3_neon */
    case 1224:  /* *smaxv4hi3_neon */
    case 1223:  /* *smaxv16qi3_neon */
    case 1222:  /* *smaxv8qi3_neon */
    case 1221:  /* *sminv4sf3_neon */
    case 1220:  /* *sminv2sf3_neon */
    case 1219:  /* *sminv4si3_neon */
    case 1218:  /* *sminv2si3_neon */
    case 1217:  /* *sminv8hi3_neon */
    case 1216:  /* *sminv4hi3_neon */
    case 1215:  /* *sminv16qi3_neon */
    case 1214:  /* *sminv8qi3_neon */
    case 1213:  /* *umaxv4si3_neon */
    case 1212:  /* *umaxv2si3_neon */
    case 1211:  /* *umaxv8hi3_neon */
    case 1210:  /* *umaxv4hi3_neon */
    case 1209:  /* *umaxv16qi3_neon */
    case 1208:  /* *umaxv8qi3_neon */
    case 1207:  /* *uminv4si3_neon */
    case 1206:  /* *uminv2si3_neon */
    case 1205:  /* *uminv8hi3_neon */
    case 1204:  /* *uminv4hi3_neon */
    case 1203:  /* *uminv16qi3_neon */
    case 1202:  /* *uminv8qi3_neon */
    case 1155:  /* xorv2di3 */
    case 1154:  /* xorv4sf3 */
    case 1153:  /* xorv2sf3 */
    case 1152:  /* xorv8hf3 */
    case 1151:  /* xorv4hf3 */
    case 1150:  /* xorv4si3 */
    case 1149:  /* xorv2si3 */
    case 1148:  /* xorv8hi3 */
    case 1147:  /* xorv4hi3 */
    case 1146:  /* xorv16qi3 */
    case 1145:  /* xorv8qi3 */
    case 1120:  /* andv2di3 */
    case 1119:  /* andv4sf3 */
    case 1118:  /* andv2sf3 */
    case 1117:  /* andv8hf3 */
    case 1116:  /* andv4hf3 */
    case 1115:  /* andv4si3 */
    case 1114:  /* andv2si3 */
    case 1113:  /* andv8hi3 */
    case 1112:  /* andv4hi3 */
    case 1111:  /* andv16qi3 */
    case 1110:  /* andv8qi3 */
    case 1109:  /* iorv2di3 */
    case 1108:  /* iorv4sf3 */
    case 1107:  /* iorv2sf3 */
    case 1106:  /* iorv8hf3 */
    case 1105:  /* iorv4hf3 */
    case 1104:  /* iorv4si3 */
    case 1103:  /* iorv2si3 */
    case 1102:  /* iorv8hi3 */
    case 1101:  /* iorv4hi3 */
    case 1100:  /* iorv16qi3 */
    case 1099:  /* iorv8qi3 */
    case 1042:  /* *mulv4sf3_neon */
    case 1041:  /* *mulv2sf3_neon */
    case 1040:  /* *mulv4si3_neon */
    case 1039:  /* *mulv2si3_neon */
    case 1038:  /* *mulv8hi3_neon */
    case 1037:  /* *mulv4hi3_neon */
    case 1036:  /* *mulv16qi3_neon */
    case 1035:  /* *mulv8qi3_neon */
    case 1033:  /* subv4hf3_fp16 */
    case 1032:  /* subv8hf3_fp16 */
    case 1031:  /* subv4hf3 */
    case 1030:  /* subv8hf3 */
    case 1029:  /* *subv2di3_neon */
    case 1028:  /* *subv4sf3_neon */
    case 1027:  /* *subv2sf3_neon */
    case 1026:  /* *subv8hf3_neon */
    case 1025:  /* *subv4hf3_neon */
    case 1024:  /* *subv4si3_neon */
    case 1023:  /* *subv2si3_neon */
    case 1022:  /* *subv8hi3_neon */
    case 1021:  /* *subv4hi3_neon */
    case 1020:  /* *subv16qi3_neon */
    case 1019:  /* *subv8qi3_neon */
    case 1017:  /* addv4hf3_fp16 */
    case 1016:  /* addv8hf3_fp16 */
    case 1015:  /* addv4hf3 */
    case 1014:  /* addv8hf3 */
    case 1013:  /* *addv2di3_neon */
    case 1012:  /* *addv4sf3_neon */
    case 1011:  /* *addv2sf3_neon */
    case 1010:  /* *addv8hf3_neon */
    case 1009:  /* *addv4hf3_neon */
    case 1008:  /* *addv4si3_neon */
    case 1007:  /* *addv2si3_neon */
    case 1006:  /* *addv8hi3_neon */
    case 1005:  /* *addv4hi3_neon */
    case 1004:  /* *addv16qi3_neon */
    case 1003:  /* *addv8qi3_neon */
    case 857:  /* cstoresi_ltu_thumb1 */
    case 823:  /* *thumb1_rotrsi3 */
    case 822:  /* *thumb1_lshrsi3 */
    case 821:  /* *thumb1_ashrsi3 */
    case 820:  /* *thumb1_ashlsi3 */
    case 819:  /* *thumb1_xorsi3_insn */
    case 818:  /* *thumb1_iorsi3_insn */
    case 816:  /* *thumb1_andsi3_insn */
    case 815:  /* *thumb_mulsi3_v6 */
    case 814:  /* *thumb_mulsi3 */
    case 813:  /* thumb1_subsi3_insn */
    case 811:  /* *thumb1_addsi3 */
    case 799:  /* smindf3 */
    case 798:  /* sminsf3 */
    case 797:  /* smaxdf3 */
    case 796:  /* smaxsf3 */
    case 692:  /* *muldf3_vfp */
    case 691:  /* *mulsf3_vfp */
    case 690:  /* mulhf3 */
    case 689:  /* *divdf3_vfp */
    case 688:  /* *divsf3_vfp */
    case 687:  /* divhf3 */
    case 686:  /* *subdf3_vfp */
    case 685:  /* *subsf3_vfp */
    case 684:  /* subhf3 */
    case 683:  /* *adddf3_vfp */
    case 682:  /* *addsf3_vfp */
    case 681:  /* addhf3 */
    case 606:  /* iwmmxt_wmulwl */
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
    case 467:  /* *mulv4hi3_iwmmxt */
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
    case 448:  /* *xorv8qi3_iwmmxt */
    case 447:  /* *xorv4hi3_iwmmxt */
    case 446:  /* *xorv2si3_iwmmxt */
    case 445:  /* *iorv8qi3_iwmmxt */
    case 444:  /* *iorv4hi3_iwmmxt */
    case 443:  /* *iorv2si3_iwmmxt */
    case 442:  /* *andv8qi3_iwmmxt */
    case 441:  /* *andv4hi3_iwmmxt */
    case 440:  /* *andv2si3_iwmmxt */
    case 432:  /* iwmmxt_anddi3 */
    case 431:  /* iwmmxt_xordi3 */
    case 430:  /* iwmmxt_iordi3 */
    case 180:  /* *arm_movt */
    case 145:  /* udivsi3 */
    case 144:  /* divsi3 */
    case 113:  /* *arm_xorsi3 */
    case 110:  /* *xordi3_insn */
    case 107:  /* *iorsi3_insn */
    case 104:  /* *iordi3_insn */
    case 84:  /* *arm_andsi3_insn */
    case 81:  /* *anddi3_insn */
    case 47:  /* *arm_mulsi3_v6 */
    case 43:  /* *arm_subsi3_insn */
    case 4:  /* *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 41:  /* *subdi_sesidi_di */
    case 40:  /* *subdi_zesidi_di */
    case 3:  /* *adddi_zesidi_di */
    case 2:  /* *adddi_sesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1034:  /* subdi3_neon */
    case 1018:  /* adddi3_neon */
    case 927:  /* *thumb2_mulsi_short */
    case 924:  /* *thumb2_subsi_short */
    case 923:  /* *thumb2_addsi_short */
    case 880:  /* *thumb2_uminsi3 */
    case 879:  /* *thumb32_umaxsi3 */
    case 878:  /* *thumb2_sminsi3 */
    case 877:  /* *thumb2_smaxsi3 */
    case 812:  /* *thumb_subdi3 */
    case 810:  /* *thumb1_adddi3 */
    case 123:  /* *arm_uminsi3 */
    case 122:  /* *arm_umaxsi3 */
    case 121:  /* *arm_smin_insn */
    case 119:  /* *arm_smax_insn */
    case 37:  /* *arm_subdi3 */
    case 1:  /* *arm_adddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    }
}
