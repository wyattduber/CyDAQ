/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "flags.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "regs.h"
#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_4[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "add%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_11[] = {
  "adds%?\t%0, %1, %2",
  "subs%?\t%0, %1, #%n2",
  "adds%?\t%0, %1, %2",
};

static const char * const output_12[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char *
output_14 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 873 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  /* For 0 and INT_MIN it is essential that we use subs, as adds will result
     in different condition codes (like cmn rather than like cmp), so that
     alternative comes first.  Both alternatives can match for any 0x??000000
     where except for 0 and INT_MIN it doesn't matter what we choose, and also
     for -1 and 1 with TARGET_THUMB2, in that case prefer instruction with #1
     as it is shorter.  */
  if (which_alternative == 0 && operands[3] != const1_rtx)
    return "subs%?\t%0, %1, #%n3";
  else
    return "adds%?\t%0, %1, %3";
}
}

static const char * const output_15[] = {
  "adds%?\t%0, %1, %2",
  "subs%?\t%0, %1, #%n2",
  "adds%?\t%0, %1, %2",
};

static const char * const output_16[] = {
  "adds%?\t%0, %1, %2",
  "subs%?\t%0, %1, #%n2",
  "adds%?\t%0, %1, %2",
};

static const char * const output_17[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_18[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_19[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_20[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_21[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_22[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_29[] = {
  "sbc%?\t%0, %1, %2",
  "rsc%?\t%0, %2, %1",
  "sbc%?\t%0, %2, %2, lsl #1",
};

static const char * const output_43[] = {
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %2",
  "sub%?\t%0, %1, %2",
  "rsb%?\t%0, %2, %1",
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_44[] = {
  "subs%?\t%0, %1, %2",
  "subs%?\t%0, %1, %2",
  "rsbs%?\t%0, %2, %1",
};

static const char * const output_45[] = {
  "subs%?\t%0, %1, %2",
  "subs%?\t%0, %1, %2",
  "rsbs%?\t%0, %2, %1",
};

static const char *
output_81 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2302 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 6: return "vand\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 7: return neon_output_logic_immediate ("vand", &operands[2],
                    DImode, 1, VALID_NEON_QREG_MODE (DImode));
    case 2:
    case 3:
    case 4:
    case 5: /* fall through */
      return "#";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_84[] = {
  "and%?\t%0, %1, %2",
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char * const output_85[] = {
  "ands%?\t%0, %1, %2",
  "bics%?\t%0, %1, #%B2",
  "ands%?\t%0, %1, %2",
};

static const char * const output_86[] = {
  "tst%?\t%0, %1",
  "bics%?\t%2, %0, #%B1",
  "tst%?\t%0, %1",
};

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2533 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_95[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char *
output_104 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3183 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 6: return "vorr\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 7: return neon_output_logic_immediate ("vorr", &operands[2],
		     DImode, 0, VALID_NEON_QREG_MODE (DImode));
    case 2:
    case 3:
    case 4:
    case 5:
      return "#";
    default: gcc_unreachable ();
    }
  }
}

static const char * const output_105[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_107[] = {
  "orr%?\t%0, %1, %2",
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3386 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 1:
    case 2:
    case 3:
    case 4:  /* fall through */
      return "#";
    case 0: /* fall through */
    case 5: return "veor\t%P0, %P1, %P2";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_111[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_113[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3870 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  operands[3] = gen_rtx_fmt_ee (minmax_code (operands[3]), SImode,
				operands[1], operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("ite\t%d3", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3899 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    enum rtx_code code = GET_CODE (operands[4]);
    bool need_else;

    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != IOR && code != XOR))
      need_else = true;
    else
      need_else = false;

    operands[5] = gen_rtx_fmt_ee (minmax_code (operands[5]), SImode,
				  operands[2], operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    if (TARGET_THUMB2)
      {
	if (need_else)
	  output_asm_insn ("ite\t%d5", operands);
	else
	  output_asm_insn ("it\t%d5", operands);
      }
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (need_else)
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3994 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3994 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4020 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4020 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4238 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4256 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4270 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char * const output_144[] = {
  "sdiv%?\t%0, %1, %2",
  "sdiv\t%0, %1, %2",
};

static const char * const output_145[] = {
  "udiv%?\t%0, %1, %2",
  "udiv\t%0, %1, %2",
};

static const char * const output_155[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char * const output_165[] = {
  "#",
  "ldrh%?\t%0, %1",
};

static const char * const output_166[] = {
  "uxth%?\t%0, %1",
  "ldrh%?\t%0, %1",
};

static const char * const output_168[] = {
  "#",
  "ldrb%?\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_169[] = {
  "uxtb%?\t%0, %1",
  "ldrb%?\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_172[] = {
  "#",
  "ldrsh%?\t%0, %1",
};

static const char * const output_173[] = {
  "sxth%?\t%0, %1",
  "ldrsh%?\t%0, %1",
};

static const char * const output_176[] = {
  "#",
  "ldrsb%?\t%0, %1",
};

static const char * const output_177[] = {
  "sxtb%?\t%0, %1",
  "ldrsb%?\t%0, %1",
};

static const char *
output_179 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    case 3:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      /* Fall through.  */
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char * const output_180[] = {
  "movt%?\t%0, #:upper16:%c2",
  "movt\t%0, #:upper16:%c2",
};

static const char * const output_181[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_185 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6249 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				     INTVAL (operands[2]));
  return "add\t%0, %|pc";
  
}

static const char *
output_186 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6265 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_187 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6281 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_188[] = {
  "cmp%?\t%0, #0",
  "subs%?\t%0, %1, #0",
};

static const char * const output_189[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "strh%?\t%1, %0\t%@ movhi",
  "ldrh%?\t%0, %1\t%@ movhi",
};

static const char * const output_190[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_191[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldrb%?\t%0, %1",
  "strb%?\t%1, %0",
  "ldrb%?\t%0, %1",
  "strb%?\t%1, %0",
};

static const char *
output_192 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6904 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldrh%?\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "strh%?\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	long bits;
	rtx ops[4];

	bits = real_to_target (NULL, CONST_DOUBLE_REAL_VALUE (operands[1]),
			       HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_193 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7000 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: return "mov%?\t%0, %1";
    case 1:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      return "ldr%?\t%0, %1\t%@ float";
    case 2: return "str%?\t%1, %0\t%@ float";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_194 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7121 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    case 3:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      /* Fall through.  */
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char * const output_195[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7545 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7571 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7950 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
        return "vsel%d1.f32\t%0, %3, %4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
        return "vsel%D1.f32\t%0, %4, %3";
      default:
        gcc_unreachable ();
      }
    return "";
  }
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7950 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
        return "vsel%d1.f64\t%P0, %P3, %P4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
        return "vsel%D1.f64\t%P0, %P4, %P3";
      default:
        gcc_unreachable ();
      }
    return "";
  }
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7981 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
	return "vsel%d1.f16\t%0, %3, %4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
	return "vsel%D1.f16\t%0, %4, %3";
      default:
	gcc_unreachable ();
      }
    return "";
  }
}

static const char * const output_211[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_212[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8098 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8197 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  return output_call (operands);
  
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8290 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  return output_call (&operands[1]);
  
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8309 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
   rtx op = operands[0];

   /* Switch mode now when possible.  */
   if (SYMBOL_REF_DECL (op) && !TREE_PUBLIC (SYMBOL_REF_DECL (op))
	&& arm_arch5t && arm_change_mode_p (SYMBOL_REF_DECL (op)))
      return NEED_PLT_RELOC ? "blx%?\t%a0(PLT)" : "blx%?\t(%a0)";

    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8333 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
   rtx op = operands[1];

   /* Switch mode now when possible.  */
   if (SYMBOL_REF_DECL (op) && !TREE_PUBLIC (SYMBOL_REF_DECL (op))
	&& arm_arch5t && arm_change_mode_p (SYMBOL_REF_DECL (op)))
      return NEED_PLT_RELOC ? "blx%?\t%a1(PLT)" : "blx%?\t(%a1)";

    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8419 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  if (which_alternative == 1)
    return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  else
    {
      if (arm_arch5t || arm_arch4t)
	return "bx%?\t%0\t%@ indirect register sibling call";
      else
	return "mov%?\t%|pc, %0\t%@ indirect register sibling call";
    }
  
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8440 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  if (which_alternative == 1)
   return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  else
    {
      if (arm_arch5t || arm_arch4t)
	return "bx%?\t%1";
      else
	return "mov%?\t%|pc, %1\t@ indirect sibling call ";
    }
  
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8475 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8496 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false,
				      false);
  }
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8496 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false,
				      true);
  }
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8518 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true,
				      false);
  }
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8518 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true,
				      true);
  }
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8536 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8726 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  return output_probe_stack_range (operands[0], operands[2]);
}
}

static const char * const output_233[] = {
  "ldr\t%1, [%1]\n\tstr\t%1, %0\n\tmovs\t%1,#0",
  "ldr\t%1, [%1]\n\tstr\t%1, %0\n\tmov\t%1,#0",
};

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8961 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_240 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9026 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  if (TARGET_ARM)
    return ".inst\t0xe7f000f0";
  else
    return ".inst\t0xdeff";
  
}

static const char * const output_257[] = {
  "orr%d1\t%0, %3, #1",
  "#",
};

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9438 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_260 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9474 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_261 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9500 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_263 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9611 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%d4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%d4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%d4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_264 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9694 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_265 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9777 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%D4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%D4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%D4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%D4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%D4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
  
}

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10167 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_275[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_277[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10356 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[5])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (CONST_INT_P (operands[3])
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_281[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10419 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[3])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (CONST_INT_P (operands[5])
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_283[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_285[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_287[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_289[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_291[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10828 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldmib%?\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldmia%?\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldmda%?\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldmda%?\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldmia%?\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldmia%?\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldmda%?\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char * const output_303[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_304 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11195 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_305 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11213 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11236 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.
       In Thumb mode always use push, and the assembler will pick
       something appropriate.  */
    if (num_saves == 1 && TARGET_ARM)
      output_asm_insn ("str%?\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	if (TARGET_32BIT)
	    strcpy (pattern, "push%?\t{%1");
	else
	    strcpy (pattern, "push\t{%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_308 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11296 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_309 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11352 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_312 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11387 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    int num_regs = XVECLEN (operands[0], 0);
    char pattern[100];
    rtx op_list[2];
    strcpy (pattern, "vldm\t");
    strcat (pattern, reg_names[REGNO (SET_DEST (XVECEXP (operands[0], 0, 0)))]);
    strcat (pattern, "!, {");
    op_list[0] = XEXP (XVECEXP (operands[0], 0, 1), 0);
    strcat (pattern, "%P0");
    if ((num_regs - 1) > 1)
      {
        strcat (pattern, "-%P1");
        op_list [1] = XEXP (XVECEXP (operands[0], 0, num_regs - 1), 0);
      }

    strcat (pattern, "}");
    output_asm_insn (pattern, op_list);
    return "";
  }
  
}

static const char *
output_313 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11418 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  assemble_align (32);
  return "";
  
}

static const char *
output_314 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11428 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  assemble_align (64);
  return "";
  
}

static const char *
output_315 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11438 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_316 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11448 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_317 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11461 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
	arm_emit_fp16_const (x);
	break;
      default:
	assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
	assemble_zeros (2);
	break;
      }
    return "";
  }
}

static const char *
output_318 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11484 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    scalar_float_mode float_mode;
    if (is_a <scalar_float_mode> (GET_MODE (x), &float_mode))
      assemble_real (*CONST_DOUBLE_REAL_VALUE (x), float_mode, BITS_PER_WORD);
    else
      {
	/* XXX: Sometimes gcc does something really dumb and ends up with
	   a HIGH in a constant pool entry, usually because it's trying to
	   load into a VFP register.  We know this will always be used in
	   combination with a LO_SUM which ignores the high bits, so just
	   strip off the HIGH.  */
	if (GET_CODE (x) == HIGH)
	  x = XEXP (x, 0);
        assemble_integer (x, 4, BITS_PER_WORD, 1);
	mark_symbol_refs_as_used (x);
      }
    return "";
  }
}

static const char *
output_319 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11512 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    scalar_float_mode float_mode;
    if (is_a <scalar_float_mode> (GET_MODE (operands[0]), &float_mode))
      assemble_real (*CONST_DOUBLE_REAL_VALUE (operands[0]),
		     float_mode, BITS_PER_WORD);
    else
      assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
    return "";
  }
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11530 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    scalar_float_mode float_mode;
    if (is_a <scalar_float_mode> (GET_MODE (operands[0]), &float_mode))
      assemble_real (*CONST_DOUBLE_REAL_VALUE (operands[0]),
		     float_mode, BITS_PER_WORD);
    else
      assemble_integer (operands[0], 16, BITS_PER_WORD, 1);
    return "";
  }
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11677 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
    targetm.asm_out.internal_label (asm_out_file, "LPIC",
				    INTVAL (operands[1]));
    return "bl\t%c0(tlscall)";
  }
}

static const char * const output_330[] = {
  "movt%?\t%0, %L1",
  "movt\t%0, %L1",
};

static const char * const output_331[] = {
  "rev\t%0, %1",
  "rev%?\t%0, %1",
  "rev%?\t%0, %1",
};

static const char * const output_332[] = {
  "revsh\t%0, %1",
  "revsh%?\t%0, %1",
  "revsh%?\t%0, %1",
};

static const char * const output_333[] = {
  "rev16\t%0, %1",
  "rev16%?\t%0, %1",
  "rev16%?\t%0, %1",
};

static const char *
output_348 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 166 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/ldrdstrd.md"
{
    rtx op[2];
    op[0] = gen_rtx_REG (DImode, REGNO (operands[0]));
    op[1] = adjust_address (operands[2], DImode, 0);
    return output_move_double (op, true, NULL);
  }
}

static const char *
output_349 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 186 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/ldrdstrd.md"
{
    rtx op[2];
    op[0] = adjust_address (operands[2], DImode, 0);
    op[1] = gen_rtx_REG (DImode, REGNO (operands[0]));
    return output_move_double (op, true, NULL);
  }
}

static const char *
output_407 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_408 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12169 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, 16);
  arm_const_bounds (operands[2], 0, (1 << 5));
  arm_const_bounds (operands[3], 0, (1 << 5));
  arm_const_bounds (operands[4], 0, (1 << 5));
  arm_const_bounds (operands[5], 0, 8);
  return "cdp\tp%c0, %1, CR%c2, CR%c3, CR%c4, %5";
}
}

