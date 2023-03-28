/*******************************************************************************
 * Copyright (c) 2019.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 * The Eclipse Public License is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 * You may elect to redistribute this code under either of these licenses.
 *
 *******************************************************************************/

/*
 * This module provides CPU specific ELF definitions for riscv64.
 */

#define R_RISCV_NONE    0
#define R_RISCV_32      1
#define R_RISCV_64      2
#define R_RISCV_ADD8    33
#define R_RISCV_ADD16   34
#define R_RISCV_ADD32   35
#define R_RISCV_ADD64   36
#define R_RISCV_SUB8    37
#define R_RISCV_SUB16   38
#define R_RISCV_SUB32   39
#define R_RISCV_SUB64   40

static void elf_riscv_check_size(unsigned size) {
    if (data_size < size) str_exception(ERR_INV_FORMAT, "Invalid relocation record");
}

static void elf_relocate(void) {
    if (relocs->type == SHT_REL && reloc_type != R_RISCV_NONE) {
        if (section->file->type != ET_REL) str_exception(ERR_INV_FORMAT, "Invalid relocation record");
        assert(reloc_addend == 0);
        switch (reloc_type) {
        case R_RISCV_32:
            elf_riscv_check_size(4);
            reloc_addend = *(U4_T *)data_buf;
            break;
        case R_RISCV_64:
            elf_riscv_check_size(8);
            reloc_addend = *(U8_T *)data_buf;
            break;
        default:
            str_exception(ERR_INV_FORMAT, "Unsupported relocation type");
        }
    }
    switch (reloc_type) {
    case R_RISCV_NONE:
        *destination_section = NULL;
        break;
    case R_RISCV_32:
        elf_riscv_check_size(4);
        *(U4_T *)data_buf = (U4_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_64:
        elf_riscv_check_size(8);
        *(U8_T *)data_buf = (U8_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_ADD8:
        elf_riscv_check_size(1);
        *(U1_T *)data_buf += (U1_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_ADD16:
        elf_riscv_check_size(2);
        *(U2_T *)data_buf += (U2_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_ADD32:
        elf_riscv_check_size(4);
        *(U4_T *)data_buf += (U4_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_ADD64:
        elf_riscv_check_size(8);
        *(U8_T *)data_buf += (U8_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_SUB8:
        elf_riscv_check_size(1);
        *(U1_T *)data_buf -= (U1_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_SUB16:
        elf_riscv_check_size(2);
        *(U2_T *)data_buf -= (U2_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_SUB32:
        elf_riscv_check_size(4);
        *(U4_T *)data_buf -= (U4_T)(sym_value + reloc_addend);
        break;
    case R_RISCV_SUB64:
        elf_riscv_check_size(8);
        *(U8_T *)data_buf -= (U8_T)(sym_value + reloc_addend);
        break;
    default:
        str_exception(ERR_INV_FORMAT, "Unsupported relocation type");
    }
}
