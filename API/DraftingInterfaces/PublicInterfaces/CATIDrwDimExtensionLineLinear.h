#ifndef CATIDrwDimExtensionLineLinear_H
#define CATIDrwDimExtensionLineLinear_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
class CATIDrwDimFunnel_var;
#include "CATBooleanDef.h"


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimExtensionLineLinear ;
#else
extern "C" const IID IID_CATIDrwDimExtensionLineLinear ;
#endif

/**
 * Manages the dimension linear extension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimExtensionLineLinear : public CATBaseUnknown
{
  CATDeclareInterface;

   public:
    /**
     * Gets funnel characteristics on an extension line.
     *   @return
     *    The funnel characteristics or NULL_var if not a funnel extension line. 
     */
     virtual CATIDrwDimFunnel_var GetFunnel () = 0;
   
    /**
     * Returns whether or not an extension line is funnel.
     *   @return
     *    1 if the extension line is funnel, 0 if not. 
     */
     virtual int HaveFunnel () = 0;

    /**
     * Sets the funnel mode On or Off.
     *   @param mode
     *    Mode On or Off.
     *    <br>Mode legal values are:
     *    <dl>
     *    <dt><tt>0</tt> <dd>the extension line is not funnel.</dd>
     *    <dt><tt>1</tt> <dd>the extension line is funnel.</dd>
     *    </dl>
     */
     virtual void SetFunnel (int mode) = 0;

    /**
     * Gets angular value of slanted extension line.
     *   @param odAngle
     *    Angular value to get.
     */
     virtual HRESULT GetSlant( double *odAngle ) = 0;

    /**
     * Sets angular value of slanted extension line.
     *   @param idAngle
     *    Angular value to set. -90 < idAngle < 90
     *   @return
     *    E_UNEXPECTED if slant isn't available because of geometric condition or wrong input value. 
     */
     virtual HRESULT SetSlant( double idAngle ) = 0;

    /**
     * Inspects if dimension is allowed to be Slanted.
     *   @param boolean
     *    <br>boolean values are:
     *    <dl>
     *    <dt><tt>true</tt> <dd>Slant is available.</dd>
     *    <dt><tt>false</tt> <dd>Slant is disable.</dd>
     *    </dl>    
     */
     virtual HRESULT IsSlantable( boolean *oSlant ) = 0;
};

CATDeclareHandler(CATIDrwDimExtensionLineLinear, CATBaseUnknown);
#endif