static const char *
output_409 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12169 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, 16);
  arm_const_bounds (operands[2], 0, (1 << 5));
  arm_const_bounds (operands[3], 0, (1 << 5));
  arm_const_bounds (operands[4], 0, (1 << 5));
  arm_const_bounds (operands[5], 0, 8);
  return "cdp2\tp%c0, %1, CR%c2, CR%c3, CR%c4, %5";
}
}

static const char *
output_410 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12186 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "ldc\tp%c0, CR%c1, %2";
}
}

static const char *
output_411 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12186 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "ldc2\tp%c0, CR%c1, %2";
}
}

static const char *
output_412 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12186 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "ldcl\tp%c0, CR%c1, %2";
}
}

static const char *
output_413 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12186 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "ldc2l\tp%c0, CR%c1, %2";
}
}

static const char *
output_414 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12199 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "stc\tp%c0, CR%c1, %2";
}
}

static const char *
output_415 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12199 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "stc2\tp%c0, CR%c1, %2";
}
}

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12199 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "stcl\tp%c0, CR%c1, %2";
}
}

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12199 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, (1 << 5));
  return "stc2l\tp%c0, CR%c1, %2";
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12228 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  arm_const_bounds (operands[4], 0, (1 << 5));
  arm_const_bounds (operands[5], 0, 8);
  return "mcr\tp%c0, %1, %2, CR%c3, CR%c4, %5";
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12228 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  arm_const_bounds (operands[4], 0, (1 << 5));
  arm_const_bounds (operands[5], 0, 8);
  return "mcr2\tp%c0, %1, %2, CR%c3, CR%c4, %5";
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12247 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[1], 0, 16);
  arm_const_bounds (operands[2], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  arm_const_bounds (operands[4], 0, (1 << 5));
  arm_const_bounds (operands[5], 0, 8);
  return "mrc\tp%c1, %2, %0, CR%c3, CR%c4, %5";
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12247 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[1], 0, 16);
  arm_const_bounds (operands[2], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  arm_const_bounds (operands[4], 0, (1 << 5));
  arm_const_bounds (operands[5], 0, 8);
  return "mrc2\tp%c1, %2, %0, CR%c3, CR%c4, %5";
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12265 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  return "mcrr\tp%c0, %1, %Q2, %R2, CR%c3";
}
}

static const char *
output_423 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12265 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[0], 0, 16);
  arm_const_bounds (operands[1], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  return "mcrr2\tp%c0, %1, %Q2, %R2, CR%c3";
}
}

static const char *
output_424 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12280 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[1], 0, 16);
  arm_const_bounds (operands[2], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  return "mrrc\tp%c1, %2, %Q0, %R0, CR%c3";
}
}

static const char *
output_425 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12280 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  arm_const_bounds (operands[1], 0, 16);
  arm_const_bounds (operands[2], 0, 8);
  arm_const_bounds (operands[3], 0, (1 << 5));
  return "mrrc2\tp%c1, %2, %Q0, %R0, CR%c3";
}
}

static const char * const output_430[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_431[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_432[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_434 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    case 3: case 4:
      return output_move_double (operands, true, NULL);
    case 5:
      return "wmov%?\t%0,%1";
    case 6:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 7:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 8:
      return "wldrd%?\t%0,%1";
    case 9:
      return "wstrd%?\t%1,%0";
    case 10:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 11:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 12:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 13: case 14:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_435 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 170 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
     {
     case 0: return "mov\t%0, %1";
     case 1: return "mov\t%0, %1";
     case 2: return "mvn\t%0, #%B1";
     case 3: return "movw\t%0, %1";
     case 4: return "ldr\t%0, %1";
     case 5: return "str\t%1, %0";
     case 6: return "tmcr\t%0, %1";
     case 7: return "tmrc\t%0, %1";
     case 8: return arm_output_load_gr (operands);
     case 9: return "wstrw\t%1, %0";
     case 10:return "fmsr\t%0, %1";
     case 11:return "fmrs\t%0, %1";
     case 12:return "fcpys\t%0, %1\t%@ int";
     case 13: case 14:
       return output_move_vfp (operands);
     default:
       gcc_unreachable ();
     }
}

static const char *
output_436 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 220 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_437 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_438 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_439 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_482 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 686 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_483 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 703 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_484 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 720 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_539 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_541 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_543 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_544 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_545 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_548 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_551 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_559 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_650 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 33 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
      return "mov%?\t%0, %1\t%@ movhi";
    case 1:
      return "mvn%?\t%0, #%B1\t%@ movhi";
    case 2:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 3:
      return "strh%?\t%1, %0\t%@ movhi";
    case 4:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 5:
    case 6:
      return "vmov%?\t%0, %1\t%@ int";
    case 7:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_651 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 84 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1\t%@ movhi";
    case 3:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 4:
      return "strh%?\t%1, %0\t%@ movhi";
    case 5:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 6:
    case 7:
      return "vmov%?\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_652 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
      return "mov%?\t%0, %1\t%@ movhi";
    case 1:
      return "mvn%?\t%0, #%B1\t%@ movhi";
    case 2:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 3:
      return "strh%?\t%1, %0\t%@ movhi";
    case 4:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 5:
    case 6:
      return "vmov.f16\t%0, %1\t%@ int";
    case 7:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_653 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 179 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1\t%@ movhi";
    case 3:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 4:
      return "strh%?\t%1, %0\t%@ movhi";
    case 5:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 6:
    case 7:
      return "vmov.f16\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_654 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "vmov%?\t%0, %1\t%@ int";
    case 7:
      return "vmov%?\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_655 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 266 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3:
      return "mvn%?\t%0, #%B1";
    case 4:
      return "movw%?\t%0, %1";
    case 5:
    case 6:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      return "ldr%?\t%0, %1";
    case 7:
    case 8:
      return "str%?\t%1, %0";
    case 9:
      return "vmov%?\t%0, %1\t%@ int";
    case 10:
      return "vmov%?\t%0, %1\t%@ int";
    case 11:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 12: case 13:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_656 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 317 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      /* Fall through.  */
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "vmov%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "vmov%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      if (TARGET_VFP_SINGLE)
	return "vmov%?.f32\t%0, %1\t%@ int\n\tvmov%?.f32\t%p0, %p1\t%@ int";
      else
	return "vmov%?.f64\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_657 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 379 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0: /* ARM register from memory.  */
      return "ldrh%?\t%0, %1\t%@ __fp16";
    case 1: /* Memory from ARM register.  */
      return "strh%?\t%1, %0\t%@ __fp16";
    case 2: /* S register from S register.  */
      return "vmov\t%0, %1\t%@ __fp16";
    case 3: /* ARM register from ARM register.  */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 4: /* S register from ARM register.  */
    case 5: /* ARM register from S register.  */
    case 6: /* S register from immediate.  */
      return "vmov.f16\t%0, %1\t%@ __fp16";
    case 7: /* S register from memory.  */
      return "vld1.16\t{%z0}, %A1";
    case 8: /* Memory from S register.  */
      return "vst1.16\t{%z1}, %A0";
    case 9: /* ARM register from constant.  */
      {
	long bits;
	rtx ops[4];

	bits = real_to_target (NULL, CONST_DOUBLE_REAL_VALUE (operands[1]),
			       HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
 }
}

static const char *
output_658 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 455 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* S register from memory */
      return "vld1.16\t{%z0}, %A1";
    case 1:     /* memory from S register */
      return "vst1.16\t{%z1}, %A0";
    case 2:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 3:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 4:	/* S register from S register */
      return "vmov.f32\t%0, %1";
    case 5:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 6:	/* S register from ARM register */
      return "vmov\t%0, %1";
    case 7:	/* ARM register from S register */
      return "vmov\t%0, %1";
    case 8:	/* ARM register from constant */
      {
	long bits;
	rtx ops[4];

	bits = real_to_target (NULL, CONST_DOUBLE_REAL_VALUE (operands[1]),
			       HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_659 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 512 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 1:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 2:	/* S register from S register */
      return "vmov.f32\t%0, %1";
    case 3:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 4:	/* S register from ARM register */
      return "vmov\t%0, %1";
    case 5:	/* ARM register from S register */
      return "vmov\t%0, %1";
    case 6:	/* ARM register from constant */
      {
	long bits;
	rtx ops[4];

	bits = real_to_target (NULL, CONST_DOUBLE_REAL_VALUE (operands[1]),
			       HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_660 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 565 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_661 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 601 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_662 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 639 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "vmov%?\t%P0, %Q1, %R1";
      case 1:
	return "vmov%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "vmov%?.f64\t%P0, %1";
      case 3:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "vmov.i64\t%P0, #0\t%@ float";
      case 4: case 5:
	return output_move_vfp (operands);
      case 6: case 7:
	return output_move_double (operands, true, NULL);
      case 8:
	if (TARGET_VFP_SINGLE)
	  return "vmov%?.f32\t%0, %1\n\tvmov%?.f32\t%p0, %p1";
	else
	  return "vmov%?.f64\t%P0, %P1";
      case 9:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char *
output_663 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 690 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "vmov%?\t%P0, %Q1, %R1";
      case 1:
	return "vmov%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "vmov%?.f64\t%P0, %1";
      case 3:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "vmov.i64\t%P0, #0\t%@ float";
      case 4: case 5:
	return output_move_vfp (operands);
      case 6: case 7: case 9:
	return output_move_double (operands, true, NULL);
      case 8:
	if (TARGET_VFP_SINGLE)
	  return "vmov%?.f32\t%0, %1\n\tvmov%?.f32\t%p0, %p1";
	else
	  return "vmov%?.f64\t%P0, %P1";
      default:
	abort ();
      }
    }
  
}

static const char * const output_664[] = {
  "vmov%D3.f32\t%0, %2",
  "vmov%d3.f32\t%0, %1",
  "vmov%D3.f32\t%0, %2\n\tvmov%d3.f32\t%0, %1",
  "vmov%D3\t%0, %2",
  "vmov%d3\t%0, %1",
  "vmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
  "vmov%D3\t%0, %2",
  "vmov%d3\t%0, %1",
  "vmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
};

static const char * const output_665[] = {
  "it\t%D3\n\tvmov%D3.f32\t%0, %2",
  "it\t%d3\n\tvmov%d3.f32\t%0, %1",
  "ite\t%D3\n\tvmov%D3.f32\t%0, %2\n\tvmov%d3.f32\t%0, %1",
  "it\t%D3\n\tvmov%D3\t%0, %2",
  "it\t%d3\n\tvmov%d3\t%0, %1",
  "ite\t%D3\n\tvmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
  "it\t%D3\n\tvmov%D3\t%0, %2",
  "it\t%d3\n\tvmov%d3\t%0, %1",
  "ite\t%D3\n\tvmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
};

static const char * const output_666[] = {
  "vmov%D3.f64\t%P0, %P2",
  "vmov%d3.f64\t%P0, %P1",
  "vmov%D3.f64\t%P0, %P2\n\tvmov%d3.f64\t%P0, %P1",
  "vmov%D3\t%P0, %Q2, %R2",
  "vmov%d3\t%P0, %Q1, %R1",
  "vmov%D3\t%P0, %Q2, %R2\n\tvmov%d3\t%P0, %Q1, %R1",
  "vmov%D3\t%Q0, %R0, %P2",
  "vmov%d3\t%Q0, %R0, %P1",
  "vmov%D3\t%Q0, %R0, %P2\n\tvmov%d3\t%Q0, %R0, %P1",
};

static const char * const output_667[] = {
  "it\t%D3\n\tvmov%D3.f64\t%P0, %P2",
  "it\t%d3\n\tvmov%d3.f64\t%P0, %P1",
  "ite\t%D3\n\tvmov%D3.f64\t%P0, %P2\n\tvmov%d3.f64\t%P0, %P1",
  "it\t%D3\n\tvmov%D3\t%P0, %Q2, %R2",
  "it\t%d3\n\tvmov%d3\t%P0, %Q1, %R1",
  "ite\t%D3\n\tvmov%D3\t%P0, %Q2, %R2\n\tvmov%d3\t%P0, %Q1, %R1",
  "it\t%D3\n\tvmov%D3\t%Q0, %R0, %P2",
  "it\t%d3\n\tvmov%d3\t%Q0, %R0, %P1",
  "ite\t%D3\n\tvmov%D3\t%Q0, %R0, %P2\n\tvmov%d3\t%Q0, %R0, %P1",
};

static const char * const output_670[] = {
  "vneg%?.f32\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_671[] = {
  "vneg%?.f64\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_746[] = {
  "vcmp%?.f32\t%0, %1",
  "vcmp%?.f32\t%0, #0",
};

static const char * const output_747[] = {
  "vcmpe%?.f32\t%0, %1",
  "vcmpe%?.f32\t%0, #0",
};

static const char * const output_748[] = {
  "vcmp%?.f64\t%P0, %P1",
  "vcmp%?.f64\t%P0, #0",
};

static const char * const output_749[] = {
  "vcmpe%?.f64\t%P0, %P1",
  "vcmpe%?.f64\t%P0, #0",
};

static const char * const output_752[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_753[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char *
output_759 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1801 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.f16.s32\t%0, %0, %2\n\tvmov.f32\t%3, %0";
}
}

static const char *
output_760 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1801 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.f16.u32\t%0, %0, %2\n\tvmov.f32\t%3, %0";
}
}

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1842 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vmov.f32\t%0, %1\n\tvcvt.s%#32.f16\t%0, %0, %2";
}
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1842 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vmov.f32\t%0, %1\n\tvcvt.u%#32.f16\t%0, %0, %2";
}
}

static const char *
output_771 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1886 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
 return vfp_output_vstmd (operands);
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 67 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

   static const char * const asms[] =
   {
     "adds\t%0, %0, %2",
     "subs\t%0, %0, #%n2",
     "adds\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2",
     "#",
     "#",
     "#"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && CONST_INT_P (operands[2])
       && INTVAL (operands[2]) < 0)
     return (which_alternative == 2) ? "subs\t%0, %1, #%n2" : "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_814[] = {
  "movs\t%0, %1\n\tmuls\t%0, %2",
  "mov\t%0, %1\n\tmuls\t%0, %2",
  "muls\t%0, %2",
};

static const char * const output_815[] = {
  "muls\t%0, %2",
  "muls\t%0, %1",
  "muls\t%0, %1",
};

static const char *
output_829 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 373 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
{
  rtx mem;

  if (which_alternative == 0 && arm_arch6)
    return "uxth\t%0, %1";
  if (which_alternative == 0)
    return "#";

  mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);

  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);

      /* This can happen due to bugs in reload.  */
      if (REG_P (a) && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;

          output_asm_insn ("mov\t%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }
    }

  return "ldrh\t%0, %1";
}
}

