/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Patch fallback case to mov w0, #1 rather than retrieving settings flag. */
constexpr inline const EmbeddedPatchEntry AmsProdinfoBlankerFix_17_0_0[] = {
    { 0x1334A8, "\xE2\x03\x1F\xAA", 4 },
};

constexpr inline const EmbeddedPatchEntry AmsProdinfoBlankerFix_18_0_0[] = {
    { 0x139F48, "\xE2\x03\x1F\xAA", 4 },
};

constexpr inline const EmbeddedPatchEntry AmsProdinfoBlankerFix_19_0_0[] = {
    { 0x1386A8, "\xE2\x03\x1F\xAA", 4 },
};

constexpr inline const EmbeddedPatchEntry AmsProdinfoBlankerFix_20_0_0[] = {
    { 0x1909A8, "\xE2\x03\x1F\xAA", 4 },
};

constexpr inline const EmbeddedPatchEntry AmsProdinfoBlankerFix_20_1_0[] = {
    { 0x190DF8, "\xE2\x03\x1F\xAA", 4 },
};

constexpr inline const EmbeddedPatchEntry AmsProdinfoBlankerFix_20_2_0[] = {
    { 0x190DF8, "\xE2\x03\x1F\xAA", 4 },
};

constexpr inline const EmbeddedPatch AmsProdinfoBlankerFix[] = {
    { ParseModuleId("C14BC0AD5027F6B6B49A5A6B2D52D5E8306EE1D2"), util::size(AmsProdinfoBlankerFix_17_0_0), AmsProdinfoBlankerFix_17_0_0 }, /* 17.0.0-17.0.1 */
    { ParseModuleId("DAEEEF46027BA6E83688C05C396E6C6B17F29001"), util::size(AmsProdinfoBlankerFix_18_0_0), AmsProdinfoBlankerFix_18_0_0 }, /* 18.0.0-18.1.0 */
    { ParseModuleId("C54A1B3EB06FF3F5DCCBAC1AEFD5CA5459A2A6E6"), util::size(AmsProdinfoBlankerFix_19_0_0), AmsProdinfoBlankerFix_19_0_0 }, /* 19.0.0-19.0.1 */
    { ParseModuleId("9A576C1A8BE653CD24C88A8C239DADA3E1EF73F8"), util::size(AmsProdinfoBlankerFix_20_0_0), AmsProdinfoBlankerFix_20_0_0 }, /* 20.0.0-20.0.1 */
    { ParseModuleId("CC269DEA7E3AE16FAA39215F5A1CEF5C82FA1C00"), util::size(AmsProdinfoBlankerFix_20_1_0), AmsProdinfoBlankerFix_20_1_0 }, /* 20.1.0-20.1.5 */
    { ParseModuleId("412CA954A47280118C72280EFAEAC33F490793B6"), util::size(AmsProdinfoBlankerFix_20_2_0), AmsProdinfoBlankerFix_20_2_0 }, /* 20.2.0 */
};