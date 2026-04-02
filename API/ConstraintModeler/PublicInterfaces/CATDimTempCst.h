#ifndef CATDimTempCst_h
#define CATDimTempCst_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATCstComputerForwards.h"
#include "CATCORBABoolean.h"
#include "CATBoolean.h"
#include "CATCstDefs.h"
#include "CATBaseUnknown.h"
#include "MF0DimInt.h"
#include "CATUnicodeString.h"


/**
 * @deprecated V5R15
 * do not use
 * Class for temporary 3D constraint visualization.
 * <b>Role</b>: It is an adapter. This class contains all the necessary information allowing 
 * to consider parameters as constraints.
 */
class ExportedByMF0DimInt  CATDimTempCst
{
public:
/** 
 * Constructs a <tt>CATDimTempCst</tt>.
 * @param iFamily
 * Initialized according to the parameter.
 * @param iValue
 * Initialized according to the parameter.
 * @param iDriven
 * Boolean.
 * @param valid
 * Boolean.
 */  
  CATDimTempCst(CATCstType iFamily,const CATBaseUnknown_var& iValue,CATBoolean iDriven= TRUE,CATBoolean iValid = TRUE);
/** 
 * Copy constructor.
 */  
  CATDimTempCst();
/** 
 * Copy constructor.
 */ 
  CATDimTempCst(const CATDimTempCst& src);

/**
* Destructor
*/
  virtual ~CATDimTempCst();
/**
 * Type of the pseudo constraint.
 */
  CATCstType family;
/** 
 * @nodoc 
 */
  CATCstMode mode;
/**
 * Default status of <tt>CstStatus_TRUE</tt>.
 */
  CATCstStatus result;
/**
 * First value.
 */
  CATBaseUnknown_var value;
/**
 * Second value (chamfer).
 */
  CATBaseUnknown_var value2;
/**
 *  By default equal to False.
 *  If True it means radius / half angle / half length.
 */
  CATBoolean    half_value;
/**
 * @nodoc
 * Specific for the hole.
 */
  CATBoolean    locked_value;
/**
 * @nodoc
 * Specific for the hole.
 */
  void SetLocked( CATBoolean locked );
/**
 * Sets angular sector.
 * <pre>
 *      pt2  <
 *  1  / 0    )
 * ---/--- pt1
 *  2/   3
 * </pre>
 * @param iSector 
 * A [0..7] vector.
 *
 * see also GetSector() for further information.
 */
  void SetSector( int iSector);
/** 
 * @nodoc 
 */
  void SetPreview( int preview);
/**
 * Gets angular sector.
 * <pre>
 *      pt2  <
 *  1  / 0    )
 * ---/--- pt1
 *  2/   3
 * </pre>
 * <dl>
 * <dt>Value<dd>Description
 * <dt>0*0<dd> sectors 0/2 : ang(pt1,pt2,+) 
 * <dt>0*1<dd> sectors 1/3 : pi-ang(pt1,pt2,+)
 * <dt>1*0<dd> sectors 4/6 : 2*pi-ang(pt1,pt2,+)
 * <dt>1*1<dd> sectors 5/7 : pi+ang(pt1,pt2,+)</dl>
 * @return 
 * A [0..7] vector. The sector's value is stored on 3 bits:
 * <br>#define CATIDimCstCOMP180   0x1
 * <br>#define CATIDimCstOPPOSITE  0x2
 * <br>#define CATIDimCstCOMP360   0x4
 * <br>First bit activated indicates the complementary to pi.
 * Second bit activated indicates the opposite side for the same value.
 * Third bit activated indicates the complementary to 2*pi.
 */
  int GetSector() const;
/** 
 * @nodoc 
 */
  int GetPreview() const;

  ///////////////// Customization MFParameter /////////////////////
/**
* @nodoc
*    return code : 
*       - E_FAIL, if the prefix has never been customized
*       - S_OK, if the prefix has been customized at least once
*
*   Output : oCustoPrefix, the current prefix customization.
*/
  HRESULT GetCalloutPrefix(CATUnicodeString& oCustoPrefix);

/**
* @nodoc
*  Input : iCustoPrefix, the prefix you want for your parameter.
*  If you use SetCalloutPrefix, there will be no suffix on your parameter 
*  (i.e. if there has been a customization for the suffix, we empty it ).
*/
  void SetCalloutPrefix(const CATUnicodeString* iCustoPrefix);

/**
* @nodoc
*  return code : 
*    - E_FAIL, if the suffix has never been customized
*    - S_OK, if the suffix has been customized at least once
*
*    Output : oCustoSuffix, the current suffix customization.
*/
  HRESULT GetCalloutSuffix(CATUnicodeString& oCustoSuffix);

/**
* @nodoc
*  Input : iCustoSuffix, the suffix you want for your parameter.
*  If you use SetCalloutSuffix, there will be no prefix on your parameter 
*  (i.e. if there has been a customization for the prefix, we empty it ).
*/
  void SetCalloutSuffix(const CATUnicodeString* iCustoSuffix);

/**
* @nodoc
*  return code :
*      - S_OK if one of the methods SetCalloutXXX has been called at least once.
*      - E_FAIL otherwise.
*   Outputs :
*      The prefix and the suffix customization.
*/
  HRESULT GetCalloutCusto(CATUnicodeString& oCustoPrefix, CATUnicodeString& oCustoSuffix);

/**
* @nodoc
*  Inputs : The prefix and the suffix you want.
*/
  void SetCalloutCusto(const CATUnicodeString* iCustoPrefix, const CATUnicodeString* iCustoSuffix);

/**
* @nodoc
*  return code :
      - TRUE if one of the methods SetCalloutXXX has been called at least once.
      - FALSE otherwise.
*/
  CATBoolean HasBeenCustomized();

  //////////////////// End of Customization MFParameter /////////////////////

private:
  //////////////////////// Customization MFParameter ////////////////////////
  CATUnicodeString _custoPrefix;
  CATUnicodeString _custoSuffix;
  unsigned int _prefixIsCusto:1;// To know if the prefix has been customized
  unsigned int _suffixIsCusto:1;// To know if the suffix has been customized
  //////////////////// End of Customization MFParameter /////////////////////
  unsigned int sector:2;
  unsigned int preview:1;
};
#endif


