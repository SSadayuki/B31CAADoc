// COPYRIGHT DASSAULT SYSTEMES 2003
/**
* @CAA2Level L1
* @CAA2Usage U5
*/
#ifndef CATIV4DataSaver_H
#define CATIV4DataSaver_H
#include "V5ToV4Tools.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByV5ToV4Tools IID IID_CATIV4DataSaver;
#else
extern "C" const IID IID_CATIV4DataSaver;
#endif

/** 
 * Class to translate Spline and Spline2 Curves.
 * 
 */

class ExportedByV5ToV4Tools CATIV4DataSaver: public CATBaseUnknown
{
  CATDeclareInterface;
  public:
  /**
    * Retrieves the V4 data.
	* @param oV4Type [out]
	*   The CATGeo V4 type of the object to create
	* @param oV4Block [out,delete]
	*   The CATGeo V4 description block 
	*   <br><b>This table is allocated by using new[].</b>
	* @return 
	* <ul>
	* <li> <tt>S_OK</tt>: The query succeeds</li>
	* <li> <tt>NO_INTERFACE</tt>: The interface does not exist</li>
	* <li> <tt>E_OUTOFMEMORY</tt>: Memory allocation fails</li>
	* <li> <tt>E_UNEXPECTED</tt>: The query fails for another reason</li>
	* </ul>
    */
   virtual HRESULT GetData(int & oV4Type, double * & oV4Block) = 0;
  /**
    * Retrieves the user intent.
	* @param oIntent [out]
	*   <br><b>legal values</b> 
	*   <ul><li>0 do not compute the V4 data</li>
	*       <li>1 do the standard process</li>
	*       <li>2 let the customer do</li>
	*   </ul>
	* @return 
	* <ul>
	* <li> <tt>S_OK</tt>: The query succeeds</li>
	* <li> <tt>NO_INTERFACE</tt>: The interface does not exist</li>
	* </ul>
    */
   virtual HRESULT GetUserIntent(int & oIntent) = 0;
  /**
    * Retrieves the spline constraint additional data.
	* @param oV4SplineType [out]
	*   <br><b>legal values</b> 
	*   <ul><li>0 it is not a spline curve</li>
	*       <li>1 it is a spline curve</li>
	*       <li>2 it is a spline2 curve</li>
	*   </ul>
	* @param oV4BlockLength [out]
	*   The V4 number of doubles of the additional description to create 
	* @param oV4BlockData [out,delete]
	*   The V4 additional description block 
	*   <br><b>This table is allocated by using new[].</b>
	* @return
	* <ul>
	* <li> <tt>S_OK</tt>: The query succeeds</li>
	* <li> <tt>NO_INTERFACE</tt>: The interface does not exist</li>
	* <li> <tt>E_OUTOFMEMORY</tt>: Memory allocation fails</li>
	* <li> <tt>E_UNEXPECTED</tt>: The query fails for another reason</li>
	* </ul>
    */
   virtual HRESULT GetSplineConstraintData(int & oV4SplineType, int & oV4BlockLength, double * & oV4BlockData) = 0;
};
CATDeclareHandler( CATIV4DataSaver , CATBaseUnknown ) ;
#endif
