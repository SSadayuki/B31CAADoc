// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenAxisLineSR_H
#define CATIDftGenAxisLineSR_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "IUnknown.h"
#include "CATListOfDouble.h"

class CATMathLine;
class CATIDftGenRequest;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenAxisLineSR ;
#else
extern "C" const IID IID_CATIDftGenAxisLineSR;
#endif

/**
 * Definition of interface which describes specific behaviors of axis line 
 * symbolic representations (SR).
 * Axis line symbolic representation is returned by feature (e.g. Hole) when 
 * called on CATIDftGenRequest::GetSymbolicRep. Symbolic rep must be created by 
 * feature using CATIDftGenSRFactory provided by the caller.
 * SR is used as a receptacle to transport informations computed by feature to
 * generative drafting process.
 * @see CATIDftGenRequest
 * @see CATIDftGenSRFactory
 */
class ExportedByDraftingItfCPP CATIDftGenAxisLineSR: public IUnknown
{
  public:

    /**
     * Sets the object to point
     *   @param iObjRef
     *     Object to be pointed.
     */
    
    virtual HRESULT SetObject(CATIDftGenRequest *iObjRef)=0;
    
    /**
     * Gets the pointed object
     *   @param oObjRef
     *     Pointed object.
     */
    virtual HRESULT GetObject(CATIDftGenRequest **oObjRef)=0;

    /**
     * Sets the axis of pointed object.
     *   @param iLine
     *      Axis in 3D model.
     */

    virtual HRESULT SetLine(CATMathLine *iLine)=0;

    /**
     * Gets the axis.
     *   @param oLine
     *     Axis to project in view.
     */
    virtual HRESULT GetLine(CATMathLine **oLine)=0;

    /**
     * Sets the 2D axis color.
     */
    virtual void SetColor(int iRed,int iGreen,int iBlue)=0;
    
    /**
    * Sets the 2D axis line type.
    */
    virtual void SetLineType(int iLineType)=0;
    
    /**
    * Sets the 2D axis thickness.
    */
    virtual void SetThickness(int iThick)=0;
	/**
	* Sets over run values.
	* @param <tt>CATListOfDouble& iOverruns</tt>
	* [in] Over run values.
	* @return
	* A <tt>HRESULT</tt>
	* <dl>
	* <dt> <tt>S_OK</tt>           <dd> Everything OK
	* <dt> <tt>E_FAIL</tt>			<dd> Otherwise
	* <dt> <tt>E_INVALIDARG</tt>	<dd> if input is not a four element list
	* </dl>
	* <br>Remark : It must be a 2 element list.
	*/
	virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns)=0;
};
#endif
