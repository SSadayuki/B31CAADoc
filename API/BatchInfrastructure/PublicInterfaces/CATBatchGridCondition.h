//=======================================================================
// COPYRIGHT DASSAULT SYSTEMES 2006						                
//=======================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */
 
 
#ifndef _CATBatchGridCondition_H
#define _CATBatchGridCondition_H

#include "CATBaseUnknown.h"
#include "CATBatCAAGrid.h"
#include "CATErrorDef.h"
#include "CATUnicodeString.h"

class ExportedByCATBatCAAGrid CATBatchGridCondition : public CATBaseUnknown
{
   CATDeclareClass;

   public :

   CATBatchGridCondition ();
   virtual ~CATBatchGridCondition () ;
   
   virtual HRESULT Build(CATUnicodeString& iCond);
   
   virtual HRESULT GetExpression(CATUnicodeString& oExp);
      

	 

};


#endif

