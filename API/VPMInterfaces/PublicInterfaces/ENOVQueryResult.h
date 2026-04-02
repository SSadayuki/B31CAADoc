#ifndef ENOVQueryResult_H
#define ENOVQueryResult_H
// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

/**  est-ce que VPMInterfaces est la bonne place ??? */ 


#include "CATListPV.h"
#include "CATListOfInt.h"

#include "IUnknown.h"

class CATUnicodeString;

#include "CATListOfCATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
#include "CATAssert.h"
#include "ENOVQObjectIdentity.h"



class ExportedByGUIDVPMInterfaces ENOVQueryResult
 {
private:
   
   //This is to prevent the use of  Copy Constructor and Assignment Operator
   ENOVQueryResult(const ENOVQueryResult &);
   ENOVQueryResult& operator=(const ENOVQueryResult &);
       
  
public:
   /**
    * @nodoc
    */
   ENOVQueryResult( const CATListOfCATUnicodeString & iListOfPathExpressionToValuate );
   /**
    * @nodoc
    */
  ~ENOVQueryResult();
    
   /**
    * @nodoc
    * check if a returned PathExpression is unset.
    * @param iPathExpressionPosition [in]
    * the position in _ListOfPathExpressionToValuate of the path expression
    * @param iValuePosition [in]
    * the position of the value in the ordered result.
    * It should be between 1 and _Max_Size
    * @param oStatusValue [out]
    * 1 if it is UNSET , if it is SET.
    * @return
    * An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd></dd>
    *     <dt>E_FAIL</dt>
    *     <dd>invalid parameter</dd>
    *   </dl>		
    */ 
   HRESULT isUNSET(int   iPathExpressionPosition  ,
                   int   iValuePosition           ,
                   int & oStatusValue             );
    
   CATListOfInt                 _PathExpressionTypes          ;
   CATListOfCATUnicodeString    _ListOfPathExpressionToValuate;
   CATListOfENOVQObjectIdentity _ListRootIdentifiers          ;
   CATRawCollPV *               _ValuesList                   ;

   /**
    * @nodoc
    */
   int **   _ValuesStatus;
   /**
    * @nodoc
    */
   int      _Max_Size;

 public:
   /**
    * @nodoc
    */
   void RemoveQId( const ENOVQObjectIdentity & QId );

 };


enum  ENOVPEType
{
     PE_UNKNOWN                      ,
     PE_BOOLEAN                      ,
     PE_INTEGER                      ,
     PE_REAL                         ,
     PE_STRING                       ,
     PE_BINARY                       ,
     PE_DATE                         ,
     PE_OBJECT                       ,
     PE_AGGR_BOOLEAN                 ,
     PE_AGGR_INTEGER                 ,
     PE_AGGR_REAL                    ,
     PE_AGGR_STRING                  ,
     PE_AGGR_BINARY                  ,
     PE_AGGR_DATE                    ,
     PE_AGGR_OBJECT                   
} ;  



/*
This function do the same thing as the function intToIndex in
QueryManager/ProtectedInterfaces/BitMaskUtilities.
Need to redefine it here because could not prereq QM in VPMIInterfaces
It returns -1 if the given position is out of range [0;31]. 
*/


inline  int ExportedByGUIDVPMInterfaces  intToPosition(int iInt)
{
  switch(iInt)
   {
   case 0  : return 0x80000000;
   case 1  : return 0x40000000;
   case 2  : return 0x20000000;
   case 3  : return 0x10000000;
   case 4  : return 0x08000000;
   case 5  : return 0x04000000;
   case 6  : return 0x02000000;
   case 7  : return 0x01000000;
   case 8  : return 0x00800000;
   case 9  : return 0x00400000;
   case 10 : return 0x00200000;
   case 11 : return 0x00100000;
   case 12 : return 0x00080000;
   case 13 : return 0x00040000;
   case 14 : return 0x00020000;
   case 15 : return 0x00010000;
   case 16 : return 0x00008000;
   case 17 : return 0x00004000;
   case 18 : return 0x00002000;
   case 19 : return 0x00001000;
   case 20 : return 0x00000800;
   case 21 : return 0x00000400;
   case 22 : return 0x00000200;
   case 23 : return 0x00000100;
   case 24 : return 0x00000080;
   case 25 : return 0x00000040;
   case 26 : return 0x00000020;
   case 27 : return 0x00000010;
   case 28 : return 0x00000008;
   case 29 : return 0x00000004;
   case 30 : return 0x00000002;
   case 31 : return 0x00000001;
     // @anchor err_15 CATAssert ? { CATAssert(/*0<=iInt && */iInt<32); return 1U<<(31-iInt); }
   default : CATAssert(0) ;
   }
  return -1;
};




 
/**
 * @nodoc
 * RemoveAStatus:
 *  1- Removes the Status of the BIT positioned at iIndex;
 *     iIndex Must be between 1 and _Max_Size 
 *     (because it refers to Query Results Index )
 *  2- Shifts the following BITs by one slot (one BIT) to the Left
 *    
 */

HRESULT  ReorganizeBitSequence(int iIndex, int & iStatusArray_Size, int* & ioStatusArray);



     
   /**
    * @nodoc
    * returns an int corresponding to a specific BITs sequence 
    * iPos MUST be between 0 and 31
    * The trown int has 1 set as BIT from pos 0 to the given iPos
    * Sample : 
    * The 4th element corresponds to the element that has 
    * all its BITS from 0 to 4 position set to 1 (there are 5 bits set to 1)
    * |1111100000...0 |
    * 0   
    */
   
 unsigned  int getLeft(int iPos);
   
   /**
    * @nodoc
    * returns the iPos Elements of _Right
    * iPos MUST be between 0 and 31
    * The 5th element corresponds to the element that has 
    * all its BITS from 31 to 27 position set to 1 (there are 5 bits set to 1)
    * | 00000...011111 |
    * 0
    * We count the Bit from the postion 31
    */   
   
 unsigned  int getRight(int iPos);










#endif



