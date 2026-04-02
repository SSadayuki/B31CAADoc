#ifndef        CATListOfShort_h  
#define        CATListOfShort_h  

//  COPYRIGHT  DASSAULT  SYSTEMES  2010  

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */ 

#include "CATLISTV_Clean.h"

// List of methods to be used in this collection
#define CATLISTV_RemoveAll
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_InsertAt
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveValue
#define CATLISTV_Append

#include  <CATGMModelInterfaces.h>
#undef  CATCOLLEC_ExportedBy
#define  CATCOLLEC_ExportedBy  ExportedByCATGMModelInterfaces

#include "CATLISTV_Declare.h"

/** 
 * Defines the collection class CATListOfShort.
 * The methods below are available:
 * <ul>
 * <li>RemoveAll
 * <li>Locate
 * <li>InsertAt
 * <li>RemovePosition
 * <li>RemoveValue
 * <li>Append
 * <li>Size
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia. 
 */
#include  "CATLISTV_Declare.h"  
CATLISTV_DECLARE_TN(short,  Short)  
typedef  CATListValShort  CATListOfShort;  

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy

#include "CATIAV5Level.h"
#ifndef CATIAR212
class CATCGMOutput;
/**
 * @nodoc
 * Writes the tags of the cell manifolds of the list.
 * @param iWhereToWrite
 * The output.
 * @param  iToWrite
 * The list to dump.
 */
ExportedByCATGMModelInterfaces CATCGMOutput& operator<<(CATCGMOutput& iWhereToWrite, const CATListOfShort& iToWrite);
#endif 

#endif  //  CATListOfShort_h  

