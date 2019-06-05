/////////////////////////////////////////////////////////////////////////////
// Name:        smufl.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// NOTE: this file was generated by the ./fonts/generate-h.xsl script and
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_SMUFL_H__
#define __VRV_SMUFL_H__

//----------------------------------------------------------------------------

namespace vrv {

//----------------------------------------------------------------------------
// SMUFL glyphs available by default in Verovio
//----------------------------------------------------------------------------

enum {
    SMUFL_E003_bracketTop = 0xE003,
    SMUFL_E004_bracketBottom = 0xE004,
    SMUFL_E045_dalSegno = 0xE045,
    SMUFL_E046_daCapo = 0xE046,
    SMUFL_E047_segno = 0xE047,
    SMUFL_E048_coda = 0xE048,
    SMUFL_E04B_segnoSerpent2 = 0xE04B,
    SMUFL_E050_gClef = 0xE050,
    SMUFL_E051_gClef15mb = 0xE051,
    SMUFL_E052_gClef8vb = 0xE052,
    SMUFL_E053_gClef8va = 0xE053,
    SMUFL_E054_gClef15ma = 0xE054,
    SMUFL_E05C_cClef = 0xE05C,
    SMUFL_E05D_cClef8vb = 0xE05D,
    SMUFL_E062_fClef = 0xE062,
    SMUFL_E063_fClef15mb = 0xE063,
    SMUFL_E064_fClef8vb = 0xE064,
    SMUFL_E065_fClef8va = 0xE065,
    SMUFL_E066_fClef15ma = 0xE066,
    SMUFL_E069_unpitchedPercussionClef1 = 0xE069,
    SMUFL_E06A_unpitchedPercussionClef2 = 0xE06A,
    SMUFL_E080_timeSig0 = 0xE080,
    SMUFL_E081_timeSig1 = 0xE081,
    SMUFL_E082_timeSig2 = 0xE082,
    SMUFL_E083_timeSig3 = 0xE083,
    SMUFL_E084_timeSig4 = 0xE084,
    SMUFL_E085_timeSig5 = 0xE085,
    SMUFL_E086_timeSig6 = 0xE086,
    SMUFL_E087_timeSig7 = 0xE087,
    SMUFL_E088_timeSig8 = 0xE088,
    SMUFL_E089_timeSig9 = 0xE089,
    SMUFL_E08A_timeSigCommon = 0xE08A,
    SMUFL_E08B_timeSigCutCommon = 0xE08B,
    SMUFL_E08C_timeSigPlus = 0xE08C,
    SMUFL_E08D_timeSigPlusSmall = 0xE08D,
    SMUFL_E0A2_noteheadWhole = 0xE0A2,
    SMUFL_E0A3_noteheadHalf = 0xE0A3,
    SMUFL_E0A4_noteheadBlack = 0xE0A4,
    SMUFL_E0FA_noteheadWholeFilled = 0xE0FA,
    SMUFL_E101_noteheadSlashHorizontalEnds = 0xE101,
    SMUFL_E220_tremolo1 = 0xE220,
    SMUFL_E221_tremolo2 = 0xE221,
    SMUFL_E222_tremolo3 = 0xE222,
    SMUFL_E223_tremolo4 = 0xE223,
    SMUFL_E224_tremolo5 = 0xE224,
    SMUFL_E240_flag8thUp = 0xE240,
    SMUFL_E241_flag8thDown = 0xE241,
    SMUFL_E242_flag16thUp = 0xE242,
    SMUFL_E243_flag16thDown = 0xE243,
    SMUFL_E244_flag32ndUp = 0xE244,
    SMUFL_E245_flag32ndDown = 0xE245,
    SMUFL_E246_flag64thUp = 0xE246,
    SMUFL_E247_flag64thDown = 0xE247,
    SMUFL_E248_flag128thUp = 0xE248,
    SMUFL_E249_flag128thDown = 0xE249,
    SMUFL_E24A_flag256thUp = 0xE24A,
    SMUFL_E24B_flag256thDown = 0xE24B,
    SMUFL_E260_accidentalFlat = 0xE260,
    SMUFL_E261_accidentalNatural = 0xE261,
    SMUFL_E262_accidentalSharp = 0xE262,
    SMUFL_E263_accidentalDoubleSharp = 0xE263,
    SMUFL_E264_accidentalDoubleFlat = 0xE264,
    SMUFL_E265_accidentalTripleSharp = 0xE265,
    SMUFL_E266_accidentalTripleFlat = 0xE266,
    SMUFL_E267_accidentalNaturalFlat = 0xE267,
    SMUFL_E268_accidentalNaturalSharp = 0xE268,
    SMUFL_E269_accidentalSharpSharp = 0xE269,
    SMUFL_E26A_accidentalParensLeft = 0xE26A,
    SMUFL_E26B_accidentalParensRight = 0xE26B,
    SMUFL_E26C_accidentalBracketLeft = 0xE26C,
    SMUFL_E26D_accidentalBracketRight = 0xE26D,
    SMUFL_E270_accidentalQuarterToneFlatArrowUp = 0xE270,
    SMUFL_E271_accidentalThreeQuarterTonesFlatArrowDown = 0xE271,
    SMUFL_E272_accidentalQuarterToneSharpNaturalArrowUp = 0xE272,
    SMUFL_E273_accidentalQuarterToneFlatNaturalArrowDown = 0xE273,
    SMUFL_E274_accidentalThreeQuarterTonesSharpArrowUp = 0xE274,
    SMUFL_E275_accidentalQuarterToneSharpArrowDown = 0xE275,
    SMUFL_E280_accidentalQuarterToneFlatStein = 0xE280,
    SMUFL_E281_accidentalThreeQuarterTonesFlatZimmermann = 0xE281,
    SMUFL_E282_accidentalQuarterToneSharpStein = 0xE282,
    SMUFL_E283_accidentalThreeQuarterTonesSharpStein = 0xE283,
    SMUFL_E4A0_articAccentAbove = 0xE4A0,
    SMUFL_E4A1_articAccentBelow = 0xE4A1,
    SMUFL_E4A2_articStaccatoAbove = 0xE4A2,
    SMUFL_E4A3_articStaccatoBelow = 0xE4A3,
    SMUFL_E4A4_articTenutoAbove = 0xE4A4,
    SMUFL_E4A5_articTenutoBelow = 0xE4A5,
    SMUFL_E4A6_articStaccatissimoAbove = 0xE4A6,
    SMUFL_E4A7_articStaccatissimoBelow = 0xE4A7,
    SMUFL_E4A8_articStaccatissimoWedgeAbove = 0xE4A8,
    SMUFL_E4A9_articStaccatissimoWedgeBelow = 0xE4A9,
    SMUFL_E4AA_articStaccatissimoStrokeAbove = 0xE4AA,
    SMUFL_E4AB_articStaccatissimoStrokeBelow = 0xE4AB,
    SMUFL_E4AC_articMarcatoAbove = 0xE4AC,
    SMUFL_E4AD_articMarcatoBelow = 0xE4AD,
    SMUFL_E4AE_articMarcatoStaccatoAbove = 0xE4AE,
    SMUFL_E4AF_articMarcatoStaccatoBelow = 0xE4AF,
    SMUFL_E4B0_articAccentStaccatoAbove = 0xE4B0,
    SMUFL_E4B1_articAccentStaccatoBelow = 0xE4B1,
    SMUFL_E4B2_articTenutoStaccatoAbove = 0xE4B2,
    SMUFL_E4B3_articTenutoStaccatoBelow = 0xE4B3,
    SMUFL_E4B4_articTenutoAccentAbove = 0xE4B4,
    SMUFL_E4B5_articTenutoAccentBelow = 0xE4B5,
    SMUFL_E4B6_articStressAbove = 0xE4B6,
    SMUFL_E4B7_articStressBelow = 0xE4B7,
    SMUFL_E4B8_articUnstressAbove = 0xE4B8,
    SMUFL_E4B9_articUnstressBelow = 0xE4B9,
    SMUFL_E4BA_articLaissezVibrerAbove = 0xE4BA,
    SMUFL_E4BB_articLaissezVibrerBelow = 0xE4BB,
    SMUFL_E4BC_articMarcatoTenutoAbove = 0xE4BC,
    SMUFL_E4BD_articMarcatoTenutoBelow = 0xE4BD,
    SMUFL_E4C0_fermataAbove = 0xE4C0,
    SMUFL_E4C1_fermataBelow = 0xE4C1,
    SMUFL_E4C2_fermataVeryShortAbove = 0xE4C2,
    SMUFL_E4C3_fermataVeryShortBelow = 0xE4C3,
    SMUFL_E4C4_fermataShortAbove = 0xE4C4,
    SMUFL_E4C5_fermataShortBelow = 0xE4C5,
    SMUFL_E4C6_fermataLongAbove = 0xE4C6,
    SMUFL_E4C7_fermataLongBelow = 0xE4C7,
    SMUFL_E4C8_fermataVeryLongAbove = 0xE4C8,
    SMUFL_E4C9_fermataVeryLongBelow = 0xE4C9,
    SMUFL_E4CE_breathMarkComma = 0xE4CE,
    SMUFL_E4E5_restQuarter = 0xE4E5,
    SMUFL_E4E6_rest8th = 0xE4E6,
    SMUFL_E4E7_rest16th = 0xE4E7,
    SMUFL_E4E8_rest32nd = 0xE4E8,
    SMUFL_E4E9_rest64th = 0xE4E9,
    SMUFL_E4EA_rest128th = 0xE4EA,
    SMUFL_E4EB_rest256th = 0xE4EB,
    SMUFL_E500_repeat1Bar = 0xE500,
    SMUFL_E501_repeat2Bars = 0xE501,
    SMUFL_E502_repeat4Bars = 0xE502,
    SMUFL_E510_ottava = 0xE510,
    SMUFL_E511_ottavaAlta = 0xE511,
    SMUFL_E512_ottavaBassa = 0xE512,
    SMUFL_E513_ottavaBassaBa = 0xE513,
    SMUFL_E514_quindicesima = 0xE514,
    SMUFL_E515_quindicesimaAlta = 0xE515,
    SMUFL_E516_quindicesimaBassa = 0xE516,
    SMUFL_E517_ventiduesima = 0xE517,
    SMUFL_E518_ventiduesimaAlta = 0xE518,
    SMUFL_E519_ventiduesimaBassa = 0xE519,
    SMUFL_E520_dynamicPiano = 0xE520,
    SMUFL_E521_dynamicMezzo = 0xE521,
    SMUFL_E522_dynamicForte = 0xE522,
    SMUFL_E523_dynamicRinforzando = 0xE523,
    SMUFL_E524_dynamicSforzando = 0xE524,
    SMUFL_E525_dynamicZ = 0xE525,
    SMUFL_E526_dynamicNiente = 0xE526,
    SMUFL_E527_dynamicPPPPPP = 0xE527,
    SMUFL_E528_dynamicPPPPP = 0xE528,
    SMUFL_E529_dynamicPPPP = 0xE529,
    SMUFL_E52A_dynamicPPP = 0xE52A,
    SMUFL_E52B_dynamicPP = 0xE52B,
    SMUFL_E52C_dynamicMP = 0xE52C,
    SMUFL_E52D_dynamicMF = 0xE52D,
    SMUFL_E52E_dynamicPF = 0xE52E,
    SMUFL_E52F_dynamicFF = 0xE52F,
    SMUFL_E530_dynamicFFF = 0xE530,
    SMUFL_E531_dynamicFFFF = 0xE531,
    SMUFL_E532_dynamicFFFFF = 0xE532,
    SMUFL_E533_dynamicFFFFFF = 0xE533,
    SMUFL_E534_dynamicFortePiano = 0xE534,
    SMUFL_E535_dynamicForzando = 0xE535,
    SMUFL_E536_dynamicSforzando1 = 0xE536,
    SMUFL_E537_dynamicSforzandoPiano = 0xE537,
    SMUFL_E538_dynamicSforzandoPianissimo = 0xE538,
    SMUFL_E539_dynamicSforzato = 0xE539,
    SMUFL_E53A_dynamicSforzatoPiano = 0xE53A,
    SMUFL_E53B_dynamicSforzatoFF = 0xE53B,
    SMUFL_E53C_dynamicRinforzando1 = 0xE53C,
    SMUFL_E53D_dynamicRinforzando2 = 0xE53D,
    SMUFL_E566_ornamentTrill = 0xE566,
    SMUFL_E567_ornamentTurn = 0xE567,
    SMUFL_E568_ornamentTurnInverted = 0xE568,
    SMUFL_E56A_ornamentTurnUp = 0xE56A,
    SMUFL_E56B_ornamentTurnUpS = 0xE56B,
    SMUFL_E56C_ornamentMordent = 0xE56C,
    SMUFL_E56D_ornamentMordentInverted = 0xE56D,
    SMUFL_E56E_ornamentTremblement = 0xE56E,
    SMUFL_E59D_ornamentZigZagLineNoRightEnd = 0xE59D,
    SMUFL_E59E_ornamentZigZagLineWithRightEnd = 0xE59E,
    SMUFL_E610_stringsDownBow = 0xE610,
    SMUFL_E611_stringsDownBowTurned = 0xE611,
    SMUFL_E612_stringsUpBow = 0xE612,
    SMUFL_E613_stringsUpBowTurned = 0xE613,
    SMUFL_E614_stringsHarmonic = 0xE614,
    SMUFL_E650_keyboardPedalPed = 0xE650,
    SMUFL_E655_keyboardPedalUp = 0xE655,
    SMUFL_E659_keyboardPedalSost = 0xE659,
    SMUFL_E880_tuplet0 = 0xE880,
    SMUFL_E881_tuplet1 = 0xE881,
    SMUFL_E882_tuplet2 = 0xE882,
    SMUFL_E883_tuplet3 = 0xE883,
    SMUFL_E884_tuplet4 = 0xE884,
    SMUFL_E885_tuplet5 = 0xE885,
    SMUFL_E886_tuplet6 = 0xE886,
    SMUFL_E887_tuplet7 = 0xE887,
    SMUFL_E888_tuplet8 = 0xE888,
    SMUFL_E889_tuplet9 = 0xE889,
    SMUFL_E88A_tupletColon = 0xE88A,
    SMUFL_E901_mensuralGclefPetrucci = 0xE901,
    SMUFL_E902_chantFclef = 0xE902,
    SMUFL_E904_mensuralFclefPetrucci = 0xE904,
    SMUFL_E906_chantCclef = 0xE906,
    SMUFL_E909_mensuralCclefPetrucciPosMiddle = 0xE909,
    SMUFL_E910_mensuralProlation1 = 0xE910,
    SMUFL_E911_mensuralProlation2 = 0xE911,
    SMUFL_E912_mensuralProlation3 = 0xE912,
    SMUFL_E913_mensuralProlation4 = 0xE913,
    SMUFL_E914_mensuralProlation5 = 0xE914,
    SMUFL_E915_mensuralProlation6 = 0xE915,
    SMUFL_E916_mensuralProlation7 = 0xE916,
    SMUFL_E917_mensuralProlation8 = 0xE917,
    SMUFL_E918_mensuralProlation9 = 0xE918,
    SMUFL_E919_mensuralProlation10 = 0xE919,
    SMUFL_E91A_mensuralProlation11 = 0xE91A,
    SMUFL_E91B_mensuralProportionTempusPerfectum = 0xE91B,
    SMUFL_E91C_mensuralProportionProportioDupla1 = 0xE91C,
    SMUFL_E91D_mensuralProportionProportioDupla2 = 0xE91D,
    SMUFL_E91E_mensuralProportionProportioTripla = 0xE91E,
    SMUFL_E91F_mensuralProportionProportioQuadrupla = 0xE91F,
    SMUFL_E920_mensuralProlationCombiningDot = 0xE920,
    SMUFL_E921_mensuralProlationCombiningTwoDots = 0xE921,
    SMUFL_E922_mensuralProlationCombiningThreeDots = 0xE922,
    SMUFL_E923_mensuralProlationCombiningThreeDotsTri = 0xE923,
    SMUFL_E924_mensuralProlationCombiningDotVoid = 0xE924,
    SMUFL_E925_mensuralProlationCombiningStroke = 0xE925,
    SMUFL_E938_mensuralNoteheadSemibrevisBlack = 0xE938,
    SMUFL_E939_mensuralNoteheadSemibrevisVoid = 0xE939,
    SMUFL_E93C_mensuralNoteheadMinimaWhite = 0xE93C,
    SMUFL_E93D_mensuralNoteheadSemiminimaWhite = 0xE93D,
    SMUFL_E93E_mensuralCombStemUp = 0xE93E,
    SMUFL_E93F_mensuralCombStemDown = 0xE93F,
    SMUFL_E949_mensuralCombStemUpFlagSemiminima = 0xE949,
    SMUFL_E94A_mensuralCombStemDownFlagSemiminima = 0xE94A,
    SMUFL_E94B_mensuralCombStemUpFlagFusa = 0xE94B,
    SMUFL_E94C_mensuralCombStemDownFlagFusa = 0xE94C,
    SMUFL_E990_chantPunctum = 0xE990,
    SMUFL_E991_chantPunctumInclinatum = 0xE991,
    SMUFL_E996_chantPunctumVirga = 0xE996,
    SMUFL_E99B_chantQuilisma = 0xE99B,
    SMUFL_E99E_chantOriscusLiquescens = 0xE99E,
    SMUFL_E99F_chantStrophicus = 0xE99F,
    SMUFL_E9B4_chantEntryLineAsc2nd = 0xE9B4,
    SMUFL_E9B5_chantEntryLineAsc3rd = 0xE9B5,
    SMUFL_E9B6_chantEntryLineAsc4th = 0xE9B6,
    SMUFL_E9B7_chantEntryLineAsc5th = 0xE9B7,
    SMUFL_E9B9_chantLigaturaDesc2nd = 0xE9B9,
    SMUFL_E9BA_chantLigaturaDesc3rd = 0xE9BA,
    SMUFL_E9BB_chantLigaturaDesc4th = 0xE9BB,
    SMUFL_E9BC_chantLigaturaDesc5th = 0xE9BC,
    SMUFL_E9BD_chantConnectingLineAsc2nd = 0xE9BD,
    SMUFL_E9BE_chantConnectingLineAsc3rd = 0xE9BE,
    SMUFL_E9BF_chantConnectingLineAsc4th = 0xE9BF,
    SMUFL_E9C0_chantConnectingLineAsc5th = 0xE9C0,
    SMUFL_E9F0_mensuralRestMaxima = 0xE9F0,
    SMUFL_E9F1_mensuralRestLongaPerfecta = 0xE9F1,
    SMUFL_E9F2_mensuralRestLongaImperfecta = 0xE9F2,
    SMUFL_E9F3_mensuralRestBrevis = 0xE9F3,
    SMUFL_E9F4_mensuralRestSemibrevis = 0xE9F4,
    SMUFL_E9F5_mensuralRestMinima = 0xE9F5,
    SMUFL_E9F6_mensuralRestSemiminima = 0xE9F6,
    SMUFL_E9F7_mensuralRestFusa = 0xE9F7,
    SMUFL_E9F8_mensuralRestSemifusa = 0xE9F8,
    SMUFL_EA02_mensuralCustosUp = 0xEA02,
    SMUFL_EA06_chantCustosStemUpPosMiddle = 0xEA06,
    SMUFL_EAA9_wiggleArpeggiatoUp = 0xEAA9,
    SMUFL_EAAA_wiggleArpeggiatoDown = 0xEAAA,
    SMUFL_EAAD_wiggleArpeggiatoUpArrow = 0xEAAD,
    SMUFL_EAAE_wiggleArpeggiatoDownArrow = 0xEAAE,
    SMUFL_EBA7_luteDurationWhole = 0xEBA7,
    SMUFL_EBA8_luteDurationHalf = 0xEBA8,
    SMUFL_EBA9_luteDurationQuarter = 0xEBA9,
    SMUFL_EBAA_luteDuration8th = 0xEBAA,
    SMUFL_EBAB_luteDuration16th = 0xEBAB,
    SMUFL_EBAC_luteDuration32nd = 0xEBAC,
    SMUFL_EBE0_luteItalianFret0 = 0xEBE0,
    SMUFL_EBE1_luteItalianFret1 = 0xEBE1,
    SMUFL_EBE2_luteItalianFret2 = 0xEBE2,
    SMUFL_EBE3_luteItalianFret3 = 0xEBE3,
    SMUFL_EBE4_luteItalianFret4 = 0xEBE4,
    SMUFL_EBE5_luteItalianFret5 = 0xEBE5,
    SMUFL_EBE6_luteItalianFret6 = 0xEBE6,
    SMUFL_EBE7_luteItalianFret7 = 0xEBE7,
    SMUFL_EBE8_luteItalianFret8 = 0xEBE8,
    SMUFL_EBE9_luteItalianFret9 = 0xEBE9,
};

/** The number of glyphs for verification **/
#define SMUFL_COUNT 287

} // vrv namespace

#endif