static const char * const output_830[] = {
  "#",
  "ldrb\t%0, %1",
};

static const char * const output_831[] = {
  "uxtb\t%0, %1",
  "ldrb\t%0, %1",
};

static const char *
output_832 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 447 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
    rtx ops[4];
    rtx mem;

    if (which_alternative == 0 && !arm_arch6)
      return "#";
    if (which_alternative == 0)
      return "sxth\t%0, %1";

    mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */

    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);

    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";

    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && CONST_INT_P (b))
          return "ldr\t%0, %1";

        if (REG_P (b))
          return "ldrsh\t%0, %1";

        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }

    gcc_assert (REG_P (ops[1]));

    ops[0] = operands[0];
    if (reg_mentioned_p (operands[2], ops[1]))
      ops[3] = ops[0];
    else
      ops[3] = operands[2];
    output_asm_insn ("movs\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char *
output_833 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 584 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
{
  rtx addr;

  if (which_alternative == 0 && arm_arch6)
    return "sxtb\t%0, %1";
  if (which_alternative == 0)
    return "#";

  addr = XEXP (operands[1], 0);
  if (GET_CODE (addr) == PLUS
      && REG_P (XEXP (addr, 0)) && REG_P (XEXP (addr, 1)))
    return "ldrsb\t%0, %1";

  return "#";
}
}

static const char *
output_834 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 618 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "movs\t%Q0, %1\n\tmovs\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "movs\t%Q0, %1\n\trsbs\t%Q0, %Q0, #0\n\tasrs\t%R0, %Q0, #31";
    case 3:
      gcc_assert (TARGET_HAVE_MOVT);
      return "movw\t%Q0, %L1\n\tmovs\tR0, #0";
    case 4:
      return "ldmia\t%1, {%0, %H0}";
    case 5:
      return "stmia\t%0, {%1, %H1}";
    case 6:
      return thumb_load_double_from_address (operands);
    case 7:
      operands[2] = gen_rtx_MEM (SImode,
			     plus_constant (Pmode, XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 8:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_835[] = {
  "movs	%0, %1",
  "movs	%0, %1",
  "movw	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_836 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 762 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  switch (which_alternative)
    {
    case 0: return "adds	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "movs	%0, %1";
    case 6: gcc_assert (TARGET_HAVE_MOVT);
	    return "movw	%0, %L1";
    default: gcc_unreachable ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && REG_P (XEXP (XEXP (operands[1], 0), 0))
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);

          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];

	}
      return "ldrh	%0, %1";
    }
}

static const char * const output_837[] = {
  "adds\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "movs\t%0, %1",
};

static const char *
output_838 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 837 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  switch (which_alternative)
    {
    case 0:
      return "movs\t%0, %1";
    case 1:
      {
	rtx addr;
	gcc_assert (MEM_P (operands[1]));
	addr = XEXP (operands[1], 0);
	if (GET_CODE (addr) == LABEL_REF
	    || (GET_CODE (addr) == CONST
		&& GET_CODE (XEXP (addr, 0)) == PLUS
		&& GET_CODE (XEXP (XEXP (addr, 0), 0)) == LABEL_REF
		&& CONST_INT_P (XEXP (XEXP (addr, 0), 1))))
	  {
	    /* Constant pool entry.  */
	    return "ldr\t%0, %1";
	  }
	return "ldrh\t%0, %1";
      }
    case 2: return "strh\t%1, %0";
    default: return "mov\t%0, %1";
    }
  
}

static const char * const output_839[] = {
  "adds\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_840 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 897 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "adds\t%0, %1, #0\n\tadds\t%H0, %H1, #0";
      return "adds\t%H0, %H1, #0\n\tadds\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx_MEM (SImode,
				 plus_constant (Pmode,
						XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_841 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 946 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_842 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 965 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_843 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1010 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
{
  if (get_attr_length (insn) == 2)
    {
      if (GET_CODE (operands[0]) == EQ)
	return "cbz\t%1, %l2";
      else
	return "cbnz\t%1, %l2";
    }
  else
    {
      rtx t = cfun->machine->thumb1_cc_insn;
      if (t != NULL_RTX)
	{
	  if (!rtx_equal_p (cfun->machine->thumb1_cc_op0, operands[1])
	      || !rtx_equal_p (cfun->machine->thumb1_cc_op1, operands[2]))
	    t = NULL_RTX;
	  if (cfun->machine->thumb1_cc_mode == CC_NOOVmode)
	    {
	      if (!noov_comparison_operator (operands[0], VOIDmode))
		t = NULL_RTX;
	    }
	  else if (cfun->machine->thumb1_cc_mode != CCmode)
	    t = NULL_RTX;
	}
      if (t == NULL_RTX)
	{
	  output_asm_insn ("cmp\t%1, #0", operands);
	  cfun->machine->thumb1_cc_insn = insn;
	  cfun->machine->thumb1_cc_op0 = operands[1];
	  cfun->machine->thumb1_cc_op1 = operands[2];
	  cfun->machine->thumb1_cc_mode = CCmode;
	}
      else
	/* Ensure we emit the right type of condition code on the jump.  */
	XEXP (operands[0], 0) = gen_rtx_REG (cfun->machine->thumb1_cc_mode,
					     CC_REGNUM);

      switch (get_attr_length (insn))
	{
	case 4:  return "b%d0\t%l2";
	case 6:  return "b%D0\t.LCB%=;b\t%l2\t%@long jump\n.LCB%=:";
	case 8:  return "b%D0\t.LCB%=;bl\t%l2\t%@far jump\n.LCB%=:";
	default: gcc_unreachable ();
	}
    }
}
}

static const char *
output_844 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1093 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
{
  rtx t = cfun->machine->thumb1_cc_insn;
  if (t != NULL_RTX)
    {
      if (!rtx_equal_p (cfun->machine->thumb1_cc_op0, operands[1])
	  || !rtx_equal_p (cfun->machine->thumb1_cc_op1, operands[2]))
	t = NULL_RTX;
      if (cfun->machine->thumb1_cc_mode == CC_NOOVmode)
	{
	  if (!noov_comparison_operator (operands[0], VOIDmode))
	    t = NULL_RTX;
	}
      else if (cfun->machine->thumb1_cc_mode != CCmode)
	t = NULL_RTX;
    }
  if (t == NULL_RTX)
    {
      output_asm_insn ("cmp\t%1, %2", operands);
      cfun->machine->thumb1_cc_insn = insn;
      cfun->machine->thumb1_cc_op0 = operands[1];
      cfun->machine->thumb1_cc_op1 = operands[2];
      cfun->machine->thumb1_cc_mode = CCmode;
    }
  else
    /* Ensure we emit the right type of condition code on the jump.  */
    XEXP (operands[0], 0) = gen_rtx_REG (cfun->machine->thumb1_cc_mode,
					 CC_REGNUM);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
}
}

static const char *
output_845 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1158 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  output_asm_insn ("adds\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_846 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1195 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_847 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsls\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_848 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1279 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - INTVAL (operands[2]));

  output_asm_insn ("lsls\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_849 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1322 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_850 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1361 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("subs\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("subs\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("subs\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_851 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1473 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

   {
     rtx cond[3];

     cond[0] = (which_alternative < 2) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (CONST_INT_P (cond[2]) && INTVAL (cond[2]) < 0)
       output_asm_insn ("subs\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("adds\t%0, %1, %2", cond);

     if (which_alternative >= 2
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 2) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_852 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1552 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("subs\t%0, %1, %2", operands);
	 else
	   output_asm_insn ("adds\t%0, %1, %2", operands);
	 break;
       case 3:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("subs\t%0, %0, %2", operands);
	 else
	   output_asm_insn ("adds\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char * const output_854[] = {
  "rsbs\t%0, %1, #0\n\tadcs\t%0, %0, %1",
  "rsbs\t%2, %1, #0\n\tadcs\t%0, %1, %2",
};

static const char *
output_859 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1704 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_862 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1752 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[0]);
    else if (operands[1] == const0_rtx)
      return "bl\t%__interwork_call_via_%0";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%0";
    else
      return "bl\t%__interwork_r11_call_via_%0";
  }
}

static const char *
output_865 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1799 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[1]);
    else if (operands[2] == const0_rtx)
      return "bl\t%__interwork_call_via_%1";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%1";
    else
      return "bl\t%__interwork_r11_call_via_%1";
  }
}

static const char *
output_868 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1867 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
 return thumb1_output_casesi(operands);
}

static const char *
output_870 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1887 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"
 return thumb1_output_interwork ();
}

static const char *
output_871 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1895 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb1.md"

    return thumb1_unexpanded_epilogue ();
  
}

static const char *
output_884 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 255 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3: return "mvn%?\t%0, #%B1";
    case 4: return "movw%?\t%0, %1";
    case 5:
    case 6:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      return "ldr%?\t%0, %1";
    case 7:
    case 8: return "str%?\t%1, %0";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_885 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 291 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
			     INTVAL (operands[3]));
  return "add\t%2, %|pc\n\tldr%?\t%0, [%2]";
  
}

static const char * const output_886[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "strh%?\t%1, %0\t%@ movhi",
  "ldrh%?\t%0, %1\t%@ movhi",
};

static const char * const output_894[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%D3\n\tmvn%D3\t%0, #%B2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%d3\n\tmvn%d3\t%0, #%B1",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_895[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
};

static const char * const output_902[] = {
  "it\t%d1\n\torr%d1\t%0, %3, #1",
  "#",
};

static const char *
output_904 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 707 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("it\t%D4\n\tmov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("it\t%d4\n\tmov%d4\t%0, %1", operands);
        return "";
      }
    switch (which_alternative)
      {
      case 0:
	output_asm_insn ("it\t%d4", operands);
	break;
      case 1:
	output_asm_insn ("it\t%D4", operands);
	break;
      case 2:
	if (arm_restrict_it)
	  output_asm_insn ("it\t%D4", operands);
	else
	  output_asm_insn ("ite\t%D4", operands);
	break;
      default:
	abort();
      }
    if (which_alternative != 0)
      {
        output_asm_insn ("mov%D4\t%0, %1", operands);
        if (arm_restrict_it && which_alternative == 2)
          output_asm_insn ("it\t%d4", operands);
      }
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_905 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 757 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, #0", operands);
      }
    else if (GET_CODE (operands[5]) == MINUS)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
      }
    else if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_907 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 865 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      {
	if (arm_restrict_it)
	  {
	    output_asm_insn ("mov\t%0, %1", operands);
	    output_asm_insn ("it\t%d4", operands);
	  }
	else
	{
	  output_asm_insn ("ite\t%D4", operands);
	  output_asm_insn ("mov%D4\t%0, %1", operands);
	}
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_909 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 966 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  switch (which_alternative)
    {
    case 0:
      output_asm_insn ("it\t%D5", operands);
      break;
    case 1:
      output_asm_insn ("it\t%d5", operands);
      break;
    case 2:
      if (arm_restrict_it)
        {
          output_asm_insn ("mov\t%0, %1", operands);
          output_asm_insn ("it\t%D5", operands);
        }
      else
        output_asm_insn ("ite\t%d5", operands);
      break;
    default:
      abort();
    }
  if (which_alternative != 0 && !(arm_restrict_it && which_alternative == 2))
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_910[] = {
  "sxtb%?\t%0, %1",
  "ldrsb%?\t%0, %1",
};

static const char * const output_911[] = {
  "uxth%?\t%0, %1",
  "ldrh%?\t%0, %1",
};

static const char * const output_912[] = {
  "uxtb%?\t%0, %1",
  "ldrb%?\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_913 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_914 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1155 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_915 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1164 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
 return output_return_instruction (const_true_rtx, true, false, true);
}

static const char *
output_916 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1172 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
 return output_return_instruction (const_true_rtx, true, false, true);
}

static const char *
output_919 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1227 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_923 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1253 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_925 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1323 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL (operands[2]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "subs\t%0, %1, #%n2";
    else
      return "adds\t%0, %1, %2";
  
}

static const char *
output_926 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1355 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[1]))
      val = INTVAL (operands[1]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "cmp\t%0, #%n1";
    else
      return "cmn\t%0, %1";
  
}

static const char *
output_930 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1419 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbeq\t%l1";
  
}

static const char *
output_931 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1443 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbnz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbne\t%l1";
  
}

static const char *
output_940 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v8qi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v8qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v8qi";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %P1  @ v8qi";
    case 6: return "vmov\t%P0, %Q1, %R1  @ v8qi";
    case 9: return "#";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_941 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v4hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hi";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %P1  @ v4hi";
    case 6: return "vmov\t%P0, %Q1, %R1  @ v4hi";
    case 9: return "#";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_942 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v4hf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hf";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %P1  @ v4hf";
    case 6: return "vmov\t%P0, %Q1, %R1  @ v4hf";
    case 9: return "#";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_943 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2si";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2si";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %P1  @ v2si";
    case 6: return "vmov\t%P0, %Q1, %R1  @ v2si";
    case 9: return "#";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_944 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2sf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2sf";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %P1  @ v2sf";
    case 6: return "vmov\t%P0, %Q1, %R1  @ v2sf";
    case 9: return "#";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_945 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ di";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ di";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %P1  @ di";
    case 6: return "vmov\t%P0, %Q1, %R1  @ di";
    case 9: return "#";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_946 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V16QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v16qi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v16qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v16qi";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ v16qi\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ v16qi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_947 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hi";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ v8hi\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ v8hi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_948 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hf";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ v8hf\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ v8hf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_949 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4si";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4si";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ v4si\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ v4si\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_950 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4sf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4sf";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ v4sf\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ v4sf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_951 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v2di";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v2di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v2di";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ v2di\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ v2di\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_952 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 81 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2 || which_alternative == 3)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], TImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ ti";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ ti", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ ti";
    case 1: case 4: return output_move_neon (operands);
    case 2: case 3: gcc_unreachable ();
    case 5: return "vmov\t%Q0, %R0, %e1  @ ti\n\tvmov\t%J0, %K0, %f1";
    case 6: return "vmov\t%e0, %Q1, %R1  @ ti\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_953 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 167 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_954 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 167 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_955 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 167 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_956 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 167 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_981 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_982 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_983 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_984 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_985 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_986 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 351 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_987 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 351 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_988 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 351 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_989 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 351 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_990 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 351 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_991 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 380 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vld1.64\t%P0, %A1";
  else
    return "vmov\t%P0, %Q1, %R1";
}
}

