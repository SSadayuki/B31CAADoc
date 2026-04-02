// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef SdaiAggMacro_H
#define SdaiAggMacro_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAggMacro
// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
// Auteurs :  
//      PYR  
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//      MODIFICATION    :   1
//      DATE            :   fevrier 96
//      AUTEUR          :   BMX
//      NATURE          :   general declarations for all Sdai programs  
//      DESCRIPTION     :   
//
// ------------------------------------------------------------------------------------------------
// 
//

//--------------------------------------------------------------------------------
// Aggregate and Iterator data types
//--------------------------------------------------------------------------------
// Naming macros
//
// #define SDAIAGGR(agg, ele)  agg##_Of_##ele 
// modified 031096
/** @nodoc */ 
#define SDAIAGGR(agg, ele)  agg##ClassOf##ele 
/** @nodoc */
#define SDAIAGGRH(agg, ele) SDAIAGGR(agg,ele) *
/** @nodoc */
#define SDAIITER(elemtyp)   SdaiIterator_Of_##elemtyp

#endif