static const char *
output_992 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 412 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_993 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 412 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_994 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 412 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_995 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 412 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_996 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 412 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_997 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_998 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_999 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1000 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_1001 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_1002 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 460 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + 2 * INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vst1.64\t{%P1}, %A0  @ v2di";
  else
    return "vmov\t%Q0, %R0, %P1  @ v2di";
}
}

static const char *
output_1018 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 536 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 3: return "vadd.i64\t%P0, %P1, %P2";
    case 1: return "#";
    case 2: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1034 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 596 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 4: return "vsub.i64\t%P0, %P1, %P2";
    case 1: /* fall through */ 
    case 2: /* fall through */
    case 3: return  "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1099 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8QImode, 0, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1100 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V16QImode, 0, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1101 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HImode, 0, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1102 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HImode, 0, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1103 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SImode, 0, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1104 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SImode, 0, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1105 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HFmode, 0, VALID_NEON_QREG_MODE (V4HFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1106 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HFmode, 0, VALID_NEON_QREG_MODE (V8HFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1107 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SFmode, 0, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1108 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SFmode, 0, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1109 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 798 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2DImode, 0, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1110 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8QImode, 1, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1111 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V16QImode, 1, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1112 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HImode, 1, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1113 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HImode, 1, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1114 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SImode, 1, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1115 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SImode, 1, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1116 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HFmode, 1, VALID_NEON_QREG_MODE (V4HFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1117 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HFmode, 1, VALID_NEON_QREG_MODE (V8HFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1118 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SFmode, 1, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1119 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SFmode, 1, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_1120 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 820 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2DImode, 1, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char * const output_1132[] = {
  "vorn\t%P0, %P1, %P2",
  "#",
  "#",
  "#",
};

static const char * const output_1144[] = {
  "vbic\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char *
output_1230 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1072 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8QImode,
						    VALID_NEON_QREG_MODE (V8QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1231 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1072 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V16QImode,
						    VALID_NEON_QREG_MODE (V16QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1232 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1072 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4HImode,
						    VALID_NEON_QREG_MODE (V4HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1233 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1072 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8HImode,
						    VALID_NEON_QREG_MODE (V8HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1234 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1072 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V2SImode,
						    VALID_NEON_QREG_MODE (V2SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1235 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1072 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4SImode,
						    VALID_NEON_QREG_MODE (V4SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1236 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1091 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1237 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1091 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1238 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1091 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1239 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1091 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1240 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1091 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1241 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1091 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char *
output_1242 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1104 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1243 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1104 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1244 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1104 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1245 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1104 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1246 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1104 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1247 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1104 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char * const output_1262[] = {
  "vld1.32\t{%P0[0]}, %A1",
  "vmov.32\t%P0[0], %1",
};

static const char * const output_1263[] = {
  "vshl.u64\t%P0, %P1, %2",
  "vshl.u64\t%P0, %P1, %P2",
};

static const char *
output_1271 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1399 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.s8\t%q0, %q3, %f1" :
    "vaddw.s8\t%q0, %q3, %e1";
}
}

static const char *
output_1272 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1399 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.s16\t%q0, %q3, %f1" :
    "vaddw.s16\t%q0, %q3, %e1";
}
}

static const char *
output_1273 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1399 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.s32\t%q0, %q3, %f1" :
    "vaddw.s32\t%q0, %q3, %e1";
}
}

static const char *
output_1274 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1414 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.s8\t%q0, %q3, %e1" :
    "vaddw.s8\t%q0, %q3, %f1";
}
}

static const char *
output_1275 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1414 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.s16\t%q0, %q3, %e1" :
    "vaddw.s16\t%q0, %q3, %f1";
}
}

static const char *
output_1276 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1414 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.s32\t%q0, %q3, %e1" :
    "vaddw.s32\t%q0, %q3, %f1";
}
}

static const char *
output_1280 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.u8\t%q0, %q3, %f1" :
    "vaddw.u8\t%q0, %q3, %e1";
}
}

static const char *
output_1281 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.u16\t%q0, %q3, %f1" :
    "vaddw.u16\t%q0, %q3, %e1";
}
}

static const char *
output_1282 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return BYTES_BIG_ENDIAN ?  "vaddw.u32\t%q0, %q3, %f1" :
    "vaddw.u32\t%q0, %q3, %e1";
}
}

static const char *
output_1283 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1484 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
 return BYTES_BIG_ENDIAN ?  "vaddw.u8\t%q0, %q3, %e1" :
    "vaddw.u8\t%q0, %q3, %f1";
}
}

static const char *
output_1284 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1484 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
 return BYTES_BIG_ENDIAN ?  "vaddw.u16\t%q0, %q3, %e1" :
    "vaddw.u16\t%q0, %q3, %f1";
}
}

static const char *
output_1285 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1484 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
 return BYTES_BIG_ENDIAN ?  "vaddw.u32\t%q0, %q3, %e1" :
    "vaddw.u32\t%q0, %q3, %f1";
}
}

static const char *
output_1419 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2441 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V2HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V2HFmode));
	return "vfmal.f16\t%P0, %2, %p3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmal.f16\t%P0, %2, %3[%c5]";
      }
  }
}

static const char *
output_1420 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2441 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V4HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V4HFmode));
	return "vfmal.f16\t%q0, %e2, %f3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmal.f16\t%q0, %e2, %e3[%c5]";
      }
  }
}

static const char *
output_1421 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2497 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V2HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[2] and operands[3] in the halved VFMLSEL modes
      because we want the print_operand code to print the appropriate
      S or D register prefix.  */
   operands[3] = gen_rtx_REG (V2HFmode, REGNO (operands[3]) + regdiff);
   operands[2] = gen_rtx_REG (V2HFmode, REGNO (operands[2]));
   return "vfmal.f16\t%P0, %2, %3[%c5]";
 }
}

static const char *
output_1422 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2497 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V4HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[2] and operands[3] in the halved VFMLSEL modes
      because we want the print_operand code to print the appropriate
      S or D register prefix.  */
   operands[3] = gen_rtx_REG (V4HFmode, REGNO (operands[3]) + regdiff);
   operands[2] = gen_rtx_REG (V4HFmode, REGNO (operands[2]));
   return "vfmal.f16\t%q0, %P2, %P3[%c5]";
 }
}

static const char *
output_1423 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2534 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V2HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[3] in the halved VFMLSEL mode
      because we've calculated the correct half-width subreg to extract
      the lane from and we want to print *that* subreg instead.  */
   operands[3] = gen_rtx_REG (V2HFmode, REGNO (operands[3]) + regdiff);
   return "vfmal.f16\t%P0, %p2, %3[%c5]";
 }
}

static const char *
output_1424 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2534 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V4HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[3] in the halved VFMLSEL mode
      because we've calculated the correct half-width subreg to extract
      the lane from and we want to print *that* subreg instead.  */
   operands[3] = gen_rtx_REG (V4HFmode, REGNO (operands[3]) + regdiff);
   return "vfmal.f16\t%q0, %f2, %P3[%c5]";
 }
}

static const char *
output_1425 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2563 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V2HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V2HFmode));
	return "vfmal.f16\t%P0, %p2, %p3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmal.f16\t%P0, %p2, %3[%c5]";
      }
  }
}

static const char *
output_1426 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2563 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V4HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V4HFmode));
	return "vfmal.f16\t%q0, %f2, %f3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmal.f16\t%q0, %f2, %e3[%c5]";
      }
  }
}

static const char *
output_1427 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2594 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V2HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V2HFmode));
	return "vfmsl.f16\t%P0, %2, %p3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmsl.f16\t%P0, %2, %3[%c5]";
      }
  }
}

static const char *
output_1428 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2594 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V4HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V4HFmode));
	return "vfmsl.f16\t%q0, %e2, %f3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmsl.f16\t%q0, %e2, %e3[%c5]";
      }
  }
}

static const char *
output_1429 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2632 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V2HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[2] and operands[3] in the halved VFMLSEL modes
      because we want the print_operand code to print the appropriate
      S or D register prefix.  */
   operands[3] = gen_rtx_REG (V2HFmode, REGNO (operands[3]) + regdiff);
   operands[2] = gen_rtx_REG (V2HFmode, REGNO (operands[2]));
   return "vfmsl.f16\t%P0, %2, %3[%c5]";
 }
}

static const char *
output_1430 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2632 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V4HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[2] and operands[3] in the halved VFMLSEL modes
      because we want the print_operand code to print the appropriate
      S or D register prefix.  */
   operands[3] = gen_rtx_REG (V4HFmode, REGNO (operands[3]) + regdiff);
   operands[2] = gen_rtx_REG (V4HFmode, REGNO (operands[2]));
   return "vfmsl.f16\t%q0, %P2, %P3[%c5]";
 }
}

static const char *
output_1431 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2670 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V2HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[3] in the halved VFMLSEL mode
      because we've calculated the correct half-width subreg to extract
      the lane from and we want to print *that* subreg instead.  */
   operands[3] = gen_rtx_REG (V2HFmode, REGNO (operands[3]) + regdiff);
   return "vfmsl.f16\t%P0, %p2, %3[%c5]";
 }
}

static const char *
output_1432 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2670 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
   int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
   int elts_per_reg = GET_MODE_NUNITS (V4HFmode);
   int new_lane = lane % elts_per_reg;
   int regdiff = lane / elts_per_reg;
   operands[5] = GEN_INT (new_lane);
   /* We re-create operands[3] in the halved VFMLSEL mode
      because we've calculated the correct half-width subreg to extract
      the lane from and we want to print *that* subreg instead.  */
   operands[3] = gen_rtx_REG (V4HFmode, REGNO (operands[3]) + regdiff);
   return "vfmsl.f16\t%q0, %f2, %P3[%c5]";
 }
}

static const char *
output_1433 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2700 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V2HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V2HFmode));
	return "vfmsl.f16\t%P0, %p2, %p3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmsl.f16\t%P0, %p2, %3[%c5]";
      }
  }
}

static const char *
output_1434 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2700 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    int lane = NEON_ENDIAN_LANE_N (V8HFmode, INTVAL (operands[5]));
    if (lane > GET_MODE_NUNITS (V4HFmode) - 1)
      {
	operands[5] = GEN_INT (lane - GET_MODE_NUNITS (V4HFmode));
	return "vfmsl.f16\t%q0, %f2, %f3[%c5]";
      }
    else
      {
	operands[5] = GEN_INT (lane);
	return "vfmsl.f16\t%q0, %f2, %e3[%c5]";
      }
  }
}

static const char *
output_1542 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#8\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1543 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#8\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1544 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#8\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1545 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#8\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1546 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#8\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1547 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#8\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1548 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#8\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1549 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#8\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1550 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#8\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1551 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#8\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1552 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#16\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1553 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#16\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1554 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#16\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1555 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#16\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1556 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#16\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1557 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#16\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1558 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#16\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1559 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#16\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1560 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#16\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1561 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#16\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1562 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1563 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1564 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1565 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1566 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1567 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1568 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1569 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1570 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1571 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1572 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1573 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1574 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1575 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1576 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#32\t%%P0,"
                      " %%P1, %s",
                       GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1577 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "i",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1578 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1579 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2980 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.%s%%#32\t%%q0,"
                      " %%q1, %s",
                       GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                         ? "f" : "s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.f%%#32\t%%P0,"
                       " %%P1, %s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.f%%#32\t%%P0,"
                       " %%P1, %s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.f%%#32\t%%P0,"
                       " %%P1, %s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.f%%#32\t%%P0,"
                       " %%P1, %s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.f%%#32\t%%P0,"
                       " %%P1, %s",
                       which_alternative == 0
                         ? "%P2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vceq.f%%#32\t%%q0,"
                       " %%q1, %s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcgt.f%%#32\t%%q0,"
                       " %%q1, %s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcge.f%%#32\t%%q0,"
                       " %%q1, %s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vclt.f%%#32\t%%q0,"
                       " %%q1, %s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3004 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    char pattern[100];
    sprintf (pattern, "vcle.f%%#32\t%%q0,"
                       " %%q1, %s",
                       which_alternative == 0
                         ? "%q2" : "#0");
    output_asm_insn (pattern, operands);
    return "";
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vceq.%s%%#16\t%%q0,"
	   " %%q1, %s",
	   GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "i",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcgt.%s%%#16\t%%q0,"
	   " %%q1, %s",
	   GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcge.%s%%#16\t%%q0,"
	   " %%q1, %s",
	   GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcle.%s%%#16\t%%q0,"
	   " %%q1, %s",
	   GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vclt.%s%%#16\t%%q0,"
	   " %%q1, %s",
	   GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1597 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vceq.%s%%#16\t%%P0,"
	   " %%P1, %s",
	   GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "i",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1598 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcgt.%s%%#16\t%%P0,"
	   " %%P1, %s",
	   GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1599 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcge.%s%%#16\t%%P0,"
	   " %%P1, %s",
	   GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1600 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcle.%s%%#16\t%%P0,"
	   " %%P1, %s",
	   GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vclt.%s%%#16\t%%P0,"
	   " %%P1, %s",
	   GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
	   ? "f" : "s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vceq.f%%#16\t%%q0,"
	   " %%q1, %s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcgt.f%%#16\t%%q0,"
	   " %%q1, %s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcge.f%%#16\t%%q0,"
	   " %%q1, %s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vclt.f%%#16\t%%q0,"
	   " %%q1, %s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcle.f%%#16\t%%q0,"
	   " %%q1, %s",
	   which_alternative == 0
	   ? "%q2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1607 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vceq.f%%#16\t%%P0,"
	   " %%P1, %s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1608 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcgt.f%%#16\t%%P0,"
	   " %%P1, %s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1609 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcge.f%%#16\t%%P0,"
	   " %%P1, %s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1610 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vclt.f%%#16\t%%P0,"
	   " %%P1, %s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3071 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  char pattern[100];
  sprintf (pattern, "vcle.f%%#16\t%%P0,"
	   " %%P1, %s",
	   which_alternative == 0
	   ? "%P2" : "#0");
  output_asm_insn (pattern, operands);
  return "";
}
}

static const char *
output_1823 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #0";
  }
}

static const char *
output_1824 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #90";
  }
}

static const char *
output_1825 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #180";
  }
}

static const char *
output_1826 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #270";
  }
}

static const char *
output_1827 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #0";
  }
}

static const char *
output_1828 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #90";
  }
}

static const char *
output_1829 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #180";
  }
}

static const char *
output_1830 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #270";
  }
}

static const char *
output_1831 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #0";
  }
}

static const char *
output_1832 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #90";
  }
}

static const char *
output_1833 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #180";
  }
}

static const char *
output_1834 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #270";
  }
}

static const char *
output_1835 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #0";
  }
}

static const char *
output_1836 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #90";
  }
}

static const char *
output_1837 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #180";
  }
}

static const char *
output_1838 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3498 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #270";
  }
}

static const char *
output_1839 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #0";
  }
}

static const char *
output_1840 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #90";
  }
}

static const char *
output_1841 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #180";
  }
}

static const char *
output_1842 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%P0, %P2, d%c3[%c4], #270";
  }
}

static const char *
output_1843 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #0";
  }
}

static const char *
output_1844 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #90";
  }
}

static const char *
output_1845 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #180";
  }
}

static const char *
output_1846 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%P0, %P2, d%c3[%c4], #270";
  }
}

static const char *
output_1847 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #0";
  }
}

static const char *
output_1848 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #90";
  }
}

static const char *
output_1849 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #180";
  }
}

static const char *
output_1850 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f16\t%q0, %q2, d%c3[%c4], #270";
  }
}

static const char *
output_1851 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #0";
  }
}

static const char *
output_1852 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #90";
  }
}

static const char *
output_1853 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #180";
  }
}

static const char *
output_1854 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3528 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands = neon_vcmla_lane_prepare_operands (operands);
    return "vcmla.f32\t%q0, %q2, d%c3[%c4], #270";
  }
}

static const char *
output_1859 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3561 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands[4]
      = GEN_INT (NEON_ENDIAN_LANE_N (V8QImode, INTVAL (operands[4])));
    return "vsdot.s8\t%P0, %P2, %P3[%c4]";
  }
}

static const char *
output_1860 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3561 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands[4]
      = GEN_INT (NEON_ENDIAN_LANE_N (V8QImode, INTVAL (operands[4])));
    return "vudot.u8\t%P0, %P2, %P3[%c4]";
  }
}

static const char *
output_1861 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3561 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands[4]
      = GEN_INT (NEON_ENDIAN_LANE_N (V8QImode, INTVAL (operands[4])));
    return "vsdot.s8\t%q0, %q2, %P3[%c4]";
  }
}

static const char *
output_1862 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3561 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
    operands[4]
      = GEN_INT (NEON_ENDIAN_LANE_N (V8QImode, INTVAL (operands[4])));
    return "vudot.u8\t%q0, %q2, %P3[%c4]";
  }
}

static const char *
output_1893 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3723 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s8\t%0, %P1[%c2]";
}
}

static const char *
output_1894 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3723 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s16\t%0, %P1[%c2]";
}
}

static const char *
output_1895 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3723 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1896 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3723 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1897 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3742 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_1898 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3742 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1899 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3742 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1900 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3742 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1901 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3761 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1902 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3761 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1903 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3761 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1904 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3761 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1905 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3761 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1906 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3788 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1907 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3788 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1908 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3788 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1909 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3788 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1910 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3788 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char * const output_1917[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1918[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1919[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1920[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1921[] = {
  "vmov\t%e0, %Q1, %R1\n\tvmov\t%f0, %Q1, %R1",
  "vmov\t%e0, %P1\n\tvmov\t%f0, %P1",
};

static const char *
output_1922 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1923 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1924 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1925 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1926 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1927 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1928 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1929 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4013 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1930 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1931 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1976 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4262 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.s%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1977 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4262 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.u%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1978 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4262 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.s%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1979 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4262 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.u%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1980 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4276 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.s%#16.f16\t%q0, %q1, %2";
}
}

static const char *
output_1981 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4276 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.u%#16.f16\t%q0, %q1, %2";
}
}

static const char *
output_1982 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4276 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.s%#16.f16\t%P0, %P1, %2";
}
}

static const char *
output_1983 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4276 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.u%#16.f16\t%P0, %P1, %2";
}
}

static const char *
output_1984 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4289 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_1985 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4289 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_1986 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4289 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_1987 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4289 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_1988 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4303 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.f16.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_1989 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4303 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.f16.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_1990 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4303 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.f16.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_1991 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4303 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, 17);
  return "vcvt.f16.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_2026 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4365 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmul.i16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2027 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4365 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmul.i32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2028 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4365 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmul.f32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2029 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4382 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmul.i16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2030 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4382 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmul.i32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2031 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4382 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmul.f32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2034 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4411 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmull.s%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_2035 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4411 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmull.u%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_2036 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4411 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmull.s%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_2037 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4411 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmull.u%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_2038 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4425 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmull.s16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_2039 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4425 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmull.s32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_2040 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4439 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmulh.s16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2041 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4439 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqrdmulh.s16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2042 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4439 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmulh.s32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2043 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4439 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqrdmulh.s32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_2044 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4453 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmulh.s16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2045 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4453 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqrdmulh.s16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2046 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4453 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmulh.s32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2047 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4453 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqrdmulh.s32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_2048 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlah.s16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2049 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlsh.s16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2050 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlah.s32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2051 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4469 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlsh.s32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2052 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4485 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlah.s16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2053 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4485 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlsh.s16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2054 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4485 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlah.s32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2055 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4485 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return
   "vqrdmlsh.s32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2056 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4501 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmla.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2057 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4501 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmla.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2058 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4501 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmla.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2059 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4519 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmla.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2060 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4519 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmla.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2061 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4519 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmla.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2062 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4537 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlal.s%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2063 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4537 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlal.u%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2064 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4537 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlal.s%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2065 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4537 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlal.u%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2066 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4552 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmlal.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2067 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4552 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmlal.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2068 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4567 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmls.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2069 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4567 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmls.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2070 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4567 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmls.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_2071 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4585 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmls.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2072 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4585 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmls.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2073 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4585 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmls.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_2074 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4603 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlsl.s%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2075 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4603 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlsl.u%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2076 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4603 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlsl.s%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2077 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4603 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vmlsl.u%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2078 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4618 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmlsl.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2079 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4618 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vqdmlsl.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_2080 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vext.8\t%P0, %P1, %P2, %3";
}
}

static const char *
output_2081 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V16QImode));
  return "vext.8\t%q0, %q1, %q2, %3";
}
}

static const char *
output_2082 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_2083 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_2084 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_2085 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_2086 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HFmode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_2087 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HFmode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_2088 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_2089 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SFmode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_2090 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (DImode));
  return "vext.64\t%P0, %P1, %P2, %3";
}
}

static const char *
output_2091 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4908 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2DImode));
  return "vext.64\t%q0, %q1, %q2, %3";
}
}

static const char * const output_2109[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_2110[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_2111[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_2112[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_2113[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_2114[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_2115[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_2116[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_2117[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_2118[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_2119[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_2120[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char *
output_2185 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vshr.s%#8\t%P0, %P1, %2";
}
}

static const char *
output_2186 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vshr.u%#8\t%P0, %P1, %2";
}
}

static const char *
output_2187 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vrshr.s%#8\t%P0, %P1, %2";
}
}

static const char *
output_2188 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vrshr.u%#8\t%P0, %P1, %2";
}
}

static const char *
output_2189 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vshr.s%#8\t%q0, %q1, %2";
}
}

static const char *
output_2190 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vshr.u%#8\t%q0, %q1, %2";
}
}

static const char *
output_2191 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vrshr.s%#8\t%q0, %q1, %2";
}
}

static const char *
output_2192 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vrshr.u%#8\t%q0, %q1, %2";
}
}

static const char *
output_2193 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vshr.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_2194 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vshr.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_2195 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vrshr.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_2196 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vrshr.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_2197 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vshr.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_2198 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vshr.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_2199 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vrshr.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_2200 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vrshr.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_2201 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vshr.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_2202 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vshr.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_2203 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vrshr.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_2204 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vrshr.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_2205 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vshr.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_2206 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vshr.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_2207 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vrshr.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_2208 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vrshr.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_2209 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vshr.s%#64\t%P0, %P1, %2";
}
}

static const char *
output_2210 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vshr.u%#64\t%P0, %P1, %2";
}
}

static const char *
output_2211 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vrshr.s%#64\t%P0, %P1, %2";
}
}

static const char *
output_2212 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vrshr.u%#64\t%P0, %P1, %2";
}
}

static const char *
output_2213 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vshr.s%#64\t%q0, %q1, %2";
}
}

static const char *
output_2214 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vshr.u%#64\t%q0, %q1, %2";
}
}

static const char *
output_2215 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vrshr.s%#64\t%q0, %q1, %2";
}
}

static const char *
output_2216 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5005 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vrshr.u%#64\t%q0, %q1, %2";
}
}

static const char *
output_2217 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5019 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vshrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_2218 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5019 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vrshrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_2219 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5019 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vshrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_2220 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5019 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vrshrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_2221 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5019 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vshrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_2222 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5019 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vrshrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_2223 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqshrn.s%#16\t%P0, %q1, %2";
}
}

static const char *
output_2224 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqshrn.u%#16\t%P0, %q1, %2";
}
}

static const char *
output_2225 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqrshrn.s%#16\t%P0, %q1, %2";
}
}

static const char *
output_2226 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqrshrn.u%#16\t%P0, %q1, %2";
}
}

static const char *
output_2227 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqshrn.s%#32\t%P0, %q1, %2";
}
}

static const char *
output_2228 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqshrn.u%#32\t%P0, %q1, %2";
}
}

static const char *
output_2229 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqrshrn.s%#32\t%P0, %q1, %2";
}
}

static const char *
output_2230 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqrshrn.u%#32\t%P0, %q1, %2";
}
}

static const char *
output_2231 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqshrn.s%#64\t%P0, %q1, %2";
}
}

static const char *
output_2232 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqshrn.u%#64\t%P0, %q1, %2";
}
}

static const char *
output_2233 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqrshrn.s%#64\t%P0, %q1, %2";
}
}

static const char *
output_2234 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5033 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqrshrn.u%#64\t%P0, %q1, %2";
}
}

static const char *
output_2235 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqshrun.s16\t%P0, %q1, %2";
}
}

static const char *
output_2236 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqrshrun.s16\t%P0, %q1, %2";
}
}

static const char *
output_2237 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqshrun.s32\t%P0, %q1, %2";
}
}

static const char *
output_2238 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqrshrun.s32\t%P0, %q1, %2";
}
}

static const char *
output_2239 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqshrun.s64\t%P0, %q1, %2";
}
}

static const char *
output_2240 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5047 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqrshrun.s64\t%P0, %q1, %2";
}
}

static const char *
output_2241 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vshl.i8\t%P0, %P1, %2";
}
}

static const char *
output_2242 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vshl.i8\t%q0, %q1, %2";
}
}

static const char *
output_2243 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vshl.i16\t%P0, %P1, %2";
}
}

static const char *
output_2244 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vshl.i16\t%q0, %q1, %2";
}
}

static const char *
output_2245 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vshl.i32\t%P0, %P1, %2";
}
}

static const char *
output_2246 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vshl.i32\t%q0, %q1, %2";
}
}

static const char *
output_2247 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vshl.i64\t%P0, %P1, %2";
}
}

static const char *
output_2248 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5060 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vshl.i64\t%q0, %q1, %2";
}
}

static const char *
output_2249 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.s%#8\t%P0, %P1, %2";
}
}

static const char *
output_2250 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.u%#8\t%P0, %P1, %2";
}
}

static const char *
output_2251 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.s%#8\t%q0, %q1, %2";
}
}

static const char *
output_2252 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.u%#8\t%q0, %q1, %2";
}
}

static const char *
output_2253 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_2254 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_2255 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_2256 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_2257 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_2258 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_2259 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_2260 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_2261 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.s%#64\t%P0, %P1, %2";
}
}

static const char *
output_2262 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.u%#64\t%P0, %P1, %2";
}
}

static const char *
output_2263 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.s%#64\t%q0, %q1, %2";
}
}

static const char *
output_2264 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.u%#64\t%q0, %q1, %2";
}
}

static const char *
output_2265 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshlu.s8\t%P0, %P1, %2";
}
}

static const char *
output_2266 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshlu.s8\t%q0, %q1, %2";
}
}

static const char *
output_2267 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshlu.s16\t%P0, %P1, %2";
}
}

static const char *
output_2268 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshlu.s16\t%q0, %q1, %2";
}
}

static const char *
output_2269 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshlu.s32\t%P0, %P1, %2";
}
}

static const char *
output_2270 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshlu.s32\t%q0, %q1, %2";
}
}

static const char *
output_2271 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshlu.s64\t%P0, %P1, %2";
}
}

static const char *
output_2272 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5086 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshlu.s64\t%q0, %q1, %2";
}
}

static const char *
output_2273 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  arm_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.s%#8\t%q0, %P1, %2";
}
}

static const char *
output_2274 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  arm_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.u%#8\t%q0, %P1, %2";
}
}

static const char *
output_2275 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  arm_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.s%#16\t%q0, %P1, %2";
}
}

static const char *
output_2276 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  arm_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.u%#16\t%q0, %P1, %2";
}
}

static const char *
output_2277 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  arm_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.s%#32\t%q0, %P1, %2";
}
}

static const char *
output_2278 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  arm_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.u%#32\t%q0, %P1, %2";
}
}

static const char *
output_2279 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsra.s%#8\t%P0, %P2, %3";
}
}

static const char *
output_2280 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsra.u%#8\t%P0, %P2, %3";
}
}

static const char *
output_2281 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vrsra.s%#8\t%P0, %P2, %3";
}
}

static const char *
output_2282 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vrsra.u%#8\t%P0, %P2, %3";
}
}

static const char *
output_2283 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsra.s%#8\t%q0, %q2, %3";
}
}

static const char *
output_2284 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsra.u%#8\t%q0, %q2, %3";
}
}

static const char *
output_2285 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vrsra.s%#8\t%q0, %q2, %3";
}
}

static const char *
output_2286 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vrsra.u%#8\t%q0, %q2, %3";
}
}

static const char *
output_2287 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsra.s%#16\t%P0, %P2, %3";
}
}

static const char *
output_2288 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsra.u%#16\t%P0, %P2, %3";
}
}

static const char *
output_2289 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vrsra.s%#16\t%P0, %P2, %3";
}
}

static const char *
output_2290 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vrsra.u%#16\t%P0, %P2, %3";
}
}

static const char *
output_2291 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsra.s%#16\t%q0, %q2, %3";
}
}

static const char *
output_2292 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsra.u%#16\t%q0, %q2, %3";
}
}

static const char *
output_2293 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vrsra.s%#16\t%q0, %q2, %3";
}
}

static const char *
output_2294 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vrsra.u%#16\t%q0, %q2, %3";
}
}

static const char *
output_2295 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsra.s%#32\t%P0, %P2, %3";
}
}

static const char *
output_2296 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsra.u%#32\t%P0, %P2, %3";
}
}

static const char *
output_2297 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vrsra.s%#32\t%P0, %P2, %3";
}
}

static const char *
output_2298 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vrsra.u%#32\t%P0, %P2, %3";
}
}

static const char *
output_2299 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsra.s%#32\t%q0, %q2, %3";
}
}

static const char *
output_2300 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsra.u%#32\t%q0, %q2, %3";
}
}

static const char *
output_2301 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vrsra.s%#32\t%q0, %q2, %3";
}
}

static const char *
output_2302 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vrsra.u%#32\t%q0, %q2, %3";
}
}

static const char *
output_2303 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsra.s%#64\t%P0, %P2, %3";
}
}

static const char *
output_2304 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsra.u%#64\t%P0, %P2, %3";
}
}

static const char *
output_2305 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vrsra.s%#64\t%P0, %P2, %3";
}
}

static const char *
output_2306 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vrsra.u%#64\t%P0, %P2, %3";
}
}

static const char *
output_2307 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsra.s%#64\t%q0, %q2, %3";
}
}

static const char *
output_2308 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsra.u%#64\t%q0, %q2, %3";
}
}

static const char *
output_2309 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vrsra.s%#64\t%q0, %q2, %3";
}
}

static const char *
output_2310 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vrsra.u%#64\t%q0, %q2, %3";
}
}

static const char *
output_2311 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsri.8\t%P0, %P2, %3";
}
}

static const char *
output_2312 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsri.8\t%q0, %q2, %3";
}
}

static const char *
output_2313 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsri.16\t%P0, %P2, %3";
}
}

static const char *
output_2314 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsri.16\t%q0, %q2, %3";
}
}

static const char *
output_2315 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsri.32\t%P0, %P2, %3";
}
}

static const char *
output_2316 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsri.32\t%q0, %q2, %3";
}
}

static const char *
output_2317 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsri.64\t%P0, %P2, %3";
}
}

static const char *
output_2318 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsri.64\t%q0, %q2, %3";
}
}

static const char *
output_2319 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V8QImode));
  return "vsli.8\t%P0, %P2, %3";
}
}

static const char *
output_2320 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V16QImode));
  return "vsli.8\t%q0, %q2, %3";
}
}

static const char *
output_2321 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V4HImode));
  return "vsli.16\t%P0, %P2, %3";
}
}

static const char *
output_2322 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V8HImode));
  return "vsli.16\t%q0, %q2, %3";
}
}

static const char *
output_2323 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V2SImode));
  return "vsli.32\t%P0, %P2, %3";
}
}

static const char *
output_2324 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V4SImode));
  return "vsli.32\t%q0, %q2, %3";
}
}

static const char *
output_2325 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (DImode));
  return "vsli.64\t%P0, %P2, %3";
}
}

static const char *
output_2326 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  arm_const_bounds (operands[3], 0, neon_element_bits (V2DImode));
  return "vsli.64\t%q0, %q2, %3";
}
}

static const char *
output_2328 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5166 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_2329 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5187 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_2330 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5209 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_2335 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5327 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_2336 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5349 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_2337 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5372 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_2380 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5492 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  operands[3] = GEN_INT (lane);
  if (max == 1)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2381 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5492 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  operands[3] = GEN_INT (lane);
  if (max == 1)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2382 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5492 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HFmode);
  operands[3] = GEN_INT (lane);
  if (max == 1)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2383 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5492 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  operands[3] = GEN_INT (lane);
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2384 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5492 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  operands[3] = GEN_INT (lane);
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2385 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5492 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(DImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  operands[3] = GEN_INT (lane);
  if (max == 1)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2386 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V16QImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  operands[3] = GEN_INT (lane);
  int regno = REGNO (operands[0]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2387 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  operands[3] = GEN_INT (lane);
  int regno = REGNO (operands[0]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2388 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  operands[3] = GEN_INT (lane);
  int regno = REGNO (operands[0]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HFmode, regno);
  if (max == 2)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2389 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  operands[3] = GEN_INT (lane);
  int regno = REGNO (operands[0]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2390 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  operands[3] = GEN_INT (lane);
  int regno = REGNO (operands[0]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2391 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5513 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2DImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  operands[3] = GEN_INT (lane);
  int regno = REGNO (operands[0]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_2397 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5554 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vld1.8\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_2398 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5554 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vld1.16\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_2399 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5554 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vld1.16\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_2400 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5554 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_2401 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5554 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_2415 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5600 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  operands[2] = GEN_INT (lane);
  if (max == 1)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2416 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5600 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  operands[2] = GEN_INT (lane);
  if (max == 1)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2417 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5600 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HFmode);
  operands[2] = GEN_INT (lane);
  if (max == 1)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2418 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5600 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  operands[2] = GEN_INT (lane);
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2419 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5600 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  operands[2] = GEN_INT (lane);
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2420 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5600 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(DImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  operands[2] = GEN_INT (lane);
  if (max == 1)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2421 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V16QImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[1]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  operands[2] = GEN_INT (lane);
  operands[1] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2422 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  operands[2] = GEN_INT (lane);
  operands[1] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2423 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[1]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  operands[2] = GEN_INT (lane);
  operands[1] = gen_rtx_REG (V4HFmode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2424 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  operands[2] = GEN_INT (lane);
  operands[1] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2425 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  operands[2] = GEN_INT (lane);
  operands[1] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2426 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2DImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[1]);
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  operands[2] = GEN_INT (lane);
  operands[1] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2427 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5653 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.8\t%h0, %A1";
}
}

static const char *
output_2428 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5653 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.16\t%h0, %A1";
}
}

static const char *
output_2429 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5653 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.16\t%h0, %A1";
}
}

static const char *
output_2430 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5653 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_2431 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5653 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_2432 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5653 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.64\t%h0, %A1";
}
}

static const char *
output_2438 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5691 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.8\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2439 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5691 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2440 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5691 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2441 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5691 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2442 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5691 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2443 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5715 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2444 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5715 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2445 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5715 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2446 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5715 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2447 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5741 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld2.8\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_2448 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5741 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2449 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5741 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HFmode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2450 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5741 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2451 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5741 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2452 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5741 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld2.64\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_2453 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5766 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.8\t%h1, %A0";
}
}

static const char *
output_2454 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5766 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.16\t%h1, %A0";
}
}

static const char *
output_2455 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5766 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.16\t%h1, %A0";
}
}

static const char *
output_2456 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5766 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_2457 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5766 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_2458 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5766 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.64\t%h1, %A0";
}
}

static const char *
output_2464 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5805 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.8\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2465 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5805 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2466 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5805 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2467 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5805 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2468 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5805 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2469 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5829 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2470 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5829 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2471 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5829 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2472 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5829 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2473 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.8\t%h0, %A1";
}
}

static const char *
output_2474 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.16\t%h0, %A1";
}
}

static const char *
output_2475 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.16\t%h0, %A1";
}
}

static const char *
output_2476 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_2477 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_2478 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5862 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.64\t%h0, %A1";
}
}

static const char *
output_2479 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5905 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2480 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5905 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2481 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5905 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2482 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5905 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2483 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5905 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2484 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5925 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2485 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5925 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2486 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5925 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2487 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5925 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2488 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5925 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2489 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5948 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N (V8QImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.8\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2490 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5948 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N (V4HImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2491 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5948 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N (V4HFmode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2492 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5948 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N (V2SImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2493 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5948 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N (V2SFmode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2494 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5974 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2495 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5974 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2496 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5974 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2497 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5974 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2498 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6002 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.8\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_2499 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6002 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2500 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6002 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2501 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6002 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2502 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6002 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2503 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6002 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.64\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_2504 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.8\t%h1, %A0";
}
}

static const char *
output_2505 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.16\t%h1, %A0";
}
}

static const char *
output_2506 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.16\t%h1, %A0";
}
}

static const char *
output_2507 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_2508 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_2509 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6035 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.64\t%h1, %A0";
}
}

static const char *
output_2510 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6077 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2511 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6077 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2512 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6077 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2513 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6077 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2514 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6077 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2515 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6096 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2516 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6096 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2517 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6096 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2518 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6096 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2519 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6096 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2520 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6119 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.8\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2521 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6119 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2522 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6119 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2523 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6119 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2524 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6119 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2525 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6145 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2526 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6145 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2527 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6145 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2528 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6145 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2529 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6180 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.8\t%h0, %A1";
}
}

static const char *
output_2530 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6180 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.16\t%h0, %A1";
}
}

static const char *
output_2531 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6180 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.16\t%h0, %A1";
}
}

static const char *
output_2532 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6180 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_2533 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6180 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_2534 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6180 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.64\t%h0, %A1";
}
}

static const char *
output_2535 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2536 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2537 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2538 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2539 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2540 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6244 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2541 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6244 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2542 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6244 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2543 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6244 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2544 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6244 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2545 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6268 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[6];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.8\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2546 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6268 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[6];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2547 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6268 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[6];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2548 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6268 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[6];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2549 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6268 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[3]));
  int regno = REGNO (operands[0]);
  rtx ops[6];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2550 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6295 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2551 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6295 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2552 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6295 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2553 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6295 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[3]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2554 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6324 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.8\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_2555 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6324 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2556 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6324 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2557 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6324 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2558 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6324 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2559 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6324 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.64\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_2560 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6360 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.8\t%h1, %A0";
}
}

static const char *
output_2561 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6360 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.16\t%h1, %A0";
}
}

static const char *
output_2562 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6360 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.16\t%h1, %A0";
}
}

static const char *
output_2563 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6360 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_2564 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6360 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_2565 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6360 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.64\t%h1, %A0";
}
}

static const char *
output_2566 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6403 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2567 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6403 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2568 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6403 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2569 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6403 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2570 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6403 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2571 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6423 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2572 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6423 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2573 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6423 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2574 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6423 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2575 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6423 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2576 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6447 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8QImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[6];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.8\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2577 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6447 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[6];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2578 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6447 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4HFmode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[6];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2579 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6447 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SImode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[6];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2580 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6447 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V2SFmode, INTVAL (operands[2]));
  int regno = REGNO (operands[1]);
  rtx ops[6];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2581 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6474 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2582 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6474 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V8HFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2583 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6474 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SImode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2584 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6474 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = NEON_ENDIAN_LANE_N(V4SFmode, INTVAL (operands[2]));
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2609 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6628 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vshll.s8 %q0, %P1, %2";
}
}

static const char *
output_2610 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6628 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vshll.u8 %q0, %P1, %2";
}
}

static const char *
output_2611 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6628 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vshll.s16 %q0, %P1, %2";
}
}

static const char *
output_2612 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6628 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vshll.u16 %q0, %P1, %2";
}
}

static const char *
output_2613 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6628 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vshll.s32 %q0, %P1, %2";
}
}

static const char *
output_2614 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6628 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/neon.md"
{
  return "vshll.u32 %q0, %P1, %2";
}
}

static const char *
output_2656 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 50 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (TARGET_HAVE_DMB)
      {
	return "dmb\tish";
      }

    if (TARGET_HAVE_DMB_MCR)
      return "mcr\tp15, 0, r0, c7, c10, 5";

    gcc_unreachable ();
  }
}

static const char *
output_2657 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_acquire (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "ldab\t%0, %1";
	else
	  return "ldab%?\t%0, %1";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "ldrb\t%0, %1";
	else
	  return "ldrb%?\t%0, %1";
      }
  }
}

static const char *
output_2658 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_acquire (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "ldah\t%0, %1";
	else
	  return "ldah%?\t%0, %1";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "ldrh\t%0, %1";
	else
	  return "ldrh%?\t%0, %1";
      }
  }
}

static const char *
output_2659 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_acquire (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "lda\t%0, %1";
	else
	  return "lda%?\t%0, %1";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "ldr\t%0, %1";
	else
	  return "ldr%?\t%0, %1";
      }
  }
}

static const char *
output_2660 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 98 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_release (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "stlb\t%1, %0";
	else
	  return "stlb%?\t%1, %0";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "strb\t%1, %0";
	else
	  return "strb%?\t%1, %0";
      }
  }
}

static const char *
output_2661 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 98 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_release (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "stlh\t%1, %0";
	else
	  return "stlh%?\t%1, %0";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "strh\t%1, %0";
	else
	  return "strh%?\t%1, %0";
      }
  }
}

static const char *
output_2662 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 98 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_release (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "stl\t%1, %0";
	else
	  return "stl%?\t%1, %0";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "str\t%1, %0";
	else
	  return "str%?\t%1, %0";
      }
  }
}

static const char * const output_2748[] = {
  "ldrexb%?\t%0, %C1",
  "ldrexb\t%0, %C1",
};

static const char * const output_2749[] = {
  "ldrexh%?\t%0, %C1",
  "ldrexh\t%0, %C1",
};

static const char * const output_2750[] = {
  "ldaexb%?\t%0, %C1",
  "ldaexb\t%0, %C1",
};

static const char * const output_2751[] = {
  "ldaexh%?\t%0, %C1",
  "ldaexh\t%0, %C1",
};

static const char * const output_2752[] = {
  "ldrex%?\t%0, %C1",
  "ldrex\t%0, %C1",
};

static const char * const output_2753[] = {
  "ldaex%?\t%0, %C1",
  "ldaex\t%0, %C1",
};

static const char *
output_2756 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strexb\t%0, %2, %C1";
    else
      return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_2757 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strexh\t%0, %2, %C1";
    else
      return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_2758 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strex\t%0, %2, %C1";
    else
      return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_2759 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strexd\t%0, %2, %C1";
    else
      return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_2760 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 550 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    /* See comment in arm_store_exclusive<mode> above.  */
    gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
    return "stlexd%?\t%0, %2, %H2, %C1";
  }
}

static const char * const output_2761[] = {
  "stlexb%?\t%0, %2, %C1",
  "stlexb\t%0, %2, %C1",
};

static const char * const output_2762[] = {
  "stlexh%?\t%0, %2, %C1",
  "stlexh\t%0, %2, %C1",
};

static const char * const output_2763[] = {
  "stlex%?\t%0, %2, %C1",
  "stlex\t%0, %2, %C1",
};

static const char *
output_2818 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 209 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-fixed.md"
{
  /* s16.15 * s16.15 -> s32.30.  */
  output_asm_insn ("smull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0

    [ S i i .... i i i ] [ i f f f ... f f ]
                        |
			v
	     [ S i ... i f ... f f ]

    Need 16 integral bits, so saturate at 15th bit of high word.  */

  output_asm_insn ("ssat\t%R3, #15, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (arm_restrict_it)
    {
      output_asm_insn ("mvn\t%4, %R3, asr #32", operands);
      output_asm_insn ("it\tne", operands);
      output_asm_insn ("movne\t%Q3, %4", operands);
    }
  else
    {
      if (TARGET_THUMB2)
        output_asm_insn ("it\tne", operands);
      output_asm_insn ("mvnne\t%Q3, %R3, asr #32", operands);
    }
  output_asm_insn ("mov\t%0, %Q3, lsr #15", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #17", operands);
  return "";
}
}

static const char *
output_2819 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 269 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm-fixed.md"
{
  /* 16.16 * 16.16 -> 32.32.  */
  output_asm_insn ("umull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0

    [ i i i .... i i i ] [ f f f f ... f f ]
                        |
			v
	     [ i i ... i f ... f f ]

    Need 16 integral bits, so saturate at 16th bit of high word.  */

  output_asm_insn ("usat\t%R3, #16, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (arm_restrict_it)
    {
      output_asm_insn ("sbfx\t%4, %R3, #15, #1", operands);
      output_asm_insn ("it\tne", operands);
      output_asm_insn ("movne\t%Q3, %4", operands);
    }
  else
    {
      if (TARGET_THUMB2)
        output_asm_insn ("it\tne", operands);
      output_asm_insn ("sbfxne\t%Q3, %R3, #15, #1", operands);
    }
  output_asm_insn ("lsr\t%0, %Q3, #16", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #16", operands);
  return "";
}
}

static const char * const output_3718[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "add%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_3719[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3721[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3722[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3723[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3724[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3725[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3726[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3729[] = {
  "sbc%?\t%0, %1, %2",
  "rsc%?\t%0, %2, %1",
  "sbc%?\t%0, %2, %2, lsl #1",
};

static const char * const output_3732[] = {
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %2",
  "sub%?\t%0, %1, %2",
  "rsb%?\t%0, %2, %1",
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_3760[] = {
  "and%?\t%0, %1, %2",
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char *
output_3761 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2533 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_3765[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3772[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3774[] = {
  "orr%?\t%0, %1, %2",
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_3775[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3777[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_3782 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3994 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3783 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3994 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3784 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3994 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3785 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3994 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3786 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4020 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3787 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4020 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3788 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4020 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3789 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4020 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3790 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4238 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char * const output_3799[] = {
  "sdiv%?\t%0, %1, %2",
  "sdiv\t%0, %1, %2",
};

static const char * const output_3800[] = {
  "udiv%?\t%0, %1, %2",
  "udiv\t%0, %1, %2",
};

static const char * const output_3804[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char * const output_3812[] = {
  "#",
  "ldrh%?\t%0, %1",
};

static const char * const output_3813[] = {
  "uxth%?\t%0, %1",
  "ldrh%?\t%0, %1",
};

static const char * const output_3815[] = {
  "#",
  "ldrb%?\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3816[] = {
  "uxtb%?\t%0, %1",
  "ldrb%?\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3819[] = {
  "#",
  "ldrsh%?\t%0, %1",
};

static const char * const output_3820[] = {
  "sxth%?\t%0, %1",
  "ldrsh%?\t%0, %1",
};

static const char * const output_3822[] = {
  "#",
  "ldrsb%?\t%0, %1",
};

static const char * const output_3823[] = {
  "sxtb%?\t%0, %1",
  "ldrsb%?\t%0, %1",
};

static const char * const output_3825[] = {
  "movt%?\t%0, #:upper16:%c2",
  "movt\t%0, #:upper16:%c2",
};

static const char * const output_3826[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_3827 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6265 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_3828 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6281 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_3829[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "strh%?\t%1, %0\t%@ movhi",
  "ldrh%?\t%0, %1\t%@ movhi",
};

static const char * const output_3830[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_3831[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldrb%?\t%0, %1",
  "strb%?\t%1, %0",
  "ldrb%?\t%0, %1",
  "strb%?\t%1, %0",
};

static const char *
output_3832 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6904 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldrh%?\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "strh%?\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	long bits;
	rtx ops[4];

	bits = real_to_target (NULL, CONST_DOUBLE_REAL_VALUE (operands[1]),
			       HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3833 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7000 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: return "mov%?\t%0, %1";
    case 1:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      return "ldr%?\t%0, %1\t%@ float";
    case 2: return "str%?\t%1, %0\t%@ float";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_3834[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_3836 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8098 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_3837 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8475 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_3838 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8536 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_3853 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10828 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldmib%?\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldmia%?\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldmda%?\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldmda%?\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldmia%?\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldmia%?\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldmda%?\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_3854 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11296 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3855 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3856 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11352 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_3861[] = {
  "movt%?\t%0, %L1",
  "movt\t%0, %L1",
};

static const char * const output_3862[] = {
  "rev\t%0, %1",
  "rev%?\t%0, %1",
  "rev%?\t%0, %1",
};

static const char *
output_3869 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 166 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/ldrdstrd.md"
{
    rtx op[2];
    op[0] = gen_rtx_REG (DImode, REGNO (operands[0]));
    op[1] = adjust_address (operands[2], DImode, 0);
    return output_move_double (op, true, NULL);
  }
}

static const char *
output_3870 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 186 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/ldrdstrd.md"
{
    rtx op[2];
    op[0] = adjust_address (operands[2], DImode, 0);
    op[1] = gen_rtx_REG (DImode, REGNO (operands[0]));
    return output_move_double (op, true, NULL);
  }
}

static const char *
output_3919 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12073 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_3923[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3924[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3925[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_3927 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3928 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3929 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3972 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 686 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3973 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 703 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3974 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 720 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_4026 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4027 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4028 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4029 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4030 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4031 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4032 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4033 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4034 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4035 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4036 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4037 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4038 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4039 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4040 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4041 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4042 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4043 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4044 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4045 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4046 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4047 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4048 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4049 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4140 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 33 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
      return "mov%?\t%0, %1\t%@ movhi";
    case 1:
      return "mvn%?\t%0, #%B1\t%@ movhi";
    case 2:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 3:
      return "strh%?\t%1, %0\t%@ movhi";
    case 4:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 5:
    case 6:
      return "vmov%?\t%0, %1\t%@ int";
    case 7:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4141 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 84 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1\t%@ movhi";
    case 3:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 4:
      return "strh%?\t%1, %0\t%@ movhi";
    case 5:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 6:
    case 7:
      return "vmov%?\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4142 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 129 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
      return "mov%?\t%0, %1\t%@ movhi";
    case 1:
      return "mvn%?\t%0, #%B1\t%@ movhi";
    case 2:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 3:
      return "strh%?\t%1, %0\t%@ movhi";
    case 4:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 5:
    case 6:
      return "vmov.f16\t%0, %1\t%@ int";
    case 7:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4143 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 179 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1\t%@ movhi";
    case 3:
      return "movw%?\t%0, %L1\t%@ movhi";
    case 4:
      return "strh%?\t%1, %0\t%@ movhi";
    case 5:
      return "ldrh%?\t%0, %1\t%@ movhi";
    case 6:
    case 7:
      return "vmov.f16\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4144 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 223 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "vmov%?\t%0, %1\t%@ int";
    case 7:
      return "vmov%?\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4145 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 266 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3:
      return "mvn%?\t%0, #%B1";
    case 4:
      return "movw%?\t%0, %1";
    case 5:
    case 6:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      return "ldr%?\t%0, %1";
    case 7:
    case 8:
      return "str%?\t%1, %0";
    case 9:
      return "vmov%?\t%0, %1\t%@ int";
    case 10:
      return "vmov%?\t%0, %1\t%@ int";
    case 11:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 12: case 13:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4146 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 317 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      /* Fall through.  */
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "vmov%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "vmov%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      if (TARGET_VFP_SINGLE)
	return "vmov%?.f32\t%0, %1\t%@ int\n\tvmov%?.f32\t%p0, %p1\t%@ int";
      else
	return "vmov%?.f64\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4147 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 379 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"
{
  switch (which_alternative)
    {
    case 0: /* ARM register from memory.  */
      return "ldrh%?\t%0, %1\t%@ __fp16";
    case 1: /* Memory from ARM register.  */
      return "strh%?\t%1, %0\t%@ __fp16";
    case 2: /* S register from S register.  */
      return "vmov\t%0, %1\t%@ __fp16";
    case 3: /* ARM register from ARM register.  */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 4: /* S register from ARM register.  */
    case 5: /* ARM register from S register.  */
    case 6: /* S register from immediate.  */
      return "vmov.f16\t%0, %1\t%@ __fp16";
    case 7: /* S register from memory.  */
      return "vld1.16\t{%z0}, %A1";
    case 8: /* Memory from S register.  */
      return "vst1.16\t{%z1}, %A0";
    case 9: /* ARM register from constant.  */
      {
	long bits;
	rtx ops[4];

	bits = real_to_target (NULL, CONST_DOUBLE_REAL_VALUE (operands[1]),
			       HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
 }
}

static const char *
output_4148 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 565 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4149 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 601 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_4150 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 639 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "vmov%?\t%P0, %Q1, %R1";
      case 1:
	return "vmov%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "vmov%?.f64\t%P0, %1";
      case 3:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "vmov.i64\t%P0, #0\t%@ float";
      case 4: case 5:
	return output_move_vfp (operands);
      case 6: case 7:
	return output_move_double (operands, true, NULL);
      case 8:
	if (TARGET_VFP_SINGLE)
	  return "vmov%?.f32\t%0, %1\n\tvmov%?.f32\t%p0, %p1";
	else
	  return "vmov%?.f64\t%P0, %P1";
      case 9:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char * const output_4153[] = {
  "vneg%?.f32\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_4154[] = {
  "vneg%?.f64\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_4199[] = {
  "vcmp%?.f32\t%0, %1",
  "vcmp%?.f32\t%0, #0",
};

static const char * const output_4200[] = {
  "vcmpe%?.f32\t%0, %1",
  "vcmpe%?.f32\t%0, #0",
};

static const char * const output_4201[] = {
  "vcmp%?.f64\t%P0, %P1",
  "vcmp%?.f64\t%P0, #0",
};

static const char * const output_4202[] = {
  "vcmpe%?.f64\t%P0, %P1",
  "vcmpe%?.f64\t%P0, #0",
};

static const char * const output_4205[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_4206[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char *
output_4218 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 255 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3: return "mvn%?\t%0, #%B1";
    case 4: return "movw%?\t%0, %1";
    case 5:
    case 6:
      /* Cannot load it directly, split to load it via MOV / MOVT.  */
      if (!MEM_P (operands[1]) && arm_disable_literal_pool)
	return "#";
      return "ldr%?\t%0, %1";
    case 7:
    case 8: return "str%?\t%1, %0";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_4219[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "strh%?\t%1, %0\t%@ movhi",
  "ldrh%?\t%0, %1\t%@ movhi",
};

static const char * const output_4220[] = {
  "sxtb%?\t%0, %1",
  "ldrsb%?\t%0, %1",
};

static const char * const output_4221[] = {
  "uxth%?\t%0, %1",
  "ldrh%?\t%0, %1",
};

static const char * const output_4222[] = {
  "uxtb%?\t%0, %1",
  "ldrb%?\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_4224 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1227 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_4228 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1253 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_4239 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_acquire (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "ldab\t%0, %1";
	else
	  return "ldab%?\t%0, %1";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "ldrb\t%0, %1";
	else
	  return "ldrb%?\t%0, %1";
      }
  }
}

static const char *
output_4240 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_acquire (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "ldah\t%0, %1";
	else
	  return "ldah%?\t%0, %1";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "ldrh\t%0, %1";
	else
	  return "ldrh%?\t%0, %1";
      }
  }
}

static const char *
output_4241 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_acquire (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "lda\t%0, %1";
	else
	  return "lda%?\t%0, %1";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "ldr\t%0, %1";
	else
	  return "ldr%?\t%0, %1";
      }
  }
}

static const char *
output_4242 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 98 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_release (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "stlb\t%1, %0";
	else
	  return "stlb%?\t%1, %0";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "strb\t%1, %0";
	else
	  return "strb%?\t%1, %0";
      }
  }
}

static const char *
output_4243 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 98 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_release (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "stlh\t%1, %0";
	else
	  return "stlh%?\t%1, %0";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "strh\t%1, %0";
	else
	  return "strh%?\t%1, %0";
      }
  }
}

static const char *
output_4244 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 98 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (aarch_mm_needs_release (operands[2]))
      {
	if (TARGET_THUMB1)
	  return "stl\t%1, %0";
	else
	  return "stl%?\t%1, %0";
      }
    else
      {
	if (TARGET_THUMB1)
	  return "str\t%1, %0";
	else
	  return "str%?\t%1, %0";
      }
  }
}

static const char * const output_4246[] = {
  "ldrexb%?\t%0, %C1",
  "ldrexb\t%0, %C1",
};

static const char * const output_4247[] = {
  "ldrexh%?\t%0, %C1",
  "ldrexh\t%0, %C1",
};

static const char * const output_4248[] = {
  "ldaexb%?\t%0, %C1",
  "ldaexb\t%0, %C1",
};

static const char * const output_4249[] = {
  "ldaexh%?\t%0, %C1",
  "ldaexh\t%0, %C1",
};

static const char * const output_4250[] = {
  "ldrex%?\t%0, %C1",
  "ldrex\t%0, %C1",
};

static const char * const output_4251[] = {
  "ldaex%?\t%0, %C1",
  "ldaex\t%0, %C1",
};

static const char *
output_4254 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strexb\t%0, %2, %C1";
    else
      return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_4255 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strexh\t%0, %2, %C1";
    else
      return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_4256 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strex\t%0, %2, %C1";
    else
      return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_4257 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 524 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the
	   lowest word in memory.  */
	gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
	return "strexd%?\t%0, %2, %H2, %C1";
      }
    if (TARGET_THUMB1)
      return "strexd\t%0, %2, %C1";
    else
      return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_4258 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 550 "../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/sync.md"
{
    /* See comment in arm_store_exclusive<mode> above.  */
    gcc_assert ((REGNO (operands[2]) & 1) == 0 || TARGET_THUMB2);
    return "stlexd%?\t%0, %2, %H2, %C1";
  }
}

static const char * const output_4259[] = {
  "stlexb%?\t%0, %2, %C1",
  "stlexb\t%0, %2, %C1",
};

static const char * const output_4260[] = {
  "stlexh%?\t%0, %2, %C1",
  "stlexh\t%0, %2, %C1",
};

static const char * const output_4261[] = {
  "stlex%?\t%0, %2, %C1",
  "stlex\t%0, %2, %C1",
};



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    arm_general_register_operand,
    "=&r,&r,&r,&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "%0,0,r,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_adddi_operand,
    "r,0,r,Dd,Dd",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,l,l,l,r,k,r,k,r,k,r,k,k,r,k,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,l,0,l,rk,k,r,r,rk,k,rk,k,r,rk,k,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,l,Py,Pd,rI,rI,k,rI,Pj,Pj,L,L,L,PJ,PJ,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "I,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "L,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,I,L,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "l,rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I,Pz",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_neg_immediate_operand,
    "L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_neg_immediate_operand,
    "L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "=&r,&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "0,r,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "r,0,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,l,l,r,r,r,rk,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,0,l,Pz,I,r,r,k,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,Py,Pd,l,r,I,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,r,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,r,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,&r,&r,&r,?w,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,0,r,w,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_anddi_operand_neon,
    "w,DL,r,r,De,De,w,DL",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,K,r,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "I,K,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,r,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,&r,&r,&r,?w,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,0,r,w,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_iordi_operand_neon,
    "w,Dl,r,r,Df,Df,w,Dl",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,&r,&r,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,r,0,r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_xordi_operand,
    "w,r,r,Dg,Dg,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,r,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    minmax_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "TsI,TsI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,M,M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uh",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=Uw,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX,mX,mX",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,rk,K",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,r,l,Uu,r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,rk,I,Py,K,Uu,l,Uh,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,r,r,m",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "rDa,Db,Dc,mF,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,r,I,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "rDi",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "Py,r,Di,rDi",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator_mode,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "Cs,US",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    E_CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=o",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    guard_addr_operand,
    "X,X",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&l,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+&l,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    guard_addr_operand,
    "X,X",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=&l,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,l,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,lPy,lPy,rI,L,rI,L,rI,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,l,l,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rI,L,lPy,lPy,rI,rI,L,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&Ts,&Ts,&Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rPy,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rPy,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    push_mult_memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_fp,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    vfp_hard_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "X",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uz",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uz",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m,y,y,r,y,Uy,*w,r,*w,*w,*Uv",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r,y,r,y,Uy,y,r,*w,*w,*Uvi,*w",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,z,r,?z,?Uy,*t,r,*t,*t,*Uv",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,z,Uy,z,r,*t,*t,*Uvi,*t",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,m,r,*t,r,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi,r,*t,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,m,r,*t,r,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,n,r,m,r,*t,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,r,*t,r,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi,r,*t,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk,r,*t,*t,*UvTu,*t",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,UvTu,w",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,t,t,Um,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,Dv,Um,t,F",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,Um,r,m,t,r,t,r,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Um,t,m,r,t,r,r,t,F",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,F",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    hard_sf_operand,
    "?r,t,Dv,UvHa,t,mHa,r,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,w,Uv,r,m,w,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,G,UvF,w,mF,r,w,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,w,Uv,r,m,w,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    hard_df_operand,
    "?r,w,Dy,G,UvHa,w,mHa,r,w,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=t,t,t,t,t,t,?r,?r,?r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,t,t,0,?r,?r,0,t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,0,t,?r,0,?r,t,0,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w,w,w,w,?r,?r,?r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w,0,?r,?r,0,w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w,?r,0,?r,w,0,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "tG",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "wG",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two,
    "Dp",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    vfp_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "E",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l,*rk,*hk,l,k,l,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,l,*0,*0,k,k,0,l,k",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "I,J,lL,*hk,*rk,M,O,Pa,Pb,Pc",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "lPd",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%l,*h,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "N,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,V,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,r,l,>,l,m,*r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,j,>,l,mi,l,*r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,r,l,l,l,>,l,m,*l*h*k",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,j,J,K,>,l,mi,l,*l*h*k",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,l*r,*h,l,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,k*h,*r,I,n",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,l*r,*h,l",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,k*h,*r,I",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,mF,l,*h,*r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmpneg_operand,
    "L,J",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,l,*l,1,1,1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "IJ,lL,*l,lIJ,lIJ,lIJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,l,l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "J,l,L,IJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=X,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,Py,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l,X,r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0,1,0,1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,l,r,m,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,n,r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&kr",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator_mode,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator_mode,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r,r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,lPy,0,0,rI,K,I,r,rI,K,K,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "lPy,0,rI,K,0,0,rI,I,K,rI,K,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator_strict_it,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts,Ts",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,TsI,?TsI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "TsI,0,TsI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPt,Ps,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPv,rIL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?Us,*r",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,Dn,Uni,w,r,Usi,r,*r",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?Us,*r",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,Dn,Uni,w,r,Usi,r,*r",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?Us,*r",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,Dn,Uni,w,r,Usi,r,*r",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?Us,*r",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,Dn,Uni,w,r,Usi,r,*r",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?Us,*r",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,Dn,Uni,w,r,Usi,r,*r",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?Us,*r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,Dn,Uni,w,r,Usi,r,*r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,w,?r,?w,?r,?r,?Us",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dm,DN,Uni,w,r,r,Usi,r",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    E_CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    E_CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    E_XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    E_XImode,
    0,
    0,
    1,
    1
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?w,?&r,?&r,?&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,w,r,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "w,r,0,w,r,Dd,Dd",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,0,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0,0,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,r,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w,r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&w,X,X",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dm",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dm",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dm",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dm",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dm",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dm",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dm",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dm",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dm",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dm",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dm",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dm",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "i,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,r,&r,?w,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,0,r,0w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "rUm,i,r,i,i,rUm,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,&r,X,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,X,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,X,&w,X",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,r,&r,?w,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,0,r,0w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,i,r,i,i,r,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2r,X,&r,X,X,2r,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,X,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,X,&w,X",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "=Um",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q,Q,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q,Q,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q,Q,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q,Q,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,l",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q,Q,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,l",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q,Q,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,l",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_CC_Zmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_CC_Zmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_CC_Zmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_CC_Zmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "rDi,lIL*h,J,*r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register_operand,
    "=&c,&l,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&0,&l*h",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL,lIL*h,J,*r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,X,X,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lIJL,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&r",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lIJL,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&r",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lIJL,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,lIJL,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,lPd,lPd",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,l,l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r,&r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lL,?IJ,?r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&r",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l,&l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd,lPd",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r,&r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lL,?IJ,?r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&r",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l,&l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd,lPd",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lL,?IJ,?r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd,lPd",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,lL,?IJ,?r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l,&l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,lPd,lPd,lPd",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,l,l,l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lIJL,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lIJL,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lIJL,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,lPd,lPd",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,lIJL,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,lPd,lPd",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l,&l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,l,l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua,Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&l",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_xordi_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reload_memory_operand,
    "o",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    guard_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    guard_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    lt_ge_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V8HFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_CImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    E_EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_CImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    E_XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_XImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,l,l,l,r,k,r,k,r,k,r,k,k,r,k,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,l,0,l,rk,k,r,r,rk,k,rk,k,r,rk,k,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,l,Py,Pd,rI,rI,k,rI,Pj,Pj,L,L,L,PJ,PJ,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,I,L,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "l,rI,K",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I,Pz",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,l,l,r,r,r,rk,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,0,l,Pz,I,r,r,k,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,Py,Pd,l,r,I,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,K,r,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,r,?n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,M,M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uh",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,rk,K",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,r,l,Uu,r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,rk,I,Py,K,Uu,l,Uh,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,r,I,L",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=o",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r,rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,m,r,*t,r,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi,r,*t,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,m,r,*t,r,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,n,r,m,r,*t,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,r,*t,r,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi,r,*t,*t",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk,r,*t,*t,*UvTu,*t",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,UvTu,w",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,t,t,Um,r",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,Dv,Um,t,F",
    E_HFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    hard_sf_operand,
    "?r,t,Dv,UvHa,t,mHa,r,t,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,w,Uv,r,m,w,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,G,UvF,w,mF,r,w,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two,
    "Dp",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,l,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,l,r,m,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,n,r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,l",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q,Q,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,l",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q,Q,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q,Q,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q,Q,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,l",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q,Q,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,l",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q,Q,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,l",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,Pf,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua,Ua",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua,Ua",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua,Ua",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    E_USAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    E_SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:463 */
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    3,
    3,
    0,
    5,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:491 */
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:521 */
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:610 */
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    16,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:653 */
  {
    "adddi3_compareV",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3_compareV },
    &operand_data[10],
    3,
    3,
    4,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:696 */
  {
    "addsi3_compareV",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_compareV },
    &operand_data[13],
    3,
    3,
    4,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:711 */
  {
    "*addsi3_compareV_upper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adcs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    3,
    3,
    4,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:732 */
  {
    "adddi3_compareC",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3_compareC },
    &operand_data[10],
    3,
    3,
    4,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:775 */
  {
    "*addsi3_compareC_upper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adcs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    3,
    3,
    4,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:796 */
  {
    "addsi3_compareC",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_compareC },
    &operand_data[13],
    3,
    3,
    4,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:812 */
  {
    "addsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_compare0 },
    &operand_data[16],
    3,
    3,
    2,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:829 */
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    { 0 },
    &operand_data[17],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:845 */
  {
    "*compare_negsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[19],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:862 */
  {
    "cmpsi2_addneg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_14 },
#else
    { 0, 0, output_14 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpsi2_addneg },
    &operand_data[21],
    4,
    4,
    1,
    2,
    3
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:930 */
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    3,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:947 */
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_16 },
#else
    { 0, output_16, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    3,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:964 */
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_17 },
#else
    { 0, output_17, 0 },
#endif
    { 0 },
    &operand_data[25],
    2,
    2,
    1,
    5,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:985 */
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_18 },
#else
    { 0, output_18, 0 },
#endif
    { 0 },
    &operand_data[25],
    2,
    2,
    1,
    5,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1006 */
  {
    "*addsi3_carryin_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_19 },
#else
    { 0, output_19, 0 },
#endif
    { 0 },
    &operand_data[27],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1006 */
  {
    "*addsi3_carryin_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_20 },
#else
    { 0, output_20, 0 },
#endif
    { 0 },
    &operand_data[27],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1024 */
  {
    "*addsi3_carryin_alt2_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_21 },
#else
    { 0, output_21, 0 },
#endif
    { 0 },
    &operand_data[30],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1024 */
  {
    "*addsi3_carryin_alt2_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_22 },
#else
    { 0, output_22, 0 },
#endif
    { 0 },
    &operand_data[30],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1042 */
  {
    "*addsi3_carryin_shift_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1042 */
  {
    "*addsi3_carryin_shift_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1059 */
  {
    "*addsi3_carryin_clobercc_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adcs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1059 */
  {
    "*addsi3_carryin_clobercc_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adcs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1097 */
  {
    "subdi3_compare1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3_compare1 },
    &operand_data[10],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1127 */
  {
    "subsi3_compare1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_compare1 },
    &operand_data[13],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1140 */
  {
    "*subsi3_carryin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_29 },
#else
    { 0, output_29, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1156 */
  {
    "*subsi3_carryin_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc\t%0, %1, #%n2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[44],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1167 */
  {
    "*subsi3_carryin_const0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc\t%0, %1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1177 */
  {
    "*subsi3_carryin_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1191 */
  {
    "*subsi3_carryin_compare_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, #%n3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[50],
    4,
    4,
    1,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1207 */
  {
    "*subsi3_carryin_compare_const0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[50],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1220 */
  {
    "*subsi3_carryin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1237 */
  {
    "*rsbsi3_carryin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1302 */
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[54],
    3,
    3,
    0,
    3,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1328 */
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1353 */
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1380 */
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1407 */
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1437 */
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[57],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1489 */
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_43 },
#else
    { 0, output_43, 0 },
#endif
    { 0 },
    &operand_data[60],
    3,
    3,
    0,
    9,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1532 */
  {
    "subsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_44 },
#else
    { 0, output_44, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_compare0 },
    &operand_data[63],
    3,
    3,
    2,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1549 */
  {
    "subsi3_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_45 },
#else
    { 0, output_45, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_compare },
    &operand_data[63],
    3,
    3,
    2,
    3,
    2
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1606 */
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[66],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1616 */
  {
    "*arm_mulsi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[69],
    3,
    3,
    0,
    3,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1629 */
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[66],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1643 */
  {
    "*mulsi3_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1657 */
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[72],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1670 */
  {
    "*mulsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[75],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1685 */
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[78],
    4,
    4,
    0,
    4,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1697 */
  {
    "*mulsi3addsi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[82],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1709 */
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mlas%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[78],
    4,
    4,
    3,
    4,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1726 */
  {
    "*mulsi3addsi_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mlas%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[82],
    4,
    4,
    3,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1743 */
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mlas%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[86],
    4,
    4,
    0,
    4,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1758 */
  {
    "*mulsi3addsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mlas%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[90],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1773 */
  {
    "*mulsi3subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mls%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[82],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1795 */
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[94],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1808 */
  {
    "*mulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[98],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1836 */
  {
    "*mulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[102],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1847 */
  {
    "*mulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[57],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1867 */
  {
    "*umulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[102],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1878 */
  {
    "*umulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[57],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1899 */
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[94],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1912 */
  {
    "*umulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[98],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1939 */
  {
    "*smulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[105],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1954 */
  {
    "*smulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1983 */
  {
    "*umulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[105],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:1998 */
  {
    "*umulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2013 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhisi3 },
    &operand_data[113],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2025 */
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[116],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2038 */
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[119],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2051 */
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2065 */
  {
    "maddhisi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhisi4 },
    &operand_data[122],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2079 */
  {
    "*maddhisi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[126],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2093 */
  {
    "*maddhisi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatt%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[82],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2108 */
  {
    "maddhidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhidi4 },
    &operand_data[130],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2122 */
  {
    "*maddhidi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[134],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2137 */
  {
    "*maddhidi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltt%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[138],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2297 */
  {
    "*anddi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_81 },
#else
    { 0, 0, output_81 },
#endif
    { 0 },
    &operand_data[142],
    3,
    3,
    0,
    8,
    3
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2343 */
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2365 */
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../../../../../../work-shared/gcc-9.2.0-r0/gcc-9.2.0/gcc/config/arm/arm.md:2461 */
  {
    "*arm_andsi3_insn",
#else
};